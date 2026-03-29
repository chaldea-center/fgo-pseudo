void BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D340B7 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&StringLiteral_17628/*"btn_master_skill"*/);
    byte_4D340B7 = 1;
  }
  BattlePerformanceMaster_TypeInfo->static_fields->MASTER_SKILL_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_17628/*"btn_master_skill"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceMaster_TypeInfo->static_fields,
    StringLiteral_17628/*"btn_master_skill"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D340B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    byte_4D340B6 = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.masterBuffEffectObjectList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.delayAfterNoblePhantasmBuffData,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleItemEffectObject,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v24;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleItemEffectCoroutines,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = sub_1C93D20(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0);
  *(_BYTE *)(v31 + 20) = 1;
  *(_DWORD *)(v31 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.masterBuffEffectDataClose, v31, v32, v33, v34, v35, v36, v37);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__ChangeMasterFace(
        BattlePerformanceMaster_o *this,
        int32_t faceId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *userGrade; // x0
  int32_t v6; // w21
  UnityEngine_Transform_o *transform; // x0
  struct BattleData_o *data; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4D34046 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&StringLiteral_19867/*"frame_master_bg"*/);
    byte_4D34046 = 1;
  }
  userGrade = this->fields.userGrade;
  if ( !userGrade )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(userGrade, 0, 0);
  userGrade = (UnityEngine_GameObject_o *)this->fields.data;
  if ( !userGrade )
    goto LABEL_10;
  userGrade = (UnityEngine_GameObject_o *)BattleData__getMasterEquipId((BattleData_o *)userGrade, 0);
  if ( !this->fields.face_root
    || (v6 = (int)userGrade,
        transform = UnityEngine_GameObject__get_transform(this->fields.face_root, 0),
        TransformHelper__DestroyChildren(transform, 0, 0),
        (data = this->fields.data) == 0)
    || (MasterFaceManager__CreatePrefab_41387856(
          this->fields.face_root,
          1,
          data->fields.battleGenderType,
          v6,
          2,
          0,
          faceId,
          0),
        (userGrade = this->fields.master_root) == 0)
    || (userGrade = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  userGrade,
                                                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
  {
LABEL_10:
    sub_1C93D2C(userGrade, *(_QWORD *)&faceId);
  }
  UISprite__set_spriteName((UISprite_o *)userGrade, (System_String_o *)StringLiteral_19867/*"frame_master_bg"*/, 0);
  BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v9);
  BattlePerformanceMaster__UpdateMasterSkill(this, v10);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v11);
}


void BattlePerformanceMaster__CloseBoostSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34069 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34069 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D340A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D340A1 = 1;
  }
  win_Retire = this->fields.win_Retire;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0);
  if ( !win_Retire )
    sub_1C93D2C(v5, v6);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Retire->klass->vtable._12_Close.methodPtr)(
    win_Retire,
    v4,
    win_Retire->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34064 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34064 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__CoStartNormalDropItemInterval(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *itemObject,
        int32_t effectId,
        float effectWaitTime,
        float dropItemWaitTime,
        const MethodInfo *method)
{
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D340B4 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_TypeInfo);
    byte_4D340B4 = 1;
  }
  v11 = sub_1C93D20(BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 48) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = itemObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)itemObject, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v11 + 56) = effectId;
  *(float *)(v11 + 40) = effectWaitTime;
  *(float *)(v11 + 60) = dropItemWaitTime;
  return (System_Collections_IEnumerator_o *)v11;
}


UnityEngine_GameObject_o *BattlePerformanceMaster__CreatePopupBuffObject(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v4; // x19
  int PopTextEffectId_k__BackingField; // w21
  BattlePerformance_o *perf; // x20
  UnityEngine_GameObject_o *Object; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  BattlePerformanceMaster_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  bool v12; // w8
  UnityEngine_GameObject_o *master_root; // x8
  BattlePerformanceMaster_o *v14; // x19
  int32_t popColor; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D34098 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_19085/*"effect/ef_poplabel{0:00}"*/);
    byte_4D34098 = 1;
  }
  if ( !masterBuffData )
    goto LABEL_26;
  PopTextEffectId_k__BackingField = masterBuffData->fields._PopTextEffectId_k__BackingField;
  if ( PopTextEffectId_k__BackingField < 1 )
  {
    popColor = masterBuffData->fields.popColor;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &popColor);
    v9 = System_String__Format((System_String_o *)StringLiteral_19085/*"effect/ef_poplabel{0:00}"*/, v8, 0);
    this = (BattlePerformanceMaster_o *)UnityEngine_Resources__Load_object_(
                                          v9,
                                          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !v4->fields.masterBtn )
      goto LABEL_26;
    v10 = this;
    transform = UnityEngine_GameObject__get_transform(v4->fields.masterBtn, 0);
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)v4,
               (UnityEngine_GameObject_o *)v10,
               transform,
               0,
               0);
  }
  else
  {
    perf = v4->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(PopTextEffectId_k__BackingField, 0, perf, 0);
    Object = BattleEffectUtility__getEffectObject(PopTextEffectId_k__BackingField, 0, 1, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object, 0, 0) )
    {
      GameObjectExtensions__SetParent_36750884(Object, v4->fields.masterBtn, 0);
      if ( !byte_4D2A13E )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      GameObjectExtensions__SetLocalScale(Object, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !Object )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(Object, 1, 0);
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object, 0, 0);
  this = 0;
  if ( !v12 )
  {
    if ( Object )
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(Object, 0);
      if ( this )
      {
        v17.fields.x = 0.0;
        v17.fields.z = 0.0;
        v17.fields.y = -42.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0);
        this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(Object, 0);
        master_root = v4->fields.master_root;
        if ( master_root )
        {
          v14 = this;
          this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(master_root, 0);
          if ( this )
          {
            this = (BattlePerformanceMaster_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
            if ( v14 )
            {
              UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v14, (UnityEngine_Transform_o *)this, 0);
              return Object;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C93D2C(this, masterBuffData);
  }
  return (UnityEngine_GameObject_o *)this;
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__DelayEffect(
        BattlePerformanceMaster_o *this,
        int32_t id,
        UnityEngine_GameObject_o *parentObj,
        bool checkObject,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  bool v13; // w23
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D340A8 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__DelayEffect_d__212_TypeInfo);
    byte_4D340A8 = 1;
  }
  v13 = checkObject;
  v14 = sub_1C93D20(BattlePerformanceMaster__DelayEffect_d__212_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  *(_DWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 64) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 64), (int32_t)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v14 + 32) = id;
  *(_QWORD *)(v14 + 40) = parentObj;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 40), (int32_t)parentObj, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v14 + 72) = v13;
  *(float *)(v14 + 48) = x;
  *(float *)(v14 + 52) = y;
  *(float *)(v14 + 56) = z;
  return (System_Collections_IEnumerator_o *)v14;
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__DelayShowItem(
        UnityEngine_GameObject_o *obj,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D340AA & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__DelayShowItem_d__215_TypeInfo);
    byte_4D340AA = 1;
  }
  v5 = sub_1C93D20(BattlePerformanceMaster__DelayShowItem_d__215_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = obj;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)obj, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceMaster__EndNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  this->fields._IsNoblePhantasm_k__BackingField = 0;
  v3 = BattlePerformanceMaster__WaitTimeMasterBuffEffect(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
    (int32_t)started,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void BattlePerformanceMaster__ExceptionalNotchOffset(UnityEngine_GameObject_o *gameObject, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4D340B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D340B5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality(0, (UnityEngine_Object_o *)gameObject, 0);
  if ( !v3 )
  {
    if ( gameObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = UnityEngine_Object__op_Equality(0, (UnityEngine_Object_o *)Component_object, 0);
      if ( v3 )
        return;
      if ( Component_object )
      {
        *(float *)&Component_object[3].klass = *(float *)&Component_object[3].klass + -15.0;
        FSOffset__UpdateOffset((FSOffset_o *)Component_object, 0);
        return;
      }
    }
    sub_1C93D2C(v3, v4);
  }
}


bool BattlePerformanceMaster__GetBattleItemGetPos(
        BattlePerformanceMaster_o *this,
        UnityEngine_Vector3_o *outVector,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Object_o *battleItemTr; // x21
  __int64 v8; // x1
  bool v9; // w21
  UnityEngine_Transform_o *v10; // x0

  if ( (byte_4D340AC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D340AC = 1;
  }
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&outVector->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  outVector->fields.z = z;
  battleItemTr = (UnityEngine_Object_o *)this->fields.battleItemTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(battleItemTr, 0, 0);
  if ( !v9 )
  {
    v10 = this->fields.battleItemTr;
    if ( !v10 )
      sub_1C93D2C(0, v8);
    *outVector = UnityEngine_Transform__get_localPosition(v10, 0);
  }
  return !v9;
}


void BattlePerformanceMaster__HideMaster(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *userGrade; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4D34047 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&StringLiteral_19869/*"frame_master_bg_disable"*/);
    byte_4D34047 = 1;
  }
  userGrade = this->fields.userGrade;
  if ( !userGrade
    || (UnityEngine_GameObject__SetActive(userGrade, 0, 0), (userGrade = this->fields.master_root) == 0)
    || (userGrade = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  userGrade,
                                                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0
    || (UISprite__set_spriteName((UISprite_o *)userGrade, (System_String_o *)StringLiteral_19869/*"frame_master_bg_disable"*/, 0),
        (userGrade = this->fields.face_root) == 0) )
  {
    sub_1C93D2C(userGrade, method);
  }
  transform = UnityEngine_GameObject__get_transform(userGrade, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
  BattlePerformanceMaster__UpdateMasterSkill(this, v5);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v6);
}


UnityEngine_Transform_o *BattlePerformanceMaster__IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  return this->fields.exBattleUiParent;
}


void BattlePerformanceMaster__IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceController_o *v3; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *Components; // x0
  BattlePerformanceMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__bool__o *_9__222_0; // x21
  Il2CppObject *v9; // x22
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  struct BattlePerformanceMaster_PlacePositionSetting_array *placePositionSettings; // x21
  int max_length; // w8
  unsigned int v20; // w22
  bool v21; // w20

  if ( (byte_4D340AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceComponent___);
    sub_1C93AD4(&System_Func_ExtraBattleUserInterfaceComponent__bool__TypeInfo);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi_b__222_0__);
    sub_1C93AD4(&BattlePerformanceMaster___c_TypeInfo);
    byte_4D340AD = 1;
  }
  v3 = BattlePerformanceMaster__get_ExUiController(this, method);
  if ( !v3 )
    goto LABEL_18;
  Components = ExtraBattleUserInterfaceController__get_Components(v3, 0);
  v6 = BattlePerformanceMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Components;
  if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
    v6 = BattlePerformanceMaster___c_TypeInfo;
  }
  _9__222_0 = (System_Func_object__bool__o *)v6->static_fields->__9__222_0;
  if ( !_9__222_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattlePerformanceMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__222_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ExtraBattleUserInterfaceComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__222_0,
      v9,
      Method_BattlePerformanceMaster___c__IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi_b__222_0__,
      0);
    static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
    static_fields->__9__222_0 = (struct System_Func_ExtraBattleUserInterfaceComponent__bool__o *)_9__222_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__222_0,
      (int32_t)_9__222_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v3 = (ExtraBattleUserInterfaceController_o *)System_Linq_Enumerable__Any_object__52110824(
                                                 v7,
                                                 (System_Func_TSource__bool__o *)_9__222_0,
                                                 (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceComponent___);
  placePositionSettings = this->fields.placePositionSettings;
  if ( !placePositionSettings )
    goto LABEL_18;
  max_length = placePositionSettings->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = (unsigned __int8)v3 & 1;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1C93D34(v3);
      v3 = (ExtraBattleUserInterfaceController_o *)placePositionSettings->m_Items[v20];
      if ( !v3 )
        break;
      BattlePerformanceMaster_PlacePositionSetting__AdjustPosition(
        (BattlePerformanceMaster_PlacePositionSetting_o *)v3,
        v21,
        v17);
      max_length = placePositionSettings->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C93D2C(v3, v4);
  }
LABEL_16:
  BattlePerformanceMaster__ProcLightExButton(this, this->fields.lastProcLightOnTarget, v17);
}


void BattlePerformanceMaster__IBattlePerformanceExtraUiParent_OnTapButtonCallback(
        BattlePerformanceMaster_o *this,
        int32_t execType,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  __int64 v7; // x22
  ExtraBattleUserInterfaceData_ExecSkillData_o *Skill; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x20
  BattleData_o *v19; // x21
  int32_t v20; // w23
  System_Action_int__o *v21; // x24
  __int64 *v22; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_Dictionary_object__object__o *exBattleUiSkillInfo; // x21
  Il2CppObject *v25; // x20
  BattleLogic_UseSkillObject_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D340AE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__BattleSkillInfoData__TryGetValue__);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass223_0__IBattlePerformanceExtraUiParent_OnTapButtonCallback_b__0__);
    sub_1C93AD4(&BattlePerformanceMaster___c__DisplayClass223_0_TypeInfo);
    sub_1C93AD4(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_3510/*"CLICK_SWITCH_PARTY"*/);
    sub_1C93AD4(&StringLiteral_3477/*"CLICK_EX_UI_SKILL"*/);
    byte_4D340AE = 1;
  }
  value = 0;
  v7 = sub_1C93D20(BattlePerformanceMaster___c__DisplayClass223_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_23;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( execType == 2 )
  {
    if ( exUiData )
    {
      Skill = ExtraBattleUserInterfaceData__get_Skill(exUiData, 0);
      if ( !Skill )
        return;
      data = this->fields.data;
      if ( data )
      {
        exBattleUiSkillInfo = (System_Collections_Generic_Dictionary_object__object__o *)data->fields.exBattleUiSkillInfo;
        Skill = ExtraBattleUserInterfaceData__get_Skill(exUiData, 0);
        if ( Skill )
        {
          Skill = (ExtraBattleUserInterfaceData_ExecSkillData_o *)ExtraBattleUserInterfaceData_ExecSkillData__get_SkillIdLvKey(
                                                                    Skill,
                                                                    0);
          if ( exBattleUiSkillInfo )
          {
            if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                    exBattleUiSkillInfo,
                    (Il2CppObject *)Skill,
                    &value,
                    (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__BattleSkillInfoData__TryGetValue__) )
              return;
            v25 = value;
            v26 = (BattleLogic_UseSkillObject_o *)sub_1C93D20(BattleLogic_UseSkillObject_TypeInfo);
            BattleLogic_UseSkillObject___ctor(v26, (BattleSkillInfoData_o *)v25, 0);
            this->fields.tmp_useSkill = v26;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.tmp_useSkill,
              (int32_t)v26,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            Skill = (ExtraBattleUserInterfaceData_ExecSkillData_o *)this->fields.myFsm;
            if ( Skill )
            {
              v22 = &StringLiteral_3477/*"CLICK_EX_UI_SKILL"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_23:
    sub_1C93D2C(Skill, v9);
  }
  if ( execType != 1 )
    return;
  Skill = (ExtraBattleUserInterfaceData_ExecSkillData_o *)this->fields.perf;
  if ( !Skill )
    goto LABEL_23;
  Skill = (ExtraBattleUserInterfaceData_ExecSkillData_o *)BattlePerformance__IsEnableToSwitchPlayerParty(
                                                            (BattlePerformance_o *)Skill,
                                                            (int32_t *)(v7 + 24),
                                                            0);
  if ( ((unsigned __int8)Skill & 1) == 0 )
    return;
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_23;
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  v19 = this->fields.data;
  v20 = *(_DWORD *)(v7 + 24);
  v21 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_BattlePerformanceMaster___c__DisplayClass223_0__IBattlePerformanceExtraUiParent_OnTapButtonCallback_b__0__,
    0);
  if ( !switchPartyConfirmWindow )
    goto LABEL_23;
  BattleSwitchPartyConfirmWindow__SetSwitchPartyData(switchPartyConfirmWindow, v19, v20, v21, 0);
  Skill = (ExtraBattleUserInterfaceData_ExecSkillData_o *)this->fields.myFsm;
  if ( !Skill )
    goto LABEL_23;
  v22 = &StringLiteral_3510/*"CLICK_SWITCH_PARTY"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Skill, (System_String_o *)*v22, 0);
}


void BattlePerformanceMaster__Initialize(
        BattlePerformanceMaster_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  __int64 v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  void *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  CommandSpellWindowComponent_CloseButtonCallBack_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct CommandSpellWindowComponent_o *v39; // x21
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct BattleData_o *v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct BattleData_o *v60; // x1
  UnityEngine_Transform_o *v61; // x21
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v63; // x22
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v71; // x22
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  UnityEngine_Object_o *fieldConf; // x21
  BattleFieldConfConponent_o *v79; // x21
  System_Action_o *v80; // x22
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct BattleData_o *v87; // x1
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  AssetData_o *v97; // x21
  int32_t v98; // w1
  UnityEngine_GameObject_o *v99; // x21
  UnityEngine_GameObject_array *Children; // x22
  System_Func_object__bool__o *v101; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  UnityEngine_Object_o *battleItemUi; // x20
  struct BattlePerformanceMaster_PlacePositionSetting_array *placePositionSettings; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v113; // x22
  BattlePerformanceMaster_PlacePositionSetting_o *v114; // x8
  UnityEngine_Object_o *targetTransform; // x20
  UnityEngine_Object_o *parent; // x20
  const MethodInfo *v117; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *battleItemTr; // x20
  const MethodInfo *v120; // x1
  UnityEngine_GameObject_o *v121; // x20
  UnityEngine_GameObject_o *v122; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v124; // 0:kr14_12.12
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34044 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_Any_GameObject___);
    sub_1C93AD4(&Method_BattlePerformanceMaster_OnCloseFieldConf__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procUseCommandSpell__);
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_1C93AD4(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&System_Func_GameObject__bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass95_0__Initialize_b__0__);
    sub_1C93AD4(&BattlePerformanceMaster___c__DisplayClass95_0_TypeInfo);
    sub_1C93AD4(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
    sub_1C93AD4(&StringLiteral_3101/*"Battle/Common"*/);
    sub_1C93AD4(&StringLiteral_19022/*"ef_masterskill_flash"*/);
    byte_4D34044 = 1;
  }
  v9 = sub_1C93D20(BattlePerformanceMaster___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  this->fields.perf = inperf;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.perf, (int32_t)inperf, v10, v11, v12, v13, v14, v15);
  this->fields.data = indata;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)indata, v16, v17, v18, v19, v20, v21);
  this->fields.logic = inlogic;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v22, v23, v24, v25, v26, v27);
  skillBtn = this->fields.skillBtn;
  if ( !skillBtn )
    goto LABEL_90;
  skillBtn = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0);
  if ( !skillBtn )
    goto LABEL_90;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0);
  skillBtn = this->fields.menuBtn;
  this->fields.pos_skillbtn = localPosition;
  if ( !skillBtn )
    goto LABEL_90;
  skillBtn = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0);
  if ( !skillBtn )
    goto LABEL_90;
  v124 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0);
  skillBtn = this->fields.win_Skill;
  this->fields.pos_menubtn = v124;
  if ( !skillBtn )
    goto LABEL_90;
  BattleMasterSkillWindowComponent__setInitData((BattleMasterSkillWindowComponent_o *)skillBtn, 0, 0.1, 0, 0);
  skillBtn = this->fields.win_Skill;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_90;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_90;
  skillBtn = this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_90;
  CommandSpellWindowComponent__InitializeCommandSpell(
    (CommandSpellWindowComponent_o *)skillBtn,
    this->fields.perf,
    1,
    data->fields.temporarySpell,
    0);
  win_Spell = this->fields.win_Spell;
  v32 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C93D20(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0);
  if ( !win_Spell )
    goto LABEL_90;
  win_Spell->fields.callback_close = v32;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&win_Spell->fields.callback_close,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = this->fields.win_Spell;
  v40 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_1C93D20(CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0);
  if ( !v39 )
    goto LABEL_90;
  v39->fields.callback_use = v40;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v39->fields.callback_use, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  skillBtn = this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_90;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_90;
  v53 = this->fields.data;
  *((_QWORD *)skillBtn + 11) = v53;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)skillBtn + 88), (int32_t)v53, v47, v48, v49, v50, v51, v52);
  skillBtn = this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_90;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_90;
  v60 = this->fields.data;
  *((_QWORD *)skillBtn + 19) = v60;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)skillBtn + 152), (int32_t)v60, v54, v55, v56, v57, v58, v59);
  skillBtn = this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_90;
  skillBtn = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_90;
  v61 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf, 0);
  if ( !skillBtn )
    goto LABEL_90;
  v125.fields.y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0).fields.y;
  if ( !v61 )
    goto LABEL_90;
  v125.fields.x = 0.0;
  v125.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v61, v125, 0);
  skillBtn = this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_90;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  v63 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C93D20(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v63,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_90;
  warBoard_win_EnemyConf->fields.callback_close = v63;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (int32_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  skillBtn = this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_90;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  win_EnemyConf = this->fields.win_EnemyConf;
  v71 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C93D20(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v71,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0);
  if ( !win_EnemyConf )
    goto LABEL_90;
  win_EnemyConf->fields.callback_close = v71;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&win_EnemyConf->fields.callback_close,
    (int32_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0, 0) )
  {
    v79 = this->fields.fieldConf;
    v80 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v80, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0);
    if ( !v79 )
      goto LABEL_90;
    BattleFieldConfConponent__Initialize(v79, v80, 0);
  }
  skillBtn = this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_90;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_90;
  v87 = this->fields.data;
  *((_QWORD *)skillBtn + 13) = v87;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)skillBtn + 104), (int32_t)v87, v81, v82, v83, v84, v85, v86);
  BattlePerformanceMaster__updateShortSkill(this, v88);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v89);
  BattlePerformanceMaster__updateSkipDead(this, v90);
  skillBtn = this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_90;
  BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)skillBtn, this->fields.data, 0);
  skillBtn = this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 424LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 432LL));
  skillBtn = this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_90;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  skillBtn = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3101/*"Battle/Common"*/, 0);
  if ( !v9 )
    goto LABEL_90;
  v97 = (AssetData_o *)skillBtn;
  v98 = StringLiteral_19022/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v9 + 16) = StringLiteral_19022/*"ef_masterskill_flash"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), v98, v91, v92, v93, v94, v95, v96);
  if ( !v97 )
    goto LABEL_90;
  skillBtn = AssetData__GetObject_object__51927708(
               v97,
               *(System_String_o **)(v9 + 16),
               (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !this->fields.win_Menu )
    goto LABEL_90;
  v99 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v99, 0, 0) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0);
    v101 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v101,
      (Il2CppObject *)v9,
      Method_BattlePerformanceMaster___c__DisplayClass95_0__Initialize_b__0__,
      0);
    if ( !BasicHelper__Any_object__51960868(
            (System_Object_array *)Children,
            (System_Func_T__bool__o *)v101,
            (const MethodInfo_318DC24 *)Method_BasicHelper_Any_GameObject___) )
    {
      skillBtn = this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_90;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v99, transform, 0, 0);
      this->fields.skillBtnFlashObject = Object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.skillBtnFlashObject,
        (int32_t)Object,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
    }
    skillBtn = this->fields.skillBtnFlashObject;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0);
      goto LABEL_53;
    }
LABEL_90:
    sub_1C93D2C(skillBtn, v28);
  }
LABEL_53:
  this->fields._IsNoblePhantasm_k__BackingField = 0;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0, 0) )
  {
    skillBtn = this->fields.battleItemUi;
    if ( !skillBtn )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0);
  }
  if ( !this->fields.isAppliedExceptionalNotchOffset )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    skillBtn = (void *)FSUtility__IsCalcNotch(2, 0);
    if ( ((unsigned __int8)skillBtn & 1) != 0 )
    {
      placePositionSettings = this->fields.placePositionSettings;
      if ( placePositionSettings )
      {
        this->fields.isAppliedExceptionalNotchOffset = 1;
        max_length = placePositionSettings->max_length;
        if ( (int)max_length >= 1 )
        {
          v113 = 0;
          do
          {
            if ( v113 >= (unsigned int)max_length )
              sub_1C93D34(skillBtn);
            v114 = placePositionSettings->m_Items[v113];
            if ( v114 )
            {
              targetTransform = (UnityEngine_Object_o *)v114->fields.targetTransform;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              skillBtn = (void *)UnityEngine_Object__op_Equality(0, targetTransform, 0);
              if ( ((unsigned __int8)skillBtn & 1) == 0 )
              {
                if ( !targetTransform )
                  goto LABEL_90;
                parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)targetTransform,
                                                   0);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                skillBtn = (void *)UnityEngine_Object__op_Equality(0, parent, 0);
                if ( ((unsigned __int8)skillBtn & 1) == 0 )
                {
                  if ( !parent )
                    goto LABEL_90;
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0);
                  if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
                  BattlePerformanceMaster__ExceptionalNotchOffset(gameObject, v117);
                }
              }
            }
            LODWORD(max_length) = placePositionSettings->max_length;
            ++v113;
          }
          while ( (__int64)v113 < (int)max_length );
        }
        battleItemTr = (UnityEngine_Object_o *)this->fields.battleItemTr;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(0, battleItemTr, 0) )
          goto LABEL_86;
        skillBtn = this->fields.battleItemTr;
        if ( skillBtn )
        {
          v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillBtn, 0);
          if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
          BattlePerformanceMaster__ExceptionalNotchOffset(v121, v120);
LABEL_86:
          v122 = this->fields.battleItemUi;
          if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
          BattlePerformanceMaster__ExceptionalNotchOffset(v122, v28);
          return;
        }
        goto LABEL_90;
      }
    }
  }
}


void BattlePerformanceMaster__InitializeBattleItem(
        BattlePerformanceMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleItemUi; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_Object_o *battleItemIcon; // x20
  UISprite_o *v9; // x20
  int32_t monitor; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D340A4 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D340A4 = 1;
  }
  entity = 0;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0, 0) )
  {
    Instance = this->fields.battleItemUi;
    if ( !Instance )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(Instance, 1, 0);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
LABEL_20:
    sub_1C93D2C(Instance, v6);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleItemIcon, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      v9 = this->fields.battleItemIcon;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v9, monitor, 0);
      goto LABEL_18;
    }
    goto LABEL_20;
  }
LABEL_18:
  BattlePerformanceMaster__UpdateBattleItemUi(this, v6);
}


bool BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_1C93D2C(0, method);
  return BattleWindowComponent__isClose(fieldConf, 0);
}


bool BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340A3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15663/*"Wait"*/);
    byte_4D340A3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0)) == 0 )
    sub_1C93D2C(myFsm, method);
  return System_String__IndexOf_64484116((System_String_o *)myFsm, (System_String_o *)StringLiteral_15663/*"Wait"*/, 0) >= 0;
}


void BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34094 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3524/*"CLOSE_CONF"*/);
    byte_4D34094 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3524/*"CLOSE_CONF"*/, 0);
}


void BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340A2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D340A2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340A0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D340A0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__OnDestroy(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.exUiController = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.exUiController, 0, v2, v3, v4, v5, v6, v7);
}


void BattlePerformanceMaster__OnRetireDialog(BattlePerformanceMaster_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D34084 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_9676/*"OK"*/);
    byte_4D34084 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.logic) == 0)
    || (BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9676/*"OK"*/, 0),
        (Instance = (CommonUI_o *)this->fields.perf) == 0) )
  {
    sub_1C93D2C(Instance, v5);
  }
  BattlePerformance__ResetSoundMask((BattlePerformance_o *)Instance, 0);
}


void BattlePerformanceMaster__OpenBoostSkillConfComplete(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34067 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34067 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__OpenRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D34083 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__OpenRetireDialog_d__167_TypeInfo);
    byte_4D34083 = 1;
  }
  v3 = sub_1C93D20(BattlePerformanceMaster__OpenRetireDialog_d__167_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3409E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3465/*"CLICK_CKRETIRE"*/);
    byte_4D3409E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3465/*"CLICK_CKRETIRE"*/, 0);
}


void BattlePerformanceMaster__OpenSkillConfComplete(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34062 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34062 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


bool BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D3406D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4D3406D = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0,
                                  0);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_11:
    sub_1C93D2C(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1C93D20(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ((void (__fastcall *)(BattleSkillSelectAddFuncConfComponent_o *, _QWORD, const MethodInfo *))SkillSelectAddFuncConfWindow->klass->vtable._10_Open.methodPtr)(
      SkillSelectAddFuncConfWindow,
      0,
      SkillSelectAddFuncConfWindow->klass->vtable._10_Open.method);
    return 1;
  }
  return 0;
}


void BattlePerformanceMaster__OverwriteMasterBackgroundImage(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleMasterImageEntity_o *BattleMasterImageEntity; // x0
  int32_t OverwriteMasterBackgroundId; // w0
  int32_t v6; // w20
  BattleDataDefine_c *v7; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v9; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D34048 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&BattleDataDefine_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_19870/*"frame_master_bg_{0}"*/);
    sub_1C93AD4(&StringLiteral_3122/*"BattleAssetUIAtlas"*/);
    byte_4D34048 = 1;
  }
  atlas = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleMasterImageEntity = BattleData__GetBattleMasterImageEntity(data, 0);
  if ( BattleMasterImageEntity )
  {
    OverwriteMasterBackgroundId = BattleMasterImageEntity__GetOverwriteMasterBackgroundId(BattleMasterImageEntity, 0);
    if ( OverwriteMasterBackgroundId >= 1 )
    {
      v6 = OverwriteMasterBackgroundId;
      v7 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v7 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v7->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3122/*"BattleAssetUIAtlas"*/, 0) )
      {
        data = (BattleData_o *)this->fields.master_root;
        if ( data )
        {
          data = (BattleData_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            v9 = (UISprite_o *)data;
            UISprite__set_atlas((UISprite_o *)data, atlas, 0);
            v12 = v6;
            v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
            v11 = System_String__Format((System_String_o *)StringLiteral_19870/*"frame_master_bg_{0}"*/, v10, 0);
            UISprite__set_spriteName(v9, v11, 0);
            return;
          }
        }
LABEL_15:
        sub_1C93D2C(data, method);
      }
    }
  }
}


void BattlePerformanceMaster__PlayInterruption(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C93D2C(0, method);
  BattleLogic__PlayInterruption(logic, 0);
}


void BattlePerformanceMaster__PlayPartyReorganization(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C93D2C(0, method);
  BattleLogic__PlayPartyReorganization(logic, 0);
}


void BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D34093 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__189_0__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34093 = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0, 0) )
  {
    v4 = this->fields.fieldConf;
    v5 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__189_0__,
      0);
    if ( !v4 )
      sub_1C93D2C(v6, v7);
    BattleFieldConfConponent__Close(v4, v5, 0);
  }
}


void BattlePerformanceMaster__ProcCloseSwitchPartyWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4D340B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster__ProcCloseSwitchPartyWindow_b__225_0__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D340B0 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0 )
    sub_1C93D2C(v4, v5);
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
  {
    v9 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseSwitchPartyWindow_b__225_0__,
      0);
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      v9,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  }
}


void BattlePerformanceMaster__ProcConfirmSwitchPartyWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4D340B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster__ProcConfirmSwitchPartyWindow_b__226_0__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D340B1 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0 )
    sub_1C93D2C(v4, v5);
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
  {
    v9 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcConfirmSwitchPartyWindow_b__226_0__,
      0);
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      v9,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  }
}


void BattlePerformanceMaster__ProcExBattleUiSkillBegin(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4D340B2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D340B2 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
    goto LABEL_11;
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
    perf,
    0,
    perf->klass[1]._1.events);
  BattlePerformanceMaster__ProcLight(this, 3, v4);
  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__SetCloseSelectSvtWindow(perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__SetCloseSelectMainSubSvtWindow(perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__SetCloseCommandTypeWindow(perf, 0), (perf = (BattlePerformance_o *)this->fields.myFsm) == 0) )
  {
LABEL_11:
    sub_1C93D2C(perf, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__ProcExBattleUiSkillFinish(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattlePerformanceMaster__ProcLight(this, 0, v2);
}


void BattlePerformanceMaster__ProcLight(BattlePerformanceMaster_o *this, int32_t target, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *menuBtn; // x1
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  menuBtn = this->fields.menuBtn;
  this->fields.lastProcLightOnTarget = target;
  BattlePerformanceMaster__proclight(this, menuBtn, target == 1, v3);
  BattlePerformanceMaster__proclight(v7, this->fields.skillBtn, target == 2, v8);
  BattlePerformanceMaster__ProcLightExButton(this, target, v9);
}


void BattlePerformanceMaster__ProcLightExButton(
        BattlePerformanceMaster_o *this,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ExtraBattleUserInterfaceController_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *Components; // x19
  System_Action_object__o *v16; // x20

  if ( (byte_4D34089 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass174_0__ProcLightExButton_b__0__);
    sub_1C93AD4(&BattlePerformanceMaster___c__DisplayClass174_0_TypeInfo);
    byte_4D34089 = 1;
  }
  v5 = sub_1C93D20(BattlePerformanceMaster___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v5 + 24) = target,
        (v6 = BattlePerformanceMaster__get_ExUiController(this, v14)) == 0) )
  {
    sub_1C93D2C(v6, v7);
  }
  Components = (System_Collections_Generic_IEnumerable_T__o *)ExtraBattleUserInterfaceController__get_Components(v6, 0);
  v16 = (System_Action_object__o *)sub_1C93D20(System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattlePerformanceMaster___c__DisplayClass174_0__ProcLightExButton_b__0__,
    0);
  BasicHelper__ForEach_object_(
    Components,
    (System_Action_T__o *)v16,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
}


void BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v6; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4D34092 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__188_0__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D34092 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_13;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(fieldConf, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      perf = (BattlePerformance_o *)this->fields.fieldConf;
      if ( perf )
      {
        BattleFieldConfConponent__SetConfData(
          (BattleFieldConfConponent_o *)perf,
          data->fields._FieldEnvData_k__BackingField,
          0);
        v6 = this->fields.fieldConf;
        v7 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__188_0__,
          0);
        if ( v6 )
        {
          BattleFieldConfConponent__Open(v6, v7, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C93D2C(perf, method);
  }
}


void BattlePerformanceMaster__ProcOpenSwitchPartyWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v4; // x2
  struct BattlePerformance_o *v5; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4D340AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster__ProcOpenSwitchPartyWindow_b__224_0__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D340AF = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_14;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
    goto LABEL_14;
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
    perf,
    0,
    perf->klass[1]._1.events);
  BattlePerformanceMaster__ProcLight(this, 3, v4);
  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__SetCloseSelectSvtWindow(perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__SetCloseSelectMainSubSvtWindow(perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__SetCloseCommandTypeWindow(perf, 0), (v5 = this->fields.perf) == 0)
    || (statusPerf = v5->fields.statusPerf) == 0 )
  {
LABEL_14:
    sub_1C93D2C(perf, method);
  }
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
  {
    v8 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcOpenSwitchPartyWindow_b__224_0__,
      0);
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._10_Open.methodPtr)(
      switchPartyConfirmWindow,
      v8,
      switchPartyConfirmWindow->klass->vtable._10_Open.method);
  }
}


void BattlePerformanceMaster__ProcWaveRestart(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0

  BattlePerformanceMaster__ProcLight(this, 0, v2);
  BattlePerformanceMaster__proclight(v4, this->fields.menuBtn, 0, v5);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu
    || (BattleMenuWindowComponent__ProcWaveRestart(win_Menu, 0),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.logic) == 0) )
  {
    sub_1C93D2C(win_Menu, v6);
  }
  BattleLogic__ProcWaveRestart((BattleLogic_o *)win_Menu, 0);
}


void BattlePerformanceMaster__SerializeFieldNotNullCheck(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__SetupMasterSkillBtn(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UIAtlas_o *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *klass; // x20
  System_String_o *v7; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v9; // x20

  if ( (byte_4D34049 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&StringLiteral_3101/*"Battle/Common"*/);
    sub_1C93AD4(&StringLiteral_3122/*"BattleAssetUIAtlas"*/);
    byte_4D34049 = 1;
  }
  mAtlas = (UIAtlas_o *)BattlePerformanceMaster_TypeInfo;
  if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
    mAtlas = (UIAtlas_o *)BattlePerformanceMaster_TypeInfo;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_18;
  klass = (System_String_o *)mAtlas[1].fields.mSpriteIndices->klass;
  v7 = System_Int32__ToString((int)data + 112, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_64425724(klass, v7, 0);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_18;
  v9 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_18;
  if ( UIAtlas__GetSprite(mAtlas, v9, 0) )
    goto LABEL_16;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mAtlas = (UIAtlas_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3101/*"Battle/Common"*/, 0);
  if ( !mAtlas
    || (mAtlas = (UIAtlas_o *)AssetData__GetObject_object__51927708(
                                (AssetData_o *)mAtlas,
                                (System_String_o *)StringLiteral_3122/*"BattleAssetUIAtlas"*/,
                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888)) == 0
    || (mAtlas = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)mAtlas,
                                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_18:
    sub_1C93D2C(mAtlas, method);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, mAtlas, 0);
LABEL_16:
  mAtlas = (UIAtlas_o *)this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_18;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v9, 0);
}


void BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34091 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3479/*"CLICK_FIELD"*/);
    byte_4D34091 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3479/*"CLICK_FIELD"*/, 0);
}


void BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D3409F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_OnCompShowRetireSA__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_ShowRetireSA__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D3409F = 1;
  }
  v3 = Method_BattlePerformanceMaster_ShowRetireSA__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_ShowRetireSA__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_ShowRetireSA__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  win_Retire = this->fields.win_Retire;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCompShowRetireSA__, 0);
  if ( !win_Retire )
    sub_1C93D2C(v7, v8);
  BattleRetireWindowComponent__Open(win_Retire, v6, 0);
}


void BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x19
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4D3406E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_3295/*"CANCEL"*/);
    byte_4D3406E = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3295/*"CANCEL"*/, 0);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0);
    BattlePerformanceMaster__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v7);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_16;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0, 0) )
      {
        this = (BattlePerformanceMaster_o *)v6->fields.perf;
        if ( this )
        {
          this = (BattlePerformanceMaster_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                (BattlePerformance_o *)this,
                                                0);
          if ( this )
          {
            LOBYTE(this->fields.menuBtn) = 0;
            return;
          }
        }
LABEL_16:
        sub_1C93D2C(this, skillInfo);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__StartBattleGetEffect(
        BattlePerformanceMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *battleItemEffectObject; // x0
  Il2CppObject *v6; // x21
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_Object_o *battleItemIcon; // x22
  const MethodInfo *v9; // x4
  struct System_Collections_Generic_Dictionary_int__Coroutine__o *battleItemEffectCoroutines; // x22
  System_Collections_IEnumerator_o *v11; // x0
  Il2CppObject *v12; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D340A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D340A9 = 1;
  }
  v12 = 0;
  value = 0;
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectObject;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &value,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
  {
    v6 = value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
    {
      battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)value;
      if ( !value )
        goto LABEL_29;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0) )
        return;
    }
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectObject;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
  }
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &v12,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
  {
    return;
  }
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemIcon, 0, 0) )
  {
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemIcon;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    battleItemUi = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)battleItemEffectObject,
                                             0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(battleItemUi, 0, 0) )
    battleItemUi = (UnityEngine_Object_o *)this->fields.master_root;
  battleItemEffectCoroutines = this->fields.battleItemEffectCoroutines;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v11 = BattlePerformanceMaster__DelayEffect(
          this,
          id,
          (UnityEngine_GameObject_o *)battleItemUi,
          1,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v9);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_MonoBehaviour__StartCoroutine_72105100(
                                                                                     (UnityEngine_MonoBehaviour_o *)this,
                                                                                     v11,
                                                                                     0);
  if ( !battleItemEffectCoroutines )
LABEL_29:
    sub_1C93D2C(battleItemEffectObject, *(_QWORD *)&id);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)battleItemEffectCoroutines,
    id,
    (Il2CppObject *)battleItemEffectObject,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
}


void BattlePerformanceMaster__StartBattleGetEffectForBattleSkillDrop(
        BattlePerformanceMaster_o *this,
        int32_t effectId,
        UnityEngine_GameObject_o *parentObj,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_IEnumerator_o *v8; // x1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v8 = BattlePerformanceMaster__DelayEffect(
         this,
         effectId,
         parentObj,
         0,
         UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
         v4);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v8, 0);
}


void BattlePerformanceMaster__StartBattleItemAppearEffect(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *parentObj,
        int32_t id,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v9; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_GameObject_o **v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  UnityEngine_GameObject_o *v26; // x2
  const MethodInfo *v27; // x4
  System_Collections_IEnumerator_o *v28; // x0
  Il2CppClass *klass; // x20
  System_Collections_IEnumerator_o *v30; // x0
  __int64 *v31; // x21
  __int64 v32; // x19
  System_Action_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  UnityEngine_GameObject_o *v41; // x2
  const MethodInfo *v42; // x4
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D340AB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_BattleDropHighPosition___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_BattleDropRandomBound___);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass216_0__StartBattleItemAppearEffect_b__0__);
    sub_1C93AD4(&BattlePerformanceMaster___c__DisplayClass216_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_24495/*"treasure"*/);
    byte_4D340AB = 1;
  }
  component = 0;
  v9 = sub_1C93D20(BattlePerformanceMaster___c__DisplayClass216_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_26;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = parentObj;
  v18 = (UnityEngine_GameObject_o **)(v9 + 48);
  *(_DWORD *)(v9 + 40) = id;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)parentObj, v19, v20, v21, v22, v23, v24);
  if ( !*(_DWORD *)(v9 + 40) )
    return;
  Component_object = *v18;
  if ( !*v18 )
    goto LABEL_26;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_BattleDropHighPosition___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( component )
    {
      Component_object = (UnityEngine_GameObject_o *)component[2].klass;
      if ( Component_object )
      {
        Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
        if ( Component_object )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0);
          v45.fields.x = localPosition.fields.x;
          v45.fields.z = localPosition.fields.z;
          v25 = *(_DWORD *)(v9 + 40);
          v26 = *(UnityEngine_GameObject_o **)(v9 + 48);
          v45.fields.y = localPosition.fields.y + 0.22;
          *(float *)(v9 + 16) = localPosition.fields.x;
          *(float *)(v9 + 20) = localPosition.fields.y + 0.22;
          *(float *)(v9 + 24) = localPosition.fields.z;
          v28 = BattlePerformanceMaster__DelayEffect(this, v25, v26, 0, v45, v27);
          Component_object = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_72105100(
                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                           v28,
                                                           0);
          if ( component )
          {
            Component_object = (UnityEngine_GameObject_o *)component[2].klass;
            if ( Component_object )
            {
              UnityEngine_GameObject__SetActive(Component_object, 0, 0);
              if ( component )
              {
                klass = component[2].klass;
                if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
                v30 = BattlePerformanceMaster__DelayShowItem((UnityEngine_GameObject_o *)klass, waitTime, v11);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C93D2C(Component_object, v11);
  }
  Component_object = *(UnityEngine_GameObject_o **)(v9 + 48);
  if ( !Component_object )
    goto LABEL_26;
  v31 = (__int64 *)(v9 + 56);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   (Il2CppObject **)(v9 + 56),
                                                   (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_BattleDropRandomBound___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v32 = *v31;
    if ( *v31 )
    {
      *(float *)(v32 + 92) = waitTime;
      v33 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v9,
        Method_BattlePerformanceMaster___c__DisplayClass216_0__StartBattleItemAppearEffect_b__0__,
        0);
      *(_QWORD *)(v32 + 128) = v33;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 128), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      return;
    }
    goto LABEL_26;
  }
  Component_object = *v18;
  if ( !*v18 )
    goto LABEL_26;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  if ( !Component_object )
    goto LABEL_26;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                   (UnityEngine_Transform_o *)Component_object,
                                                   (System_String_o *)StringLiteral_24495/*"treasure"*/,
                                                   0);
  if ( !Component_object )
    goto LABEL_26;
  v46 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0);
  v40 = *(_DWORD *)(v9 + 40);
  v41 = *(UnityEngine_GameObject_o **)(v9 + 48);
  *(UnityEngine_Vector3_o *)(v9 + 16) = v46;
  v30 = BattlePerformanceMaster__DelayEffect(this, v40, v41, 0, v46, v42);
LABEL_24:
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v30, 0);
}


void BattlePerformanceMaster__StartNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *effectAfterNoblePhantasmCoroutine; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  int32_t size; // w2
  int v14; // w9

  if ( (byte_4D340A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    byte_4D340A7 = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_72105720(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0);
    this->fields.effectAfterNoblePhantasmCoroutine = 0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
      0,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    delayAfterNoblePhantasmBuffData = this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_1C93D2C(v10, v11);
    size = delayAfterNoblePhantasmBuffData->fields._size;
    v14 = delayAfterNoblePhantasmBuffData->fields._version + 1;
    delayAfterNoblePhantasmBuffData->fields._size = 0;
    delayAfterNoblePhantasmBuffData->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)delayAfterNoblePhantasmBuffData->fields._items, 0, size, 0);
  }
}


void BattlePerformanceMaster__StartNormalDropItemInterval(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *itemObject,
        int32_t effectId,
        float effectWaitTime,
        float dropItemWaitTime,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4D340B3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D340B3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemObject, 0, 0) )
  {
    started = BattlePerformanceMaster__CoStartNormalDropItemInterval(
                this,
                itemObject,
                effectId,
                effectWaitTime,
                dropItemWaitTime,
                v11);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
}


void BattlePerformanceMaster__UpdateBattleItemUi(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v5; // x19
  System_String_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4D340A5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4D340A5 = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v3);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0, 0) )
  {
    v5 = this->fields.battleItemCountLabel;
    Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !Instance || (Instance = BasicHelper__ToCommaString(*(_DWORD *)&Instance->fields._firstChar, 0), !v5) )
      sub_1C93D2C(Instance, v7);
    UILabel__set_text(v5, Instance, 0);
  }
}


void BattlePerformanceMaster__UpdateMasterSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UISprite_o *data; // x0
  UISprite_o *skillBtnSp; // x20
  struct BattleData_o *v5; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w1

  if ( (byte_4D3404B & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3501/*"CLICK_SKILL"*/);
    byte_4D3404B = 1;
  }
  data = (UISprite_o *)this->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( !BattleData__IsHideMasterSkill((BattleData_o *)data, 0) )
  {
    data = this->fields.skillBtnSp;
    if ( !data )
      goto LABEL_19;
    UISprite__set_atlas(data, this->fields.battleUiAtlas, 0);
    skillBtnSp = this->fields.skillBtnSp;
    data = (UISprite_o *)BattlePerformanceMaster_TypeInfo;
    if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
    if ( !skillBtnSp )
      goto LABEL_19;
    UISprite__set_spriteName(
      skillBtnSp,
      BattlePerformanceMaster_TypeInfo->static_fields->MASTER_SKILL_BUTTON_SP_NAME,
      0);
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_19;
    if ( v5->fields.masterSkillIconId >= 1 )
      BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    data = (UISprite_o *)this->fields.skillBtn;
    if ( !data )
      goto LABEL_19;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( ComponentInChildren_object )
      {
        v13 = StringLiteral_3501/*"CLICK_SKILL"*/;
        ComponentInChildren_object[2].monitor = (void *)StringLiteral_3501/*"CLICK_SKILL"*/;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&ComponentInChildren_object[2].monitor,
          v13,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        goto LABEL_18;
      }
LABEL_19:
      sub_1C93D2C(data, method);
    }
  }
LABEL_18:
  BattlePerformanceMaster__updateSkillIcon(this, method);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__UseSkill(BattlePerformanceMaster_o *this, bool playSe, const MethodInfo *method)
{
  PlayMakerFSM_o *perf; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D3406B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_UseSkill__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3295/*"CANCEL"*/);
    byte_4D3406B = 1;
  }
  isOpenOtherWindow = 0;
  perf = (PlayMakerFSM_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  if ( BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0) )
  {
    perf = this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_3295/*"CANCEL"*/, 0);
      return;
    }
LABEL_23:
    sub_1C93D2C(perf, playSe);
  }
  if ( playSe )
  {
    v12 = Method_BattlePerformanceMaster_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_UseSkill__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_UseSkill__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.actSkillObject,
    (int32_t)useSkillObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_23;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v17) )
  {
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v18);
    if ( isOpenOtherWindow )
    {
      perf = (PlayMakerFSM_o *)this->fields.perf;
      if ( !perf )
        goto LABEL_23;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)perf,
                                                               0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0, 0) )
      {
        perf = (PlayMakerFSM_o *)this->fields.perf;
        if ( !perf )
          goto LABEL_23;
        perf = (PlayMakerFSM_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow((BattlePerformance_o *)perf, 0);
        if ( !perf )
          goto LABEL_23;
        LOBYTE(perf[2].fields.m_CancellationTokenSource) = 0;
      }
    }
  }
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__WaitTimeMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D340A6 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_TypeInfo);
    byte_4D340A6 = 1;
  }
  v3 = sub_1C93D20(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x20
  System_Int32_array *ValidTargetTypeArray; // x22
  System_Func_int__bool__o *v8; // x23
  BattleSelectServantWindow_o *SelectSvtWindow; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  bool IsExistBranchSkillInfo; // w0
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2
  bool v26; // w8

  v6 = this;
  if ( (byte_4D3406C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_Target_isSubChoose__);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D3406C = 1;
  }
  if ( !skillInfo )
    goto LABEL_19;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0);
  v8 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v8, 0, Method_Target_isSubChoose__, 0);
  if ( !BasicHelper__Any_int__51960056(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720) )
  {
    IsExistBranchSkillInfo = BattleSkillInfoData__IsExistBranchSkillInfo(skillInfo, 0);
    if ( BattleSkillInfoData__IsSelectServant_47159376(ValidTargetTypeArray, IsExistBranchSkillInfo, 0) )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( this )
      {
        BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0);
        this = (BattlePerformanceMaster_o *)v6->fields.perf;
        if ( this )
        {
          SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)this, 0);
          v6->fields.selectMSWindow = SelectMainSubSvtWindow;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v6->fields.selectMSWindow,
            (int32_t)SelectMainSubSvtWindow,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          this = (BattlePerformanceMaster_o *)v6->fields.selectMSWindow;
          if ( this )
          {
            ((void (__fastcall *)(BattlePerformanceMaster_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
              this,
              *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
            BattlePerformanceMaster__openSkillSelectSvtWindow(v6, skillInfo, v25);
            goto LABEL_14;
          }
        }
      }
    }
    else
    {
      this = (BattlePerformanceMaster_o *)v6->fields.logic;
      if ( this )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0);
        this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
        if ( this )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
          v26 = 0;
          goto LABEL_18;
        }
      }
    }
LABEL_19:
    sub_1C93D2C(this, skillInfo);
  }
  this = (BattlePerformanceMaster_o *)v6->fields.perf;
  if ( !this )
    goto LABEL_19;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0);
  this = (BattlePerformanceMaster_o *)v6->fields.perf;
  if ( !this )
    goto LABEL_19;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow((BattlePerformance_o *)this, 0);
  v6->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v6->fields.skillselectSvtWindow,
    (int32_t)SelectSvtWindow,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this = (BattlePerformanceMaster_o *)v6->fields.skillselectSvtWindow;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformanceMaster_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
    this,
    *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v6, v16);
LABEL_14:
  v26 = 1;
LABEL_18:
  *isOpenOtherWindow = v26;
}


void BattlePerformanceMaster___ProcCloseFieldConf_b__189_0(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340B9 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D340B9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster___ProcCloseSwitchPartyWindow_b__225_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340BB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D340BB = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster___ProcConfirmSwitchPartyWindow_b__226_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0

  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf )
    sub_1C93D2C(0, v4);
  BattlePerformance__StartSwitchPlayerParty(perf, this->fields.tempSelectNextPartyIndex, 0);
}


void BattlePerformanceMaster___ProcOpenFieldConf_b__188_0(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340B8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D340B8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster___ProcOpenSwitchPartyWindow_b__224_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D340BA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D340BA = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 3, v2);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__callBackSelectedMainSub(
        BattlePerformanceMaster_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *selectMSWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8

  if ( (byte_4D34074 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34074 = 1;
  }
  selectMSWindow = (PlayMakerFSM_o *)this->fields.selectMSWindow;
  if ( !selectMSWindow )
    goto LABEL_11;
  ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *, _QWORD, const MethodInfo *))selectMSWindow->klass[1]._1.generic_class)(
    selectMSWindow,
    0,
    selectMSWindow->klass[1]._1.typeMetadataHandle,
    *(_QWORD *)&subUniqueId,
    method);
  if ( flg )
  {
    selectMSWindow = this->fields.myFsm;
    if ( selectMSWindow )
    {
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
      actSkillObject = this->fields.actSkillObject;
      if ( actSkillObject )
      {
        selectMSWindow = (PlayMakerFSM_o *)this->fields.logic;
        if ( selectMSWindow )
        {
          BattleLogic__wantUseSkill(
            (BattleLogic_o *)selectMSWindow,
            actSkillObject->fields.skillInfo,
            mainUniqueId,
            subUniqueId,
            0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C93D2C(selectMSWindow, flg);
  }
  selectMSWindow = (PlayMakerFSM_o *)this->fields.perf;
  if ( !selectMSWindow )
    goto LABEL_11;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)selectMSWindow,
    this->fields.myFsm,
    0);
}


void BattlePerformanceMaster__changeShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D3407A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_changeShortSkill__);
    byte_4D3407A = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0), !this->fields.data) )
    sub_1C93D2C(data, method);
  v4 = Method_BattlePerformanceMaster_changeShortSkill__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeShortSkill__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_changeShortSkill__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__updateShortSkill(this, v6);
}


void BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D3407E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_changeSkipDead__);
    byte_4D3407E = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0), !this->fields.data) )
    sub_1C93D2C(data, method);
  v4 = Method_BattlePerformanceMaster_changeSkipDead__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeSkipDead__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_changeSkipDead__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__updateSkipDead(this, v6);
}


void BattlePerformanceMaster__changeTdConstantVelocity(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D3407C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_changeTdConstantVelocity__);
    byte_4D3407C = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0), !this->fields.data) )
    sub_1C93D2C(data, method);
  v4 = Method_BattlePerformanceMaster_changeTdConstantVelocity__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeTdConstantVelocity__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_changeTdConstantVelocity__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v6);
}


void BattlePerformanceMaster__checkCommandSpellTarget(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D3405D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C93AD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D3405D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_3463274 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v4);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0),
        (Instance = this->fields.logic) == 0) )
  {
LABEL_12:
    sub_1C93D2C(Instance, v4);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0);
}


void BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v4; // x8
  struct BattleLogic_UseSkillObject_o *v5; // x8
  int skillSkipBtn; // w8
  struct BattleData_o *data; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 *v14; // x8
  struct BattleLogic_UseSkillObject_o *v15; // x1

  v2 = this;
  if ( (byte_4D34060 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9388/*"NO_REACTION"*/);
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    sub_1C93AD4(&StringLiteral_12325/*"SKIP"*/);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_9321/*"NG"*/);
    byte_4D34060 = 1;
  }
  tmp_useSkill = v2->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_27;
  this = (BattlePerformanceMaster_o *)tmp_useSkill->fields.skillInfo;
  if ( !this )
    goto LABEL_27;
  if ( !LOBYTE(this->fields.menuBtn) )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v14 = &StringLiteral_9388/*"NO_REACTION"*/;
      goto LABEL_24;
    }
    goto LABEL_27;
  }
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_20;
  v4 = v2->fields.tmp_useSkill;
  if ( !v4 )
    goto LABEL_27;
  this = (BattlePerformanceMaster_o *)v4->fields.skillInfo;
  if ( !this )
    goto LABEL_27;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_20:
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v14 = &StringLiteral_9321/*"NG"*/;
      goto LABEL_24;
    }
LABEL_27:
    sub_1C93D2C(this, method);
  }
  v5 = v2->fields.tmp_useSkill;
  if ( !v5 )
    goto LABEL_27;
  this = (BattlePerformanceMaster_o *)v5->fields.skillInfo;
  if ( !this )
    goto LABEL_27;
  skillSkipBtn = (int)this->fields.skillSkipBtn;
  if ( skillSkipBtn == 1 )
    goto LABEL_17;
  if ( !skillSkipBtn )
  {
    data = v2->fields.data;
    if ( !data )
      goto LABEL_27;
    if ( data->fields.systemflg_skipskillconf )
    {
LABEL_17:
      if ( !BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0) && !v2->fields.isLongTap )
      {
        v15 = v2->fields.tmp_useSkill;
        v2->fields.useSkillObject = v15;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.useSkillObject, (int32_t)v15, v8, v9, v10, v11, v12, v13);
        this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
        if ( this )
        {
          v14 = &StringLiteral_12325/*"SKIP"*/;
          goto LABEL_24;
        }
        goto LABEL_27;
      }
    }
  }
  this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
  if ( !this )
    goto LABEL_27;
  v14 = &StringLiteral_5480/*"END_PROC"*/;
LABEL_24:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0);
}


void BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v5; // x9

  if ( (byte_4D3408A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9676/*"OK"*/);
    sub_1C93AD4(&StringLiteral_12325/*"SKIP"*/);
    byte_4D3408A = 1;
  }
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0), (myFsm = this->fields.myFsm) == 0) )
  {
    sub_1C93D2C(logic, method);
  }
  v5 = &StringLiteral_9676/*"OK"*/;
  if ( ((unsigned __int8)logic & 1) == 0 )
    v5 = &StringLiteral_12325/*"SKIP"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v5, 0);
}


void BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34065 & 1) == 0 )
  {
    sub_1C93AD4(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_3461/*"CLICK_BOOST"*/);
    byte_4D34065 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C93D20(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0);
  this->fields.tmp_useSkill = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tmp_useSkill, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3461/*"CLICK_BOOST"*/, 0);
}


void BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  BattleLogic_UseSkillObject_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *logic; // x0

  v6 = isLong;
  if ( (byte_4D3406A & 1) == 0 )
  {
    sub_1C93AD4(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_3502/*"CLICK_SKILLICON"*/);
    byte_4D3406A = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_1C93D20(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0);
  this->fields.tmp_useSkill = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tmp_useSkill, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = v6;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3502/*"CLICK_SKILLICON"*/, 0);
      return;
    }
LABEL_8:
    sub_1C93D2C(logic, v14);
  }
}


void BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34055 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5462/*"END_CLOSEALL"*/);
    byte_4D34055 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5462/*"END_CLOSEALL"*/, 0);
}


void BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34090 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34090 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4D34079 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34079 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34056 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34056 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4D34052 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34052 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4D3405A & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D3405A = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3408D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D3408D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenItemListWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3409D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D3409D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34054 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34054 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 2, v2);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4D34077 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34077 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4D34050 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34050 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34058 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34058 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        BattlePerformanceMaster_MasterBuffEffectData_o *closeBuffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectTween; // x22
  bool v8; // w0
  __int64 v9; // x1
  UnityEngine_Behaviour_o *perf; // x0

  if ( (byte_4D3409A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3409A = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(effectTween, 0, 0);
  if ( !closeBuffData && v8 )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !perf )
      goto LABEL_28;
    UnityEngine_Behaviour__set_enabled(perf, 0, 0);
  }
  if ( closeBuffData )
  {
    this->fields.isMasterBuffEffectPlaying = 0;
  }
  else
  {
    closeBuffData = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_1C93D20(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    System_Object___ctor((Il2CppObject *)closeBuffData, 0);
    perf = (UnityEngine_Behaviour_o *)this->fields.perf;
    if ( !perf )
      goto LABEL_28;
    perf = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)perf, 0);
    if ( !closeBuffData )
      goto LABEL_28;
    closeBuffData->fields.isRootActive = (unsigned __int8)perf & 1;
    *(_DWORD *)&closeBuffData->fields.isMenuBtnActive = 16843009;
  }
  perf = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isMenuBtnActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSpellBtnActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.skillBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSkillBtnActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.exBattleUiParent;
  if ( !perf )
    goto LABEL_28;
  perf = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0);
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isExUiRootActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isRootActive, 0);
  if ( !widget )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_28;
    widget = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)perf,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)widget, 0, 0);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( widget )
    {
      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))widget->klass->vtable._8_set_alpha.methodPtr)(
        widget,
        widget->klass->vtable._8_set_alpha.method,
        1.0);
      return;
    }
LABEL_28:
    sub_1C93D2C(perf, v9);
  }
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3409B & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_TypeInfo);
    byte_4D3409B = 1;
  }
  v3 = sub_1C93D20(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceMaster__endSelectSvtError(BattlePerformanceMaster_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D34075 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34075 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.perf) == 0) )
    sub_1C93D2C(Instance, v5);
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0);
}


void BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34081 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12438/*"START_TAC"*/);
    byte_4D34081 = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12438/*"START_TAC"*/, 0);
}


void BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_1C93D2C(0, method);
  BattleBoostSkillIconComponent__procFlash(boostSkillIcon, 0);
}


ExtraBattleUserInterfaceController_o *BattlePerformanceMaster__get_ExUiController(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceController_o *result; // x0
  BattleData_o *data; // x20
  ExtraBattleUserInterfaceController_o *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D34043 & 1) == 0 )
  {
    sub_1C93AD4(&ExtraBattleUserInterfaceController_TypeInfo);
    byte_4D34043 = 1;
  }
  result = this->fields.exUiController;
  if ( !result )
  {
    data = this->fields.data;
    v5 = (ExtraBattleUserInterfaceController_o *)sub_1C93D20(ExtraBattleUserInterfaceController_TypeInfo);
    ExtraBattleUserInterfaceController___ctor(v5, (IBattlePerformanceExtraUiParent_o *)this, data, 0);
    this->fields.exUiController = v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.exUiController, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    return this->fields.exUiController;
  }
  return result;
}


bool BattlePerformanceMaster__get_IsMasterBuffEffectPlaying(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  return this->fields.isMasterBuffEffectPlaying;
}


bool BattlePerformanceMaster__get_IsNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  return this->fields._IsNoblePhantasm_k__BackingField;
}


bool BattlePerformanceMaster__isCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( !BattleData__IsWarBoard(data, 0) )
    goto LABEL_5;
  data = (BattleData_o *)this->fields.warBoard_win_EnemyConf;
  if ( !data )
    goto LABEL_7;
  if ( !*(_QWORD *)&data->fields.limitTurnCount )
  {
LABEL_5:
    data = (BattleData_o *)this->fields.win_EnemyConf;
    if ( data )
      return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0);
LABEL_7:
    sub_1C93D2C(data, method);
  }
  return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0);
}


bool BattlePerformanceMaster__isWinMenuWindowOpenOrOpening(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *win_Menu; // x0

  win_Menu = (BattleWindowComponent_o *)this->fields.win_Menu;
  if ( !win_Menu )
    sub_1C93D2C(0, method);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0);
}


bool BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_1C93D2C(0, method);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0);
}


void BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 data; // x0
  struct BattleData_o *v4; // x8
  int32_t v5; // w20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v13; // x9
  struct BattleData_o *v14; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w26
  int max_length; // w8
  __int64 v19; // x22
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t v22; // w22
  int v23; // w28
  Il2CppObject *skillIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *v26; // x24
  UnityEngine_Transform_o *v27; // x25
  UnityEngine_Transform_o *v28; // x25
  struct BattlePerformance_o *v29; // x8
  struct BattleData_o *v30; // x8
  float skillIconOffset; // s11
  float v32; // s11
  UnityEngine_Component_o *v33; // x27
  struct BattleData_o *v34; // x8
  UISprite_o *skillIconSplit; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x1
  Il2CppClass **v46; // x0
  System_Object_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct BattleData_o *v54; // x8
  struct BattleData_o *v55; // x8
  struct BattleData_o *v56; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v58; // x1
  int32_t v59; // w20
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  struct BattleData_o *v62; // x8
  int32_t masterChangedFaceId; // w8
  int32_t v64; // w8
  struct BattleData_o *v65; // x8
  const MethodInfo *v66; // x1
  char v67; // [xsp+8h] [xbp-88h]
  int32_t overwriteImageId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34045 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C93AD4(&StringLiteral_23813/*"skill_partition"*/);
    sub_1C93AD4(&StringLiteral_19869/*"frame_master_bg_disable"*/);
    byte_4D34045 = 1;
  }
  overwriteImageId = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  data = BattleData__getMasterEquipId((BattleData_o *)data, 0);
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_102;
  v5 = data;
  data = (__int64)v4->fields.quest_ent;
  if ( !data )
    goto LABEL_102;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x100000000LL, 0) )
    goto LABEL_9;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  if ( BattleData__IsHideMaster((BattleData_o *)data, 0) )
  {
LABEL_9:
    data = (__int64)this->fields.userGrade;
    if ( !data )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
    goto LABEL_11;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  overwriteImageId = BattleData__GetMasterIconImageId((BattleData_o *)data, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  BattleData__GetEquipAddImageId((BattleData_o *)data, &overwriteImageId, 0);
  v62 = this->fields.data;
  if ( !v62 )
    goto LABEL_102;
  masterChangedFaceId = v62->fields.masterChangedFaceId;
  if ( masterChangedFaceId )
  {
    overwriteImageId = masterChangedFaceId;
    data = (__int64)this->fields.userGrade;
    if ( !data )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
  }
  v64 = overwriteImageId;
  if ( !overwriteImageId )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_102;
    overwriteImageId = BattleData__GetOverWriteMasterImageId((BattleData_o *)data, 0);
    if ( !overwriteImageId )
      goto LABEL_97;
    data = (__int64)this->fields.userGrade;
    if ( !data )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
    v64 = overwriteImageId;
  }
  if ( v64 == -1 )
  {
LABEL_11:
    data = (__int64)this->fields.master_root;
    if ( !data )
      goto LABEL_102;
    data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)data,
                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_102;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19869/*"frame_master_bg_disable"*/, 0);
    goto LABEL_14;
  }
LABEL_97:
  data = (__int64)this->fields.face_root;
  if ( !data )
    goto LABEL_102;
  data = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0);
  if ( !data )
    goto LABEL_102;
  data = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)data, 0);
  if ( !(_DWORD)data )
  {
    v65 = this->fields.data;
    if ( !v65 )
      goto LABEL_102;
    MasterFaceManager__CreatePrefab_41387856(
      this->fields.face_root,
      1,
      v65->fields.battleGenderType,
      v5,
      2,
      0,
      overwriteImageId,
      0);
    BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v66);
  }
LABEL_14:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_102;
  v13 = perf->fields.data;
  if ( !v13 )
    goto LABEL_102;
  if ( v13->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_102;
  }
  v14 = perf->fields.data;
  if ( !v14 )
    goto LABEL_102;
  masterSkillInfo = v14->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_102;
  skillIcon = this->fields.skillIcon;
  size = masterSkillInfo->fields._size;
  if ( skillIcon )
  {
    max_length = skillIcon->max_length;
    if ( size == max_length )
      goto LABEL_74;
    if ( max_length >= 1 )
    {
      v19 = 0;
      do
      {
        if ( (unsigned int)v19 >= max_length )
          sub_1C93D34(data);
        data = (__int64)skillIcon->m_Items[v19];
        if ( !data )
          goto LABEL_102;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(gameObject, 0);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v19 < max_length );
    }
    this->fields.skillIcon = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillIcon, 0, v6, v7, v8, v9, v10, v11);
  }
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_102;
  data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !data )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
  data = (__int64)this->fields.skillIconSplit;
  if ( !data )
    goto LABEL_102;
  data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
  if ( !data )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_102;
  data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
  if ( !data )
    goto LABEL_102;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  if ( size >= 1 )
  {
    v67 = 0;
    v22 = 0;
    v23 = -1;
    while ( 1 )
    {
      data = (__int64)this->fields.win_Skill;
      if ( !data )
        goto LABEL_102;
      skillIconPrefab = (Il2CppObject *)this->fields.skillIconPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (__int64)UnityEngine_Object__Instantiate_object__52629400(
                        skillIconPrefab,
                        transform,
                        (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_102;
      v26 = (UnityEngine_Component_o *)data;
      data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
      v27 = (UnityEngine_Transform_o *)data;
      if ( !byte_4D2A13E )
      {
        data = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v27 )
        goto LABEL_102;
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      data = (__int64)UnityEngine_Component__get_transform(v26, 0);
      v28 = (UnityEngine_Transform_o *)data;
      if ( !byte_4D2A139 )
      {
        data = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( !v28 )
        goto LABEL_102;
      UnityEngine_Transform__set_localEulerAngles(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v29 = this->fields.perf;
      if ( !v29 )
        goto LABEL_102;
      v30 = v29->fields.data;
      if ( !v30 )
        goto LABEL_102;
      data = (__int64)v30->fields.masterSkillInfo;
      if ( !data )
        goto LABEL_102;
      skillIconOffset = this->fields.skillIconOffset;
      data = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)data,
                        v22,
                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !data )
        goto LABEL_102;
      v32 = localPosition.fields.x + (float)(skillIconOffset * (float)(size + v23));
      if ( *(_BYTE *)(data + 84) )
      {
        v33 = v26;
        v34 = this->fields.data;
        if ( !v34 )
          goto LABEL_102;
        if ( !v34->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v67 & 1) == 0 )
          {
            data = (__int64)this->fields.skillIconSplit;
            if ( !data )
              goto LABEL_102;
            data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
            if ( !data )
              goto LABEL_102;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
            skillIconSplit = this->fields.skillIconSplit;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_23813/*"skill_partition"*/, 0);
          }
          v26 = v33;
          v67 = 1;
          v32 = v32 - this->fields.skillIconSplitSpace;
        }
      }
      data = (__int64)UnityEngine_Component__get_transform(v26, 0);
      if ( !data )
        goto LABEL_102;
      v70.fields.x = v32;
      v70.fields.y = localPosition.fields.y;
      v70.fields.z = localPosition.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v70, 0);
      data = (__int64)UnityEngine_Component__GetComponent_object_(
                        v26,
                        (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v21 )
        goto LABEL_102;
      items = v21->fields._items;
      v43 = Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_102;
      v44 = v21->fields._size;
      v45 = data;
      if ( (unsigned int)v44 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)data,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + v44;
        v21->fields._size = v44 + 1;
        v46[4] = (Il2CppClass *)v45;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 4), v45, v36, v37, v38, v39, v40, v41);
      }
      ++v22;
      --v23;
      if ( size == v22 )
        goto LABEL_71;
    }
  }
  if ( !v21 )
    goto LABEL_102;
LABEL_71:
  v47 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = (struct BattleServantSkillIConComponent_array *)v47;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillIcon, (int32_t)v47, v48, v49, v50, v51, v52, v53);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data || (data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0)) == 0 )
LABEL_102:
    sub_1C93D2C(data, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
LABEL_74:
  v54 = this->fields.data;
  if ( !v54 )
    goto LABEL_102;
  data = (__int64)v54->fields.questphase_ent;
  if ( !data )
    goto LABEL_102;
  data = QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0);
  v55 = this->fields.data;
  this->fields.iconItemNumberDispType = data;
  if ( !v55 )
    goto LABEL_102;
  data = (__int64)v55->fields.questphase_ent;
  if ( !data )
    goto LABEL_102;
  data = QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0);
  v56 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = data;
  if ( !v56 )
    goto LABEL_102;
  data = (__int64)v56->fields.questphase_ent;
  if ( !data )
    goto LABEL_102;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0);
  if ( BattleItemObjectId >= 1 )
  {
    v59 = BattleItemObjectId;
    data = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_102;
    BattleItemData__SetItemId((BattleItemData_o *)data, v59, 0);
    BattlePerformanceMaster__InitializeBattleItem(this, v59, v60);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v58);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v61);
  data = (__int64)this->fields.master_root;
  if ( !data )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
}


void BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x0
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4D34087 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34087 = 1;
  }
  v3 = sub_1C93D20(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_BYTE *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.masterBuffEffectDataClose, v3, v4, v5, v6, v7, v8, v9);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0, 0, v10);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(master_root, 0, 0);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_21;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v13);
  BattlePerformanceMaster__procCloseSkill(this, v14);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Spell;
  if ( !master_root )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.fields)(
    master_root,
    0,
    master_root->klass[1]._1.events);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Menu;
  if ( !master_root )
    goto LABEL_21;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)master_root, 0, 0);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Retire;
  if ( !master_root )
    goto LABEL_21;
  master_root = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.fields)(
                                              master_root,
                                              0,
                                              master_root->klass[1]._1.events);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_21;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_21;
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, _QWORD, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      0,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  master_root = (UnityEngine_GameObject_o *)this->fields.warBoard_win_EnemyConf;
  if ( !master_root )
    goto LABEL_21;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0, 0);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_EnemyConf;
  if ( !master_root )
    goto LABEL_21;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0, 0);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0, 0) )
  {
    master_root = (UnityEngine_GameObject_o *)this->fields.fieldConf;
    if ( !master_root )
      goto LABEL_21;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)master_root, 0, 0);
  }
  master_root = (UnityEngine_GameObject_o *)this->fields.itemListWindow;
  if ( !master_root )
LABEL_21:
    sub_1C93D2C(master_root, v11);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.fields)(
    master_root,
    0,
    master_root->klass[1]._1.events);
}


void BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_4D3404E & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D3404E = 1;
  }
  v3 = sub_1C93D20(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_BYTE *)(v3 + 20) = 1;
  *(_DWORD *)(v3 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.masterBuffEffectDataClose, v3, v4, v5, v6, v7, v8, v9);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0, 0, v10);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v13),
        BattlePerformanceMaster__updateSkillIcon(this, v14),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C93D2C(master_root, v11);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_4D34096 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3490/*"CLICK_MENU"*/);
    byte_4D34096 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_1C93D2C(perf, method);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3490/*"CLICK_MENU"*/, 0);
      return;
    }
    goto LABEL_10;
  }
}


void BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34071 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3295/*"CANCEL"*/);
    byte_4D34071 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3295/*"CANCEL"*/, 0);
}


void BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34070 & 1) == 0 )
  {
    sub_1C93AD4(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_9676/*"OK"*/);
    byte_4D34070 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C93D20(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0);
  this->fields.useSkillObject = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.useSkillObject, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9676/*"OK"*/, 0);
}


void BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v5; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4D34095 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_onClickSpellButton__);
    sub_1C93AD4(&StringLiteral_3504/*"CLICK_SPELL"*/);
    byte_4D34095 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_21;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
    goto LABEL_21;
  perf = (BattlePerformance_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return;
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  perf = (BattlePerformance_o *)data->fields.quest_ent;
  if ( !perf )
    goto LABEL_21;
  perf = (BattlePerformance_o *)QuestEntity__HasFlag((QuestEntity_o *)perf, 0x400000000LL, 0);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_21;
    perf = (BattlePerformance_o *)v5->fields.quest_ent;
    if ( !perf )
      goto LABEL_21;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)perf, 0x100000000LL, 0) )
    {
      perf = (BattlePerformance_o *)this->fields.data;
      if ( perf )
      {
        if ( BattleData__IsHideCommandSpell((BattleData_o *)perf, 0) )
          goto LABEL_16;
        perf = (BattlePerformance_o *)this->fields.myFsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3504/*"CLICK_SPELL"*/, 0);
          return;
        }
      }
LABEL_21:
      sub_1C93D2C(perf, method);
    }
  }
LABEL_16:
  v6 = Method_BattlePerformanceMaster_onClickSpellButton__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_onClickSpellButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_onClickSpellButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
}


void BattlePerformanceMaster__onCloseEnemyServantConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3408E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3524/*"CLOSE_CONF"*/);
    byte_4D3408E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3524/*"CLOSE_CONF"*/, 0);
}


void BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  BattleSelectServantWindow_o *v13; // x0
  struct BattleSelectServantWindow_o *v14; // x21
  BattleSelectServantWindow_SelectServantCallBack_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v26; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v28; // x1

  if ( (byte_4D3405E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_selectedSvt__);
    sub_1C93AD4(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4D3405E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_1C93D2C(0, method);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectSvtWindow,
    (int32_t)SelectSvtWindow,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = this->fields.selectSvtWindow;
  if ( !v13 )
    sub_1C93D2C(0, v12);
  BattleSelectServantWindow__setUseClose(v13, 1, 0);
  v14 = *p_selectSvtWindow;
  v15 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C93D20(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0);
  if ( !v14 )
    sub_1C93D2C(v16, v17);
  v14->fields.selectCallBack = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->fields.selectCallBack, (int32_t)v15, v18, v19, v20, v21, v22, v23);
  data = this->fields.data;
  if ( !data )
    sub_1C93D2C(0, v24);
  v26 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0);
  if ( !v26 )
    sub_1C93D2C(FieldPlayerServantList, FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v26,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0);
  if ( !*p_selectSvtWindow )
    sub_1C93D2C(0, v28);
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, const MethodInfo *))(*p_selectSvtWindow)->klass->vtable._10_Open.methodPtr)(
    *p_selectSvtWindow,
    0,
    (*p_selectSvtWindow)->klass->vtable._10_Open.method);
}


void BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  char *data; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct BattleData_o *v26; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  NotificationDialog_ClickDelegate_o *v30; // x23

  if ( (byte_4D34073 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_callBackSelectedMainSub__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_endSelectSvtError__);
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_2879/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/);
    sub_1C93AD4(&StringLiteral_2880/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/);
    byte_4D34073 = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (char *)BattleData__getSubPlayerServantList((BattleData_o *)data, 0);
  if ( !data )
    goto LABEL_15;
  if ( *((_QWORD *)data + 3) )
  {
    data = (char *)this->fields.perf;
    if ( data )
    {
      SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)data, 0);
      p_selectMSWindow = &this->fields.selectMSWindow;
      this->fields.selectMSWindow = SelectMainSubSvtWindow;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.selectMSWindow,
        (int32_t)SelectMainSubSvtWindow,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      selectMSWindow = this->fields.selectMSWindow;
      v13 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_1C93D20(BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v13;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&selectMSWindow->fields.callBack,
          (int32_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v26 = this->fields.data;
          *((_QWORD *)data + 19) = v26;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(data + 152), (int32_t)v26, v20, v21, v22, v23, v24, v25);
          data = (char *)*p_selectMSWindow;
          if ( *p_selectMSWindow )
          {
            (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)data + 472LL))(
              data,
              0,
              *(_QWORD *)(*(_QWORD *)data + 480LL));
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C93D2C(data, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2880/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0);
  v30 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog_31583416(
    (CommonUI_o *)Instance,
    v28,
    v29,
    v30,
    -1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void BattlePerformanceMaster__openSkillSelectSvtWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_skillselectSvtWindow; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleSelectServantWindow_o *v22; // x20

  if ( (byte_4D3406F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_selectedSkillSvt__);
    sub_1C93AD4(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4D3406F = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillselectSvtWindow,
    (int32_t)SelectSvtWindow,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v15 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C93D20(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v15,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&skillselectSvtWindow->fields.selectCallBack,
          (int32_t)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (perf = (BattlePerformance_o *)this->fields.data) == 0)
    || (v22 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0),
        !v22)
    || (BattleSelectServantWindow__SetServantData(v22, (BattleServantData_array *)perf, skillInfo, -1, 0, 0),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0) )
  {
LABEL_10:
    sub_1C93D2C(perf, skillInfo);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.generic_class)(
    perf,
    0,
    perf->klass[1]._1.typeMetadataHandle);
}


void BattlePerformanceMaster__procCloseAll(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v7; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x0
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4D34085 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compCloseALL__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34085 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_23;
  BattleMenuWindowComponent__Close(win_Menu, 0, 0);
  win_Menu = (BattleMenuWindowComponent_o *)this->fields.win_Retire;
  if ( !win_Menu )
    goto LABEL_23;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, const MethodInfo *))win_Menu->klass->vtable._12_Close.methodPtr)(
    win_Menu,
    0,
    win_Menu->klass->vtable._12_Close.method);
  win_Skill = this->fields.win_Skill;
  v7 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v7, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseALL__, 0);
  if ( !win_Skill )
    goto LABEL_23;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Skill->klass->vtable._12_Close.methodPtr)(
    win_Skill,
    v7,
    win_Skill->klass->vtable._12_Close.method);
  win_Menu = (BattleMenuWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Menu )
    goto LABEL_23;
  win_Menu = (BattleMenuWindowComponent_o *)((__int64 (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, const MethodInfo *))win_Menu->klass->vtable._12_Close.methodPtr)(
                                              win_Menu,
                                              0,
                                              win_Menu->klass->vtable._12_Close.method);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_23;
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, _QWORD, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      0,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  win_Menu = (BattleMenuWindowComponent_o *)this->fields.warBoard_win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_23;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0, 0);
  win_Menu = (BattleMenuWindowComponent_o *)this->fields.win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_23;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0, 0);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0, 0) )
  {
    win_Menu = (BattleMenuWindowComponent_o *)this->fields.fieldConf;
    if ( !win_Menu )
      goto LABEL_23;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)win_Menu, 0, 0);
  }
  win_Menu = (BattleMenuWindowComponent_o *)this->fields.skillConfWindow;
  if ( !win_Menu
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, const MethodInfo *))win_Menu->klass->vtable._12_Close.methodPtr)(
          win_Menu,
          0,
          win_Menu->klass->vtable._12_Close.method),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.boostSkillConfWindow) == 0)
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, const MethodInfo *))win_Menu->klass->vtable._12_Close.methodPtr)(
          win_Menu,
          0,
          win_Menu->klass->vtable._12_Close.method),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.perf) == 0)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)win_Menu, 0, 0),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.itemListWindow) == 0) )
  {
LABEL_23:
    sub_1C93D2C(win_Menu, v4);
  }
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, const MethodInfo *))win_Menu->klass->vtable._12_Close.methodPtr)(
    win_Menu,
    0,
    win_Menu->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__procCloseBoostSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D34068 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34068 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseBoostSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseBoostSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0);
  if ( !boostSkillConfWindow )
    sub_1C93D2C(v7, v8);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))boostSkillConfWindow->klass->vtable._12_Close.methodPtr)(
    boostSkillConfWindow,
    v6,
    boostSkillConfWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3405B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3541/*"CLOSE_SPELL"*/);
    byte_4D3405B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3541/*"CLOSE_SPELL"*/, 0);
}


void BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4D3408F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compCloseEnemyConf__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D3408F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__IsWarBoard(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_8;
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_10;
  if ( !warBoard_win_EnemyConf->fields.bsvtData )
  {
LABEL_8:
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
    v5 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_1C93D2C(data, method);
  }
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseEnemyConf__, 0);
LABEL_9:
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, v5, 0);
}


void BattlePerformanceMaster__procCloseMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D34078 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compCloseMenu__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procCloseMenuWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34078 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseMenuWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procCloseMenuWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  BattlePerformanceMaster__proclight(v5, this->fields.menuBtn, 0, v6);
  win_Menu = this->fields.win_Menu;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0);
  if ( !win_Menu )
    sub_1C93D2C(v9, v10);
  BattleMenuWindowComponent__Close(win_Menu, v8, 0);
}


void BattlePerformanceMaster__procCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0

  BattlePerformanceMaster__ProcLight(this, 0, v2);
  win_Skill = this->fields.win_Skill;
  if ( !win_Skill )
    sub_1C93D2C(0, v4);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, const MethodInfo *))win_Skill->klass->vtable._12_Close.methodPtr)(
    win_Skill,
    0,
    win_Skill->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1

  if ( (byte_4D34063 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_CloseSkillConfComp__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procCloseSkillConf__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34063 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procCloseSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  skillConfWindow = this->fields.skillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_CloseSkillConfComp__, 0);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))skillConfWindow->klass->vtable._12_Close.methodPtr)(
          skillConfWindow,
          v6,
          skillConfWindow->klass->vtable._12_Close.method),
        (perf = this->fields.perf) == 0) )
  {
    sub_1C93D2C(perf, v8);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0, 0);
}


void BattlePerformanceMaster__procCloseSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D34051 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compCloseSkillWindow__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procCloseSkillWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34051 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procCloseSkillWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  BattlePerformanceMaster__proclight(v5, this->fields.skillBtn, 0, v6);
  win_Skill = this->fields.win_Skill;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0);
  if ( !win_Skill )
    sub_1C93D2C(v9, v10);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Skill->klass->vtable._12_Close.methodPtr)(
    win_Skill,
    v8,
    win_Skill->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__procCloseSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D34059 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compCloseSpellWindow__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procCloseSpellWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34059 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSpellWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procCloseSpellWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  win_Spell = this->fields.win_Spell;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0);
  if ( !win_Spell )
    sub_1C93D2C(v7, v8);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Spell->klass->vtable._12_Close.methodPtr)(
    win_Spell,
    v6,
    win_Spell->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__procOpenBoostSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleSkillConfComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4D34066 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34066 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&boostSkillConfWindow->fields.target,
          (int32_t)gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = this->fields.boostSkillConfWindow) == 0
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0),
        v13 = this->fields.boostSkillConfWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0),
        !v13) )
  {
    sub_1C93D2C(gameObject, v6);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v13->klass->vtable._10_Open.methodPtr)(
    v13,
    v14,
    v13->klass->vtable._10_Open.method);
}


void BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v4; // x20
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4D3408C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compOpenEnemyConf__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D3408C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_16;
  perf = (BattlePerformance_o *)BattleData__getEnemyServantDataIndex((BattleData_o *)perf, this->fields.tmp_index, 0);
  if ( !this->fields.data )
    goto LABEL_16;
  v4 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)BattleData__IsWarBoard(this->fields.data, 0);
  if ( ((unsigned __int8)perf & 1) == 0 )
    goto LABEL_12;
  if ( !v4 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v4, 0) )
  {
    perf = (BattlePerformance_o *)this->fields.warBoard_win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v4, 1, 0, 0, 0);
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    perf = (BattlePerformance_o *)this->fields.win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v4, 1, 0, 0, 0);
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
  }
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_compOpenEnemyConf__, 0);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_1C93D2C(perf, method);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v6, 0);
}


void BattlePerformanceMaster__procOpenItemListWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4D3409C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compOpenItemListWindow__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procOpenItemListWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D3409C = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  v6 = Method_BattlePerformanceMaster_procOpenItemListWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenItemListWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procOpenItemListWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  OverwriteAssetSoundName__PlayCommonSe(v7, 9, 0, 0);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
          perf,
          0,
          perf->klass[1]._1.events),
        itemListWindow = this->fields.itemListWindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0),
        !itemListWindow) )
  {
LABEL_10:
    sub_1C93D2C(perf, v4);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v9, 0);
}


void BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4D34053 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_procOpenMasterMenu__);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D34053 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  v4 = Method_BattlePerformanceMaster_procOpenMasterMenu__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMasterMenu__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procOpenMasterMenu__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_9:
    sub_1C93D2C(perf, method);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.generic_class)(
    perf,
    0,
    perf->klass[1]._1.typeMetadataHandle);
}


void BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4D34076 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compOpenMenu__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procOpenMenuWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D34076 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  v4 = Method_BattlePerformanceMaster_procOpenMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMenuWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procOpenMenuWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__ProcLight(this, 1, v6);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
          perf,
          0,
          perf->klass[1]._1.events),
        win_Menu = this->fields.win_Menu,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceMaster_compOpenMenu__, 0),
        !win_Menu) )
  {
LABEL_10:
    sub_1C93D2C(perf, method);
  }
  BattleMenuWindowComponent__Open(win_Menu, v8, 0);
}


void BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleSkillConfComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4D34061 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_OpenSkillConfComplete__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D34061 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&skillConfWindow->fields.target,
          (int32_t)gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = this->fields.skillConfWindow) == 0
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0),
        v13 = this->fields.skillConfWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0),
        !v13) )
  {
    sub_1C93D2C(gameObject, v6);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v13->klass->vtable._10_Open.methodPtr)(
    v13,
    v14,
    v13->klass->vtable._10_Open.method);
}


void BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4D3404F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compOpenSkillWindow__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procOpenSkillWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D3404F = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  v4 = Method_BattlePerformanceMaster_procOpenSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSkillWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procOpenSkillWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__ProcLight(this, 2, v6);
  win_Skill = this->fields.win_Skill;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0);
  if ( !win_Skill )
LABEL_9:
    sub_1C93D2C(perf, method);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Skill->klass->vtable._10_Open.methodPtr)(
    win_Skill,
    v8,
    win_Skill->klass->vtable._10_Open.method);
}


void BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  void *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  struct CommandSpellWindowComponent_o *v8; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4D34057 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_compOpenSpellWindow__);
    sub_1C93AD4(&Method_BattlePerformanceMaster_procOpenSpellWindow__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_12405/*"START_CLOSE"*/);
    byte_4D34057 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag((BattlePerformance_o *)perf, 0, 0);
  v4 = Method_BattlePerformanceMaster_procOpenSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSpellWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_procOpenSpellWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  perf = this->fields.otherFsm;
  if ( !perf )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0);
  BattlePerformanceMaster__ProcLight(this, 0, v6);
  perf = this->fields.data;
  if ( !perf )
    goto LABEL_12;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell
    || (win_Spell->fields.temporarySpell = *((_DWORD *)perf + 214),
        win_Spell->fields.isUseTemporarySpell = BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0),
        v8 = this->fields.win_Spell,
        v9 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0),
        !v8)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v8->klass->vtable._10_Open.methodPtr)(
          v8,
          v9,
          v8->klass->vtable._10_Open.method),
        (perf = this->fields.win_Skill) == 0) )
  {
LABEL_12:
    sub_1C93D2C(perf, method);
  }
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)perf + 504LL))(
    perf,
    0,
    *(_QWORD *)(*(_QWORD *)perf + 512LL));
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__procUseCommandSpell(
        BattlePerformanceMaster_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3405C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3516/*"CLICK_USESPELL"*/);
    byte_4D3405C = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_1C93D2C(0, *(_QWORD *)&commandSpellId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3516/*"CLICK_USESPELL"*/, 0);
}


void BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20

  if ( (byte_4D34088 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34088 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, flg, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__selectedSkillSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  void *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  SkillEntity_o *v9; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  BattlePerformanceMaster___c_c *v12; // x8
  System_Action_o *_9__149_0; // x23
  System_String_o *v14; // x22
  Il2CppObject *v15; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D34072 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__149_0__);
    sub_1C93AD4(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_2804/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4D34072 = 1;
  }
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  if ( !skillselectSvtWindow )
    goto LABEL_28;
  skillselectSvtWindow = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)skillselectSvtWindow
                                                                                   + 504LL))(
                                   skillselectSvtWindow,
                                   0,
                                   *(_QWORD *)(*(_QWORD *)skillselectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_28;
    skillInfo = actSkillObject->fields.skillInfo;
    skillselectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_28;
    skillselectSvtWindow = DataManager__GetMasterData_object_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_28;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                     skillInfo,
                                     skillInfo->klass->vtable._5_get_skillId.method);
    if ( !v8 )
      goto LABEL_28;
    skillselectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                             v8,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_28;
    v9 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0);
    if ( !skillselectSvtWindow || !v9 )
      goto LABEL_28;
    if ( SkillEntity__checkUseTreasure(v9, *((_DWORD *)skillselectSvtWindow + 89), 0) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0);
          return;
        }
      }
LABEL_28:
      sub_1C93D2C(skillselectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2804/*"BATTLE_INVALID_SELECT_TARGET"*/, 0);
    v11 = (System_String_o *)skillselectSvtWindow;
    v12 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v12 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__149_0 = v12->static_fields->__9__149_0;
    v14 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__149_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattlePerformanceMaster___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__149_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(_9__149_0, v15, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__149_0__, 0);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__149_0 = _9__149_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__149_0,
        (int32_t)_9__149_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( !Instance )
      goto LABEL_28;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v14, v11, _9__149_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
  }
  skillselectSvtWindow = this->fields.perf;
  if ( !skillselectSvtWindow )
    goto LABEL_28;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)skillselectSvtWindow,
    this->fields.myFsm,
    0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__selectedSvt(BattlePerformanceMaster_o *this, int32_t uniqueId, const MethodInfo *method)
{
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v6; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  BattlePerformanceMaster___c_c *v9; // x8
  System_Action_o *_9__125_0; // x23
  System_String_o *v11; // x22
  Il2CppObject *v12; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D3405F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C93AD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__selectedSvt_b__125_0__);
    sub_1C93AD4(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_3295/*"CANCEL"*/);
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_2804/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4D3405F = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_27;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
    selectSvtWindow,
    0,
    *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  selectSvtWindow = this->fields.perf;
  if ( !selectSvtWindow )
    goto LABEL_27;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)selectSvtWindow, 0);
  if ( uniqueId != -1 )
  {
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_3463274 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_27;
    v6 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0);
    if ( !selectSvtWindow || !v6 )
      goto LABEL_27;
    if ( CommandSpellEntity__checkUseTreasure(v6, *((_DWORD *)selectSvtWindow + 89), 0) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0);
          return;
        }
      }
LABEL_27:
      sub_1C93D2C(selectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2804/*"BATTLE_INVALID_SELECT_TARGET"*/, 0);
    v8 = (System_String_o *)selectSvtWindow;
    v9 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v9 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__125_0 = v9->static_fields->__9__125_0;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__125_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattlePerformanceMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__125_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(_9__125_0, v12, Method_BattlePerformanceMaster___c__selectedSvt_b__125_0__, 0);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = _9__125_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__125_0,
        (int32_t)_9__125_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !Instance )
      goto LABEL_27;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v8, _9__125_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
  }
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_3295/*"CANCEL"*/, 0);
}


void BattlePerformanceMaster__set_IsNoblePhantasm(
        BattlePerformanceMaster_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNoblePhantasm_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__showEnemyServant(
        BattlePerformanceMaster_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3408B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8378/*"LONGPRESS_ENEMY"*/);
    byte_4D3408B = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_1C93D2C(0, *(_QWORD *)&index);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8378/*"LONGPRESS_ENEMY"*/, 0);
}


void BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x0
  BattlePerformance_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4D34082 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_showRetireDialog__);
    byte_4D34082 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_19;
  BattleLogic__playRetire(logic, 0);
  v4 = Method_BattlePerformanceMaster_showRetireDialog__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_showRetireDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
  logic = (BattleLogic_o *)this->fields.win_Menu;
  if ( !logic )
    goto LABEL_19;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)logic, 0, 0);
  logic = (BattleLogic_o *)this->fields.win_Retire;
  if ( !logic )
    goto LABEL_19;
  logic = (BattleLogic_o *)((__int64 (__fastcall *)(BattleLogic_o *, _QWORD, void *))logic->klass[1]._1.fields)(
                             logic,
                             0,
                             logic->klass[1]._1.events);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_19;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_19;
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, _QWORD, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      0,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  logic = (BattleLogic_o *)this->fields.data;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleData__isBattleRetreatQuestClear((BattleData_o *)logic, 0),
        (v9 = this->fields.perf) == 0) )
  {
LABEL_19:
    sub_1C93D2C(logic, method);
  }
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    BattlePerformance__SetScreenEffectMode(v9, 0, 0);
  }
  else
  {
    BattlePerformance__effectFadeOut(this->fields.perf, 0);
    v10 = Method_BattlePerformanceMaster_showRetireDialog__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster_showRetireDialog__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
    OverwriteAssetSoundName__PlayCommonSe(v11, 3, 0, 0);
    v13 = BattlePerformanceMaster__OpenRetireDialog(this, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
}


void BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34086 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12406/*"START_COM"*/);
    byte_4D34086 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12406/*"START_COM"*/, 0);
}


float BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 delayAfterNoblePhantasmBuffData; // x0
  BattleActionData_MasterBuffData_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleActionData_MasterBuffData_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  float v27; // s8
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UnityEngine_GameObject_o *PopupBuffObject; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UnityEngine_Object_o *v50; // x24
  Il2CppObject *v51; // x24
  Il2CppObject *ComponentInChildren_object__52413484; // x24
  Il2CppObject *v53; // x23
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  __int64 v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Collections_Generic_List_GameObject__o *masterBuffEffectObjectList; // x8
  int32_t size; // w2
  int v66; // w9
  __int64 v67; // x8
  System_Collections_Generic_IEnumerable_T__o *v68; // x23
  System_Action_int__o *v69; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  BattleActionData_MasterBuffData_o *v72; // x8
  struct UnityEngine_Coroutine_o *v73; // x8
  const MethodInfo *v74; // x1
  System_Collections_IEnumerator_o *v75; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v84; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  UITweener_o *v94; // x19
  EventDelegate_Callback_o *v95; // x21

  if ( (byte_4D34097 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_int___);
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__0__);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__1__);
    sub_1C93AD4(&BattlePerformanceMaster___c__DisplayClass193_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34097 = 1;
  }
  v5 = sub_1C93D20(BattlePerformanceMaster___c__DisplayClass193_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_91;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = masterBuffData;
  v14 = (BattleActionData_MasterBuffData_o **)(v5 + 32);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)masterBuffData, v15, v16, v17, v18, v19, v20);
  delayAfterNoblePhantasmBuffData = *(_QWORD *)(v5 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_91;
  v27 = 0.0;
  if ( !BattleActionData_MasterBuffData__IsEffectEnable(
          (BattleActionData_MasterBuffData_o *)delayAfterNoblePhantasmBuffData,
          0) )
    return v27;
  if ( this->fields._IsNoblePhantasm_k__BackingField )
  {
    delayAfterNoblePhantasmBuffData = (__int64)this->fields.delayAfterNoblePhantasmBuffData;
    if ( delayAfterNoblePhantasmBuffData )
    {
      v7 = *v14;
      v28 = *(_QWORD *)(delayAfterNoblePhantasmBuffData + 16);
      v29 = Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__;
      ++*(_DWORD *)(delayAfterNoblePhantasmBuffData + 28);
      if ( v28 )
      {
        v30 = *(int *)(delayAfterNoblePhantasmBuffData + 24);
        if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)delayAfterNoblePhantasmBuffData,
            (Il2CppObject *)v7,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * v30;
          *(_DWORD *)(delayAfterNoblePhantasmBuffData + 24) = v30 + 1;
          *(_QWORD *)(v31 + 32) = v7;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 32), (int32_t)v7, v21, v22, v23, v24, v25, v26);
        }
        return v27;
      }
    }
    goto LABEL_91;
  }
  delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_91;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    masterBuffPopLabelEffect = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_masterBuffPopLabelEffect = &this->fields.masterBuffPopLabelEffect;
    if ( UnityEngine_Object__op_Inequality(masterBuffPopLabelEffect, 0, 0) )
    {
      v36 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v36, 0);
      *p_masterBuffPopLabelEffect = 0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.masterBuffPopLabelEffect,
        0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    PopupBuffObject = BattlePerformanceMaster__CreatePopupBuffObject(this, *v14, v35);
    this->fields.masterBuffPopLabelEffect = PopupBuffObject;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.masterBuffPopLabelEffect,
      (int32_t)PopupBuffObject,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v50 = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v50, 0, 0) )
    {
      delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_91;
      v51 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0, 0);
      if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_91;
        BattleUIRangeLabel__ParentHasChanged((BattleUIRangeLabel_o *)v51, 0, 0);
        if ( !*v14 )
          goto LABEL_91;
        BattleUIRangeLabel__SetAdjustLabelOffset(
          (BattleUIRangeLabel_o *)v51,
          (*v14)->fields.popLabel,
          (System_String_o *)StringLiteral_1/*""*/,
          1,
          0,
          0,
          0,
          0,
          0);
        BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)v51, 20, 0);
        if ( !*v14 )
          goto LABEL_91;
        BattleUIRangeLabel__CondensedScaleLabel(
          (BattleUIRangeLabel_o *)v51,
          (*v14)->fields.popLabelCondensedScaleSize,
          (*v14)->fields.popLabelCondensedScaleValue,
          0);
      }
      delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_91;
      ComponentInChildren_object__52413484 = UnityEngine_GameObject__GetComponentInChildren_object__52413484(
                                               (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                               1,
                                               (const MethodInfo_31FC42C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)ComponentInChildren_object__52413484,
                                          0,
                                          0);
      if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
      {
        if ( !ComponentInChildren_object__52413484 )
          goto LABEL_91;
        BattleServantBuffIconComponent__ParentHasChanged(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__52413484,
          0);
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__52413484,
          0,
          0);
      }
      delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
      if ( *p_masterBuffPopLabelEffect )
      {
        v53 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0, 0);
        if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
        {
          perf = this->fields.perf;
          if ( !perf )
            goto LABEL_91;
          actorcamera = perf->fields.actorcamera;
          uicamera = perf->fields.uicamera;
          if ( !byte_4D2A139 )
          {
            delayAfterNoblePhantasmBuffData = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          if ( !v53 )
            goto LABEL_91;
          TrackingMoveCtCComponent__Set(
            (TrackingMoveCtCComponent_o *)v53,
            actorcamera,
            uicamera,
            0,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0,
            0);
          TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)v53, 0);
        }
        if ( !this->fields.isMasterBuffEffectPlaying )
        {
          v57 = sub_1C93D20(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
          System_Object___ctor((Il2CppObject *)v57, 0);
          delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
          if ( !delayAfterNoblePhantasmBuffData )
            goto LABEL_91;
          delayAfterNoblePhantasmBuffData = UnityEngine_GameObject__get_activeSelf(
                                              (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                              0);
          if ( !v57 )
            goto LABEL_91;
          *(_BYTE *)(v57 + 16) = delayAfterNoblePhantasmBuffData & 1;
          delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
          if ( !delayAfterNoblePhantasmBuffData )
            goto LABEL_91;
          *(_BYTE *)(v57 + 17) = UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                   0);
          delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
          if ( !delayAfterNoblePhantasmBuffData )
            goto LABEL_91;
          *(_BYTE *)(v57 + 18) = UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                   0);
          delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
          if ( !delayAfterNoblePhantasmBuffData )
            goto LABEL_91;
          *(_BYTE *)(v57 + 19) = UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                   0);
          delayAfterNoblePhantasmBuffData = (__int64)this->fields.exBattleUiParent;
          if ( !delayAfterNoblePhantasmBuffData )
            goto LABEL_91;
          delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)delayAfterNoblePhantasmBuffData,
                                                       0);
          if ( !delayAfterNoblePhantasmBuffData )
            goto LABEL_91;
          *(_BYTE *)(v57 + 20) = UnityEngine_GameObject__get_activeSelf(
                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                   0);
          this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v57;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.masterBuffEffectDataClose,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63);
        }
        masterBuffEffectObjectList = this->fields.masterBuffEffectObjectList;
        if ( masterBuffEffectObjectList )
        {
          size = masterBuffEffectObjectList->fields._size;
          v66 = masterBuffEffectObjectList->fields._version + 1;
          masterBuffEffectObjectList->fields._size = 0;
          masterBuffEffectObjectList->fields._version = v66;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)masterBuffEffectObjectList->fields._items, 0, size, 0);
          v67 = *(_QWORD *)(v5 + 32);
          *(_DWORD *)(v5 + 24) = 1065353216;
          if ( v67 )
          {
            v68 = *(System_Collections_Generic_IEnumerable_T__o **)(v67 + 80);
            v69 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
            System_Action_int____ctor(
              v69,
              (Il2CppObject *)v5,
              (intptr_t)Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__0__,
              0);
            BasicHelper__ForEach_int_(
              v68,
              (System_Action_T__o *)v69,
              (const MethodInfo_318FB68 *)Method_BasicHelper_ForEach_int___);
            masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
            if ( masterBuffEffectDataClose )
            {
              if ( masterBuffEffectDataClose->fields.isRootActive )
                return *(float *)(v5 + 24);
              v72 = *v14;
              if ( !*v14 )
                goto LABEL_91;
              if ( !v72->fields._IsStart_k__BackingField )
              {
                if ( v72->fields._IsEnd_k__BackingField )
                {
                  masterIconFadeCoroutine = this->fields.masterIconFadeCoroutine;
                  if ( masterIconFadeCoroutine )
                    UnityEngine_MonoBehaviour__StopCoroutine_72105720(
                      (UnityEngine_MonoBehaviour_o *)this,
                      masterIconFadeCoroutine,
                      0);
                  v84 = BattlePerformanceMaster__waitMasterBuffEffect(
                          this,
                          *(float *)(v5 + 24),
                          (const MethodInfo *)masterIconFadeCoroutine);
                  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v84, 0);
                }
                return *(float *)(v5 + 24);
              }
              v73 = this->fields.masterIconFadeCoroutine;
              this->fields.isMasterBuffEffectPlaying = 1;
              if ( v73 )
              {
                if ( !Component_object )
                  goto LABEL_91;
                ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
                  Component_object,
                  Component_object->klass->vtable[8].method,
                  1.0);
                UnityEngine_MonoBehaviour__StopCoroutine_72105720(
                  (UnityEngine_MonoBehaviour_o *)this,
                  this->fields.masterIconFadeCoroutine,
                  0);
                v75 = BattlePerformanceMaster__waitMasterBuffEffect(this, *(float *)(v5 + 24), v74);
                started = UnityEngine_MonoBehaviour__StartCoroutine_72105100(
                            (UnityEngine_MonoBehaviour_o *)this,
                            v75,
                            0);
                this->fields.masterIconFadeCoroutine = started;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&this->fields.masterIconFadeCoroutine,
                  (int32_t)started,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82);
                return *(float *)(v5 + 24);
              }
              effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              p_effectTween = &this->fields.effectTween;
              delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(effectTween, 0, 0);
              if ( (delayAfterNoblePhantasmBuffData & 1) == 0 )
                goto LABEL_81;
              delayAfterNoblePhantasmBuffData = (__int64)*p_effectTween;
              if ( !*p_effectTween )
                goto LABEL_91;
              delayAfterNoblePhantasmBuffData = UnityEngine_Behaviour__get_enabled(
                                                  (UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData,
                                                  0);
              if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
              {
                delayAfterNoblePhantasmBuffData = (__int64)*p_effectTween;
                if ( !*p_effectTween )
                  goto LABEL_91;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData, 0, 0);
              }
              else
              {
LABEL_81:
                if ( !Component_object )
                  goto LABEL_91;
                ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
                  Component_object,
                  Component_object->klass->vtable[8].method,
                  0.01);
              }
              delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
              if ( delayAfterNoblePhantasmBuffData )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0, 0);
                delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                if ( delayAfterNoblePhantasmBuffData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0, 0);
                  delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
                  if ( delayAfterNoblePhantasmBuffData )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0, 0);
                    delayAfterNoblePhantasmBuffData = (__int64)this->fields.exBattleUiParent;
                    if ( delayAfterNoblePhantasmBuffData )
                    {
                      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)delayAfterNoblePhantasmBuffData,
                                                                   0);
                      if ( delayAfterNoblePhantasmBuffData )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                          0,
                          0);
                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
                        if ( delayAfterNoblePhantasmBuffData )
                        {
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                            1,
                            0);
                          v87 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0);
                          this->fields.effectTween = v87;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)&this->fields.effectTween,
                            (int32_t)v87,
                            v88,
                            v89,
                            v90,
                            v91,
                            v92,
                            v93);
                          v94 = (UITweener_o *)this->fields.effectTween;
                          if ( v94 )
                          {
                            v94->fields.method = 6;
                            v95 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
                            EventDelegate_Callback___ctor(
                              v95,
                              (Il2CppObject *)v5,
                              Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__1__,
                              0);
                            UITweener__SetOnFinished(v94, v95, 0);
                            return *(float *)(v5 + 24);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_91:
      sub_1C93D2C(delayAfterNoblePhantasmBuffData, v7);
    }
  }
  return v27;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster__startSkill(BattlePerformanceMaster_o *this, int32_t type, const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_4D34080 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12432/*"START_SKILL"*/);
    byte_4D34080 = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.generic_class)(
          win_Spell,
          0,
          win_Spell->klass[1]._1.typeMetadataHandle),
        (win_Spell = this->fields.myFsm) == 0) )
  {
    sub_1C93D2C(win_Spell, *(_QWORD *)&type);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12432/*"START_SKILL"*/, 0);
}


void BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3404D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12438/*"START_TAC"*/);
    byte_4D3404D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12438/*"START_TAC"*/, 0);
}


void BattlePerformanceMaster__updateCommandSpellIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  struct BattleData_o *v4; // x8
  UserGameEntity_o *SelfUserGame; // x20

  v2 = this;
  if ( (byte_4D3404A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&StringLiteral_19863/*"frame_cs_bg"*/);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_19864/*"frame_cs_bg_disable"*/);
    byte_4D3404A = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_21;
  this = (BattlePerformanceMaster_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_21;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x400000000LL, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_24;
  v4 = v2->fields.data;
  if ( !v4 )
    goto LABEL_21;
  this = (BattlePerformanceMaster_o *)v4->fields.quest_ent;
  if ( !this )
    goto LABEL_21;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0) )
  {
LABEL_24:
    this = (BattlePerformanceMaster_o *)v2->fields.data;
    if ( !this )
      goto LABEL_21;
    if ( !BattleData__GetOverwriteCommandSpellIcon((BattleData_o *)this, 0) )
      goto LABEL_13;
  }
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_21;
  if ( BattleData__IsHideCommandSpell((BattleData_o *)this, 0) )
  {
LABEL_13:
    this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
    if ( this )
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)this,
                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19864/*"frame_cs_bg_disable"*/, 0);
        this = (BattlePerformanceMaster_o *)v2->fields.spellSpr;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v2->fields.commandSpellIcon, 0, 0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C93D2C(this, method);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
  if ( !this )
    goto LABEL_21;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19863/*"frame_cs_bg"*/, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v2->fields.commandSpellIcon, 1, 0);
  this = (BattlePerformanceMaster_o *)v2->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_21;
  CommandSpellIconComponent__SetDataBattle((CommandSpellIconComponent_o *)this, SelfUserGame, v2->fields.data, 0);
}


void BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4D3407B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D3407B = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skillSkipBtn) == 0 )
    sub_1C93D2C(this, method);
  if ( data->fields.systemflg_skipskillconf )
    v4 = &StringLiteral_17637/*"btn_off"*/;
  else
    v4 = &StringLiteral_17638/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


void BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v4; // x8
  BattlePerformanceMaster_o *v5; // x21
  struct BattleServantSkillIConComponent_array *v6; // x8
  BattlePerformanceMaster_o *v7; // x20
  __int64 v8; // x22
  bool v9; // w24
  unsigned int v10; // w26
  int v11; // w27
  char v12; // w29
  unsigned __int8 v13; // w28
  struct BattleServantSkillIConComponent_array *v14; // x8
  BattleSkillInfoData_o *v15; // x23
  _BOOL4 v16; // w8
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattlePerformanceMaster_c **v23; // x0
  struct BattleServantSkillIConComponent_array *v24; // x8
  int32_t ShortenMasterSkillValue; // w0
  UnityEngine_Object_o *skillBtnFlashObject; // x23
  int32_t v27; // w22
  BattlePerformanceMaster___c_c *v28; // x0
  System_Predicate_object__o *_9__103_0; // x24
  System_String_o *v30; // x23
  Il2CppObject *v31; // x25
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_String_array *All_object; // x0
  struct BattleData_o *data; // x8
  BattlePerformanceMaster_o *v41; // x21
  BattlePerformanceMaster_o *v42; // x23
  System_String_o *v43; // x1
  System_String_o *v44; // x23
  Il2CppObject *v45; // x0
  BattlePerformanceMaster_o *v46; // x23
  bool v47; // cc
  bool v48; // w22
  System_String_o *v49; // x1
  float v50; // s8
  BattlePerformanceMaster___c_c *v51; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  System_Predicate_object__o *_9__103_1; // x24
  System_String_o *v54; // x23
  Il2CppObject *v55; // x25
  struct BattlePerformanceMaster___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_String_array *v63; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  BattlePerformanceMaster_o *v65; // x20
  float v66; // s9
  struct BattleData_o *v67; // x8
  struct BattleData_o *v68; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w1
  unsigned int localPosition; // s0
  int v78; // [xsp+8h] [xbp-78h] BYREF
  int v79; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D3404C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindAll_string___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_string__TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__103_0__);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__103_1__);
    sub_1C93AD4(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_2811/*"BATTLE_MASTER_SKILL_CHARGE"*/);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    sub_1C93AD4(&StringLiteral_17629/*"btn_master_skill_disable"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_2810/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_9321/*"NG"*/);
    byte_4D3404C = 1;
  }
  v79 = 0;
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)sub_1C93B7C(string___TypeInfo, LODWORD(skillIcon->max_length));
  v4 = v2->fields.skillIcon;
  if ( !v4 )
    goto LABEL_134;
  v5 = this;
  this = (BattlePerformanceMaster_o *)sub_1C93B7C(string___TypeInfo, LODWORD(v4->max_length));
  v6 = v2->fields.skillIcon;
  if ( !v6 )
    goto LABEL_134;
  v7 = this;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.data;
    if ( !this )
      goto LABEL_134;
    if ( (int)v8 >= SLODWORD(v6->max_length) )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v8, 0);
    if ( this )
    {
      v14 = v2->fields.skillIcon;
      if ( !v14 )
        goto LABEL_134;
      if ( (unsigned int)v8 >= LODWORD(v14->max_length) )
        goto LABEL_135;
      v15 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v14->m_Items[(int)v8];
      if ( !this )
        goto LABEL_134;
      if ( v15->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v15, 1, 0, 0, 0, 0);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0);
      v16 = BattleSkillInfoData__isChargeOK(v15, 0) && v15->fields.canExecSkill;
      v9 = v16 || v9;
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v15, 0);
      v79 = (int)this;
      if ( v15->fields.isAdd )
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_859/*"-"*/;
          if ( !v7 )
            goto LABEL_134;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v79, 0);
          method = (const MethodInfo *)this;
          if ( !v7 )
            goto LABEL_134;
        }
        if ( (unsigned int)v11 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_135;
        v23 = &v7->klass + v11++;
      }
      else
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_859/*"-"*/;
          if ( !v5 )
            goto LABEL_134;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v79, 0);
          method = (const MethodInfo *)this;
          if ( !v5 )
            goto LABEL_134;
        }
        if ( v10 >= LODWORD(v5->fields.m_CancellationTokenSource) )
          goto LABEL_135;
        v23 = &v5->klass + (int)v10++;
      }
      v23[4] = (BattlePerformanceMaster_c *)method;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)method, v17, v18, v19, v20, v21, v22);
      v12 |= v79 > 0;
      v13 |= v15->fields.sealedTurn > 0;
    }
    v24 = v2->fields.skillIcon;
    if ( !v24 )
      goto LABEL_134;
    if ( (unsigned int)v8 >= LODWORD(v24->max_length) )
LABEL_135:
      sub_1C93D34(this);
    this = (BattlePerformanceMaster_o *)v24->m_Items[v8];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0);
      v6 = v2->fields.skillIcon;
      ++v8;
      if ( v6 )
        continue;
    }
    goto LABEL_134;
  }
  ShortenMasterSkillValue = BattleData__GetShortenMasterSkillValue((BattleData_o *)this, 1, 0);
  skillBtnFlashObject = (UnityEngine_Object_o *)v2->fields.skillBtnFlashObject;
  v27 = ShortenMasterSkillValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0, 0) )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_134;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    {
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
      if ( !this )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9, 0);
  }
  if ( v2->fields.notDispEquipSkillChargeTurn )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatus;
    if ( !this )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeRoot;
    if ( !this )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    v28 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v28 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__103_0 = (System_Predicate_object__o *)v28->static_fields->__9__103_0;
    v30 = (System_String_o *)StringLiteral_1042/*"/"*/;
    if ( !_9__103_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = BattlePerformanceMaster___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__103_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(_9__103_0, v31, Method_BattlePerformanceMaster___c__updateSkillIcon_b__103_0__, 0);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__103_0 = (struct System_Predicate_string__o *)_9__103_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__103_0,
        (int32_t)_9__103_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    All_object = (System_String_array *)System_Array__FindAll_object_(
                                          (System_Object_array *)v5,
                                          (System_Predicate_T__o *)_9__103_0,
                                          (const MethodInfo_32A9748 *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v30, All_object, 0);
    data = v2->fields.data;
    if ( !data )
      goto LABEL_134;
    v41 = this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0);
    if ( !v2->fields.masterSkillBadStatus )
      goto LABEL_134;
    v42 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillBadStatus, v13 & 1, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_134;
    if ( (v13 & 1) != 0 )
      v43 = (System_String_o *)v42;
    else
      v43 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v43, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2811/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0);
    v78 = v27 + 1;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
    this = (BattlePerformanceMaster_o *)System_String__Format(v44, v45, 0);
    if ( !v2->fields.masterSkillChargeRoot )
      goto LABEL_134;
    v46 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillChargeRoot, v27 > 0, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_134;
    v47 = v27 <= 0;
    v48 = v27 > 0;
    v49 = v47 ? (System_String_o *)StringLiteral_1/*""*/ : (System_String_o *)v46;
    UILabel__set_text((UILabel_o *)this, v49, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    v50 = ((v13 | v48) & 1) != 0 ? -58.0 : -38.0;
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    if ( v11 < 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_134;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 & 1, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeLabel;
      if ( !this )
        goto LABEL_134;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v41, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_134;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v2->fields.chargeTimeRoot )
        goto LABEL_134;
      v65 = this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v2->fields.chargeTimeRoot,
                                            0);
      if ( !this )
        goto LABEL_134;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_134;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 & 1, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_134;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v51 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v2->fields.addSkillAddChargeTimeLabel;
      if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
        v51 = BattlePerformanceMaster___c_TypeInfo;
      }
      _9__103_1 = (System_Predicate_object__o *)v51->static_fields->__9__103_1;
      v54 = (System_String_o *)StringLiteral_1042/*"/"*/;
      if ( !_9__103_1 )
      {
        if ( !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51);
          v51 = BattlePerformanceMaster___c_TypeInfo;
        }
        v55 = (Il2CppObject *)v51->static_fields->__9;
        _9__103_1 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_string__TypeInfo);
        System_Predicate_object____ctor(
          _9__103_1,
          v55,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__103_1__,
          0);
        v56 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v56->__9__103_1 = (struct System_Predicate_string__o *)_9__103_1;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v56->__9__103_1, (int32_t)_9__103_1, v57, v58, v59, v60, v61, v62);
      }
      v63 = (System_String_array *)System_Array__FindAll_object_(
                                     (System_Object_array *)v7,
                                     (System_Predicate_T__o *)_9__103_1,
                                     (const MethodInfo_32A9748 *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v54, v63, 0);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_134;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0);
      addSkillAddChargeTimeSplitLabel = v2->fields.addSkillAddChargeTimeSplitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2810/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_134;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_134;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v41, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_134;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v2->fields.addSkillChargeTimeRoot )
        goto LABEL_134;
      v65 = this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v2->fields.addSkillChargeTimeRoot,
                                            0);
      if ( !this )
        goto LABEL_134;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_134;
    }
    v66 = *(float *)&localPosition;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    v80.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
    if ( !v65 )
      goto LABEL_134;
    v80.fields.x = v66;
    v80.fields.y = v50;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v65, v80, 0);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)BattleData__getBoostSkillInfo((BattleData_o *)this, 0, 0);
  if ( !v2->fields.boostSkillIcon )
    goto LABEL_134;
  if ( this )
    BattleServantSkillIConComponent__SetSkillInfo(
      (BattleServantSkillIConComponent_o *)v2->fields.boostSkillIcon,
      (BattleSkillInfoData_o *)this,
      1,
      0,
      0,
      0,
      0);
  else
    BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)v2->fields.boostSkillIcon, 0, 0);
  v67 = v2->fields.data;
  if ( !v67 )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)v67->fields.quest_ent;
  if ( !this )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v68 = v2->fields.data;
    if ( !v68 )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)v68->fields.quest_ent;
    if ( !this )
      goto LABEL_134;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0) )
    {
      this = (BattlePerformanceMaster_o *)v2->fields.data;
      if ( !this )
        goto LABEL_134;
      if ( !BattleData__IsHideMasterSkill((BattleData_o *)this, 0) )
        return;
    }
  }
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
  if ( !this )
    goto LABEL_134;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17629/*"btn_master_skill_disable"*/, 0);
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
  if ( !this )
    goto LABEL_134;
  UISprite__set_atlas((UISprite_o *)this, v2->fields.battleUiAtlas, 0);
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtn;
  if ( !this )
    goto LABEL_134;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)ComponentInChildren_object,
                                        0,
                                        0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_134;
    v76 = StringLiteral_9321/*"NG"*/;
    ComponentInChildren_object[2].monitor = (void *)StringLiteral_9321/*"NG"*/;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&ComponentInChildren_object[2].monitor,
      v76,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
  if ( !this )
LABEL_134:
    sub_1C93D2C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4D3407F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D3407F = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skipDeadBtn) == 0 )
    sub_1C93D2C(this, method);
  if ( data->fields.systemflg_skipDead )
    v4 = &StringLiteral_17638/*"btn_on"*/;
  else
    v4 = &StringLiteral_17637/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


void BattlePerformanceMaster__updateTdConstantVelocity(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4D3407D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D3407D = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.tdConstBtn) == 0 )
    sub_1C93D2C(this, method);
  if ( data->fields.systemflg_TdConstantvelocity )
    v4 = &StringLiteral_17638/*"btn_on"*/;
  else
    v4 = &StringLiteral_17637/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D34099 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster__waitMasterBuffEffect_d__195_TypeInfo);
    byte_4D34099 = 1;
  }
  v5 = sub_1C93D20(BattlePerformanceMaster__waitMasterBuffEffect_d__195_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster_MasterBuffEffectData___ctor_48201216(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isExUiRootActive = value;
  *(_DWORD *)&this->fields.isRootActive = 16843009 * value;
}


void BattlePerformanceMaster_PlacePositionSetting___ctor(
        BattlePerformanceMaster_PlacePositionSetting_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.extraLocalPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.extraLocalPosition.fields.z = z;
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    v3 = UnityEngine_Vector3_TypeInfo;
    byte_4D2A13E = 1;
  }
  v6 = v3->static_fields;
  v7 = v6->oneVector.fields.z;
  *(_QWORD *)&this->fields.extraLocalScale.fields.x = *(_QWORD *)&v6->oneVector.fields.x;
  this->fields.extraLocalScale.fields.z = v7;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster_PlacePositionSetting__AdjustPosition(
        BattlePerformanceMaster_PlacePositionSetting_o *this,
        bool isExtra,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetTransform; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x20
  float *p_z; // x8
  struct UnityEngine_Vector3_o *p_extraLocalScale; // x9
  float *p_y; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D340BC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D340BC = 1;
  }
  targetTransform = (UnityEngine_Object_o *)this->fields.targetTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(targetTransform, 0, 0);
  if ( (v6 & 1) == 0 )
  {
    v8 = this->fields.targetTransform;
    if ( isExtra )
    {
      if ( v8 )
      {
        UnityEngine_Transform__set_localPosition(this->fields.targetTransform, this->fields.extraLocalPosition, 0);
        v9 = this->fields.targetTransform;
        if ( v9 )
        {
          p_z = &this->fields.extraLocalScale.fields.z;
          p_extraLocalScale = &this->fields.extraLocalScale;
          p_y = &this->fields.extraLocalScale.fields.y;
LABEL_17:
          v14.fields.z = *p_z;
          v14.fields.y = *p_y;
          v14.fields.x = p_extraLocalScale->fields.x;
          UnityEngine_Transform__set_localScale(v9, v14, 0);
          return;
        }
      }
    }
    else
    {
      if ( !byte_4D2A139 )
      {
        v6 = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( v8 )
      {
        UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v9 = this->fields.targetTransform;
        if ( !byte_4D2A13E )
        {
          v6 = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( v9 )
        {
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          p_z = &static_fields->oneVector.fields.z;
          p_y = &static_fields->oneVector.fields.y;
          p_extraLocalScale = &static_fields->oneVector;
          goto LABEL_17;
        }
      }
    }
    sub_1C93D2C(v6, v7);
  }
}


UnityEngine_Transform_o *BattlePerformanceMaster_PlacePositionSetting__GetTransform(
        BattlePerformanceMaster_PlacePositionSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.targetTransform;
}


void BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230___ctor(
        BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230__MoveNext(
        BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_o *this,
        const MethodInfo *method)
{
  bool result; // w0
  BattlePerformanceMaster_o *_4__this; // x20
  int32_t v5; // w21
  UnityEngine_GameObject_o *itemObject; // x0
  struct UnityEngine_Transform_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  float effectWaitTime; // s8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject **p__2__current; // x0
  int32_t effectId; // w21
  UnityEngine_GameObject_o *v23; // x22
  Il2CppObject *v24; // x0
  float dropItemWaitTime; // s8
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D340C1 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C93AD4(&StringLiteral_24495/*"treasure"*/);
    byte_4D340C1 = 1;
  }
  result = 0;
  _4__this = this->fields.__4__this;
  v5 = -1;
  switch ( this->fields.__1__state )
  {
    case 0:
      itemObject = this->fields.itemObject;
      this->fields.__1__state = -1;
      if ( !itemObject )
        goto LABEL_18;
      itemObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(itemObject, 0);
      if ( !itemObject )
        goto LABEL_18;
      v7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)itemObject, (System_String_o *)StringLiteral_24495/*"treasure"*/, 0);
      this->fields._itemRoot_5__2 = v7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._itemRoot_5__2, (int32_t)v7, v8, v9, v10, v11, v12, v13);
      itemObject = this->fields.itemObject;
      if ( !itemObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive(itemObject, 0, 0);
      effectWaitTime = this->fields.effectWaitTime;
      if ( effectWaitTime <= 0.0 )
      {
LABEL_10:
        itemObject = (UnityEngine_GameObject_o *)this->fields._itemRoot_5__2;
        if ( !itemObject
          || (effectId = this->fields.effectId,
              v23 = this->fields.itemObject,
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)itemObject, 0),
              !_4__this) )
        {
LABEL_18:
          sub_1C93D2C(itemObject, method);
        }
        v24 = (Il2CppObject *)BattlePerformanceMaster__DelayEffect(_4__this, effectId, v23, 0, localPosition, v27);
        LODWORD(_4__this) = (_DWORD)v24;
        this->fields.__2__current = v24;
        p__2__current = &this->fields.__2__current;
        v5 = 2;
      }
      else
      {
        _4__this = (BattlePerformanceMaster_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor((UnityEngine_WaitForSeconds_o *)_4__this, effectWaitTime, 0);
        this->fields.__2__current = (Il2CppObject *)_4__this;
        p__2__current = &this->fields.__2__current;
        v5 = 1;
      }
LABEL_16:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)_4__this, v15, v16, v17, v18, v19, v20);
      result = 1;
LABEL_17:
      this->fields.__1__state = v5;
      return result;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_10;
    case 2:
      this->fields.__1__state = -1;
      _4__this = (BattlePerformanceMaster_o *)this->fields.itemObject;
      dropItemWaitTime = this->fields.dropItemWaitTime;
      if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
      v26 = (Il2CppObject *)BattlePerformanceMaster__DelayShowItem(
                              (UnityEngine_GameObject_o *)_4__this,
                              dropItemWaitTime,
                              method);
      LODWORD(_4__this) = (_DWORD)v26;
      this->fields.__2__current = v26;
      p__2__current = &this->fields.__2__current;
      v5 = 3;
      goto LABEL_16;
    case 3:
      goto LABEL_17;
    default:
      return result;
  }
}


Il2CppObject *BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230__System_IDisposable_Dispose(
        BattlePerformanceMaster__CoStartNormalDropItemInterval_d__230_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__DelayEffect_d__212___ctor(
        BattlePerformanceMaster__DelayEffect_d__212_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__DelayEffect_d__212__MoveNext(
        BattlePerformanceMaster__DelayEffect_d__212_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  float v8; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t id; // w20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Transform_o *v25; // x21
  _QWORD *v26; // x0
  struct EffectEntity_o *effectEnt_5__2; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D340C2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleDropEffectOncePlaySe___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_BattlePerformanceMaster__DelayEffect_d__212_MoveNext__);
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C93AD4(&StringLiteral_3098/*"Battle"*/);
    byte_4D340C2 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_43;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_43;
    v8 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v8 > 0.0 )
    {
      v9 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v9, v8, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &this->fields.__2__current;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v9, v11, v12, v13, v14, v15, v16);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
  }
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  id = this->fields.id;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  Instance = (DataManager_o *)BattleEffectUtility__getEffectObjectSafe(id, 0, 1, 1.0, 0);
  if ( !Instance )
    goto LABEL_43;
  v23 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.parentObj )
    goto LABEL_43;
  v24 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !v24 )
    goto LABEL_43;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0);
  if ( !this->fields.parentObj )
    goto LABEL_43;
  v25 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0);
  if ( !Instance )
    goto LABEL_43;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  if ( !v25 )
    goto LABEL_43;
  v30.fields.z = localPosition.fields.z + this->fields.pos.fields.z;
  v30.fields.y = localPosition.fields.y + this->fields.pos.fields.y;
  v30.fields.x = localPosition.fields.x + this->fields.pos.fields.x;
  UnityEngine_Transform__set_localPosition(v25, v30, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0);
  if ( !Instance )
    goto LABEL_43;
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v31, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0);
  if ( !Instance )
    goto LABEL_43;
  v32.fields.x = 1.0;
  v32.fields.y = 1.0;
  v32.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v32, 0);
  UnityEngine_GameObject__SetActive(v23, 1, 0);
  Instance = (DataManager_o *)this->fields._effectEnt_5__2;
  if ( !Instance )
    goto LABEL_43;
  if ( EffectEntity__isSe((EffectEntity_o *)Instance, 0) )
  {
    v26 = Method_BattlePerformanceMaster__DelayEffect_d__212_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster__DelayEffect_d__212_MoveNext__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster__DelayEffect_d__212_MoveNext__);
    Instance = (DataManager_o *)sub_1C93AB8(v26, v26[4]);
    effectEnt_5__2 = this->fields._effectEnt_5__2;
    if ( !effectEnt_5__2 )
      goto LABEL_43;
    OverwriteAssetSoundName__PlaySe_42150528(
      (System_Reflection_MethodBase_o *)Instance,
      (System_String_o *)StringLiteral_3098/*"Battle"*/,
      effectEnt_5__2->fields.se,
      1.0,
      0,
      0,
      0);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v23,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleDropEffectOncePlaySe___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !_4__this )
      goto LABEL_43;
    if ( !Component_object )
      goto LABEL_43;
    Instance = (DataManager_o *)_4__this->fields.perf;
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)BattlePerformance__TryOncePlayDropItemEffectSe(
                                  (BattlePerformance_o *)Instance,
                                  (System_String_o *)Component_object[2].klass,
                                  0);
  }
  if ( this->fields.checkObject )
  {
    if ( _4__this )
    {
      Instance = (DataManager_o *)_4__this->fields.battleItemEffectObject;
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)Instance,
          this->fields.id,
          (Il2CppObject *)v23,
          (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_43:
    sub_1C93D2C(Instance, v6);
  }
  return 0;
}


Il2CppObject *BattlePerformanceMaster__DelayEffect_d__212__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayEffect_d__212_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__DelayEffect_d__212__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayEffect_d__212_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__DelayEffect_d__212_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__DelayEffect_d__212__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayEffect_d__212_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__DelayEffect_d__212__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayEffect_d__212_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__DelayShowItem_d__215___ctor(
        BattlePerformanceMaster__DelayShowItem_d__215_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__DelayShowItem_d__215__MoveNext(
        BattlePerformanceMaster__DelayShowItem_d__215_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *obj; // x20
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_4D340C3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D340C3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = (UnityEngine_Object_o *)this->fields.obj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(obj, 0, 0) )
    {
      v16 = this->fields.obj;
      if ( !v16 )
        sub_1C93D2C(0, v15);
      UnityEngine_GameObject__SetActive(v16, 1, 0);
    }
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v5, v7, v8, v9, v10, v11, v12);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *BattlePerformanceMaster__DelayShowItem_d__215__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayShowItem_d__215_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__DelayShowItem_d__215__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayShowItem_d__215_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__DelayShowItem_d__215_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__DelayShowItem_d__215__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayShowItem_d__215_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__DelayShowItem_d__215__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayShowItem_d__215_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__OpenRetireDialog_d__167___ctor(
        BattlePerformanceMaster__OpenRetireDialog_d__167_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__OpenRetireDialog_d__167__MoveNext(
        BattlePerformanceMaster__OpenRetireDialog_d__167_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattlePerformanceMaster__OpenRetireDialog_d__167_o *v8; // x19
  int32_t _1__state; // w8
  DefCoroutine_c *v10; // x0
  Il2CppObject *milliSecSeven; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v16; // x21

  v8 = this;
  if ( (byte_4D340C4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_OnRetireDialog__);
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    this = (BattlePerformanceMaster__OpenRetireDialog_d__167_o *)sub_1C93AD4(&DefCoroutine_TypeInfo);
    byte_4D340C4 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this
      || (logic = _4__this->fields.logic,
          v16 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo),
          NotificationDialog_ClickDelegate___ctor(
            v16,
            (Il2CppObject *)_4__this,
            Method_BattlePerformanceMaster_OnRetireDialog__,
            0),
          !logic)
      || (BattleLogic__OpenBattleLoseDlg(logic, 1, 1, v16, 0, 0),
          (this = (BattlePerformanceMaster__OpenRetireDialog_d__167_o *)_4__this->fields.perf) == 0) )
    {
      sub_1C93D2C(this, method);
    }
    BattlePerformance__SetScreenEffectMode((BattlePerformance_o *)this, 0, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v10 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v10 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (Il2CppObject *)v10->static_fields->milliSecSeven;
  v8->fields.__2__current = milliSecSeven;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C93A78(p__2__current, (int32_t)milliSecSeven, v2, v3, v4, v5, v6, v7);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return 1;
}


Il2CppObject *BattlePerformanceMaster__OpenRetireDialog_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__OpenRetireDialog_d__167_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__OpenRetireDialog_d__167__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__OpenRetireDialog_d__167_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__OpenRetireDialog_d__167_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__OpenRetireDialog_d__167__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__OpenRetireDialog_d__167_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__OpenRetireDialog_d__167__System_IDisposable_Dispose(
        BattlePerformanceMaster__OpenRetireDialog_d__167_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209___ctor(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209__MoveNext(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *v2; // x20
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x19
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  UnityEngine_WaitForSeconds_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_T__TResult__o *v15; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_float__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  struct System_Collections_Generic_IEnumerator_float__o *v36; // x19
  System_Collections_Generic_IEnumerator_float__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *v54; // x8
  int32_t size; // w2
  int v56; // w9
  UnityEngine_WaitForSeconds_o *v57; // x19
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *v64; // [xsp+18h] [xbp-28h]

  v2 = this;
  v64 = this;
  if ( (byte_4D340C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePerformanceMaster_startMasterBuffEffect__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    sub_1C93AD4(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_float__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_float__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *)sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D340C5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1C93D2C(this, method);
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1C93D2C(this, method);
      delayAfterNoblePhantasmBuffData = _4__this->fields.delayAfterNoblePhantasmBuffData;
      if ( !delayAfterNoblePhantasmBuffData )
        sub_1C93D2C(this, method);
      if ( delayAfterNoblePhantasmBuffData->fields._size >= 1 )
      {
        v6 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v6, 0.25, 0);
        v64->fields.__2__current = (Il2CppObject *)v6;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
        v64->fields.__1__state = 1;
        return 1;
      }
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    v15 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    System_Func_object__float____ctor(
      v15,
      (Il2CppObject *)_4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      0);
    v16 = System_Linq_Enumerable__Select_object__float_(
            v14,
            (System_Func_TSource__TResult__o *)v15,
            (const MethodInfo_31DB198 *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v18 = v16;
    if ( !v16 )
      sub_1C93D2C(0, v17);
    klass = v16->klass;
    v20 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_16:
      v22 = sub_1C69E5C(v16, System_Collections_Generic_IEnumerable_float__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v22)(
            v18,
            *(_QWORD *)(v22 + 8));
    v64->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.__7__wrap1, v23, v24, v25, v26, v27, v28, v29);
    v2 = v64;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1C93D2C(this, method);
  v31 = _7__wrap1->klass;
  v32 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_24;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_24:
    v34 = sub_1C69E5C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v34)(
          _7__wrap1,
          *(_QWORD *)(v34 + 8))
      & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209____m__Finally1(v64, v35);
    v64->fields.__7__wrap1 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.__7__wrap1, 0, v41, v42, v43, v44, v45, v46);
    if ( !_4__this )
      sub_1C93D2C(v47, v48);
    v54 = _4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !v54 )
      sub_1C93D2C(v47, v48);
    size = v54->fields._size;
    v56 = v54->fields._version + 1;
    v54->fields._size = 0;
    v54->fields._version = v56;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v54->fields._items, 0, size, 0);
    _4__this->fields.effectAfterNoblePhantasmCoroutine = 0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.effectAfterNoblePhantasmCoroutine,
      0,
      size,
      v49,
      v50,
      v51,
      v52,
      v53);
    return 0;
  }
  v36 = v64->fields.__7__wrap1;
  if ( !v36 )
    sub_1C93D2C(v64, v35);
  v37 = v36->klass;
  v38 = *(unsigned __int16 *)&v36->klass->_2.rank;
  if ( *(_WORD *)&v36->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v39 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_32:
    v40 = sub_1C69E5C(v64->fields.__7__wrap1, System_Collections_Generic_IEnumerator_float__TypeInfo, 0);
  }
  (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v40)(
    v36,
    *(_QWORD *)(v40 + 8));
  v57 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v57, 0.25, 0);
  v64->fields.__2__current = (Il2CppObject *)v57;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.__2__current, (int32_t)v57, v58, v59, v60, v61, v62, v63);
  v64->fields.__1__state = 2;
  return 1;
}


Il2CppObject *BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209__System_IDisposable_Dispose(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 || _1__state == -3 )
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209____m__Finally1(this, method);
}


void BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209____m__Finally1(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__209_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_float__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D340C6 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D340C6 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1C69E5C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D340BD & 1) == 0 )
  {
    sub_1C93AD4(&BattlePerformanceMaster___c_TypeInfo);
    byte_4D340BD = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattlePerformanceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceMaster___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceMaster___c___ctor(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceMaster___c___IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi_b__222_0(
        BattlePerformanceMaster___c_o *this,
        ExtraBattleUserInterfaceComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return comp->fields.changeRootExtraPlacement;
}


void BattlePerformanceMaster___c___selectedSkillSvt_b__149_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster___c___selectedSvt_b__125_0(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  ;
}


bool BattlePerformanceMaster___c___updateSkillIcon_b__103_0(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0);
}


bool BattlePerformanceMaster___c___updateSkillIcon_b__103_1(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0);
}


void BattlePerformanceMaster___c__DisplayClass174_0___ctor(
        BattlePerformanceMaster___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass174_0___ProcLightExButton_b__0(
        BattlePerformanceMaster___c__DisplayClass174_0_o *this,
        ExtraBattleUserInterfaceComponent_o *comp,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  struct BattlePerformanceMaster_o *_4__this; // x21
  BattlePerformanceMaster_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4D340BE & 1) == 0 )
  {
    sub_1C93AD4(&ExtraBattleUserInterfaceButtonComponent_TypeInfo);
    byte_4D340BE = 1;
  }
  if ( comp )
  {
    naturalAligment = ExtraBattleUserInterfaceButtonComponent_TypeInfo->_2.naturalAligment;
    if ( comp->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ExtraBattleUserInterfaceButtonComponent_c *)comp->klass->_2.typeHierarchy[naturalAligment - 1] == ExtraBattleUserInterfaceButtonComponent_TypeInfo )
    {
      _4__this = this->fields.__4__this;
      gameObject = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)comp,
                                                  0);
      if ( !_4__this )
        sub_1C93D2C(gameObject, v8);
      BattlePerformanceMaster__proclight(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        this->fields.target == 3,
        v9);
    }
  }
}


void BattlePerformanceMaster___c__DisplayClass193_0___ctor(
        BattlePerformanceMaster___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass193_0___startMasterBuffEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass193_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v6; // x1
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x20
  struct BattlePerformanceMaster_o *v11; // x8
  UnityEngine_Transform_o *v12; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Component_object; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  float v24; // s0
  struct BattlePerformanceMaster_o *v25; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  intptr_t v29; // x8

  if ( (byte_4D340BF & 1) == 0 )
  {
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__0__);
    sub_1C93AD4(&StringLiteral_3098/*"Battle"*/);
    byte_4D340BF = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(x, 0, 1, 1.0, 0);
  _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v8 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[5].monitor;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0);
  EffectObjectSafe = BaseMonoBehaviour__createObject(_4__this, v8, transform, 0, 0);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  v10 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_31;
  v12 = (UnityEngine_Transform_o *)EffectObjectSafe;
  EffectObjectSafe = v11->fields.master_root;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)EffectObjectSafe,
                                                   0);
  if ( !v12 )
    goto LABEL_31;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)EffectObjectSafe, 0);
  UnityEngine_GameObject__SetActive(v10, 1, 0);
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)EffectObjectSafe,
             x,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( EffectEntity__isSe((EffectEntity_o *)Entity, 0) )
    {
      v15 = Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__0__;
      if ( (*((_BYTE *)Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__0__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C93AEC(Method_BattlePerformanceMaster___c__DisplayClass193_0__startMasterBuffEffect_b__0__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v15, v15[4]);
      OverwriteAssetSoundName__PlaySe_42150528(
        v16,
        (System_String_o *)StringLiteral_3098/*"Battle"*/,
        (System_String_o *)v14[2].klass,
        1.0,
        0,
        0,
        0);
    }
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)EffectObjectSafe & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    v24 = *(float *)&Component_object[2].klass;
    if ( this->fields.waitTime < v24 )
      this->fields.waitTime = v24;
  }
  v25 = this->fields.__4__this;
  if ( !v25
    || (EffectObjectSafe = (UnityEngine_GameObject_o *)v25->fields.masterBuffEffectObjectList) == 0
    || (m_CachedPtr = EffectObjectSafe->fields.m_CachedPtr,
        v27 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(EffectObjectSafe[1].klass),
        !m_CachedPtr) )
  {
LABEL_31:
    sub_1C93D2C(EffectObjectSafe, v6);
  }
  klass_low = SLODWORD(EffectObjectSafe[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)EffectObjectSafe,
      (Il2CppObject *)v10,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = m_CachedPtr + 8 * klass_low;
    LODWORD(EffectObjectSafe[1].klass) = klass_low + 1;
    *(_QWORD *)(v29 + 32) = v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v10, v18, v19, v20, v21, v22, v23);
  }
}


void BattlePerformanceMaster___c__DisplayClass193_0___startMasterBuffEffect_b__1(
        BattlePerformanceMaster___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_MasterBuffData_o *masterBuffData; // x8
  struct BattlePerformanceMaster_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x0
  UnityEngine_Coroutine_o *started; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  masterBuffData = this->fields.masterBuffData;
  if ( !masterBuffData )
    goto LABEL_8;
  if ( masterBuffData->fields._IsEnd_k__BackingField )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      method = (const MethodInfo *)_4__this->fields.masterIconFadeCoroutine;
      if ( !method
        || (UnityEngine_MonoBehaviour__StopCoroutine_72105720(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              (UnityEngine_Coroutine_o *)method,
              0),
            (_4__this = this->fields.__4__this) != 0) )
      {
        v5 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, method);
        started = UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0);
        _4__this->fields.masterIconFadeCoroutine = started;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.masterIconFadeCoroutine,
          (int32_t)started,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        return;
      }
    }
LABEL_8:
    sub_1C93D2C(this, method);
  }
}


void BattlePerformanceMaster___c__DisplayClass197_0___ctor(
        BattlePerformanceMaster___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass197_0___endMasterBuffEffectFadeOut_b__0(
        BattlePerformanceMaster___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattlePerformanceMaster_o *_4__this; // x8
  BattlePerformanceMaster___c__DisplayClass197_0_o *v9; // x19
  const MethodInfo *v10; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        _4__this->fields.masterIconFadeCoroutine = 0,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&_4__this->fields.masterIconFadeCoroutine, 0, v2, v3, v4, v5, v6, v7),
        (this = (BattlePerformanceMaster___c__DisplayClass197_0_o *)v9->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  BattlePerformanceMaster__endMasterBuffEffect(
    (BattlePerformanceMaster_o *)this,
    v9->fields.widget,
    *((BattlePerformanceMaster_MasterBuffEffectData_o **)this + 71),
    v10);
}


void BattlePerformanceMaster___c__DisplayClass216_0___ctor(
        BattlePerformanceMaster___c__DisplayClass216_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass216_0___StartBattleItemAppearEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass216_0_o *this,
        const MethodInfo *method)
{
  struct BattleDropRandomBound_o *jumping; // x8
  BattlePerformanceMaster___c__DisplayClass216_0_o *v3; // x19
  BattlePerformanceMaster_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x1
  const MethodInfo *v6; // x4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  jumping = this->fields.jumping;
  if ( !jumping
    || (v3 = this, (this = (BattlePerformanceMaster___c__DisplayClass216_0_o *)jumping->fields.boundObject) == 0)
    || (this = (BattlePerformanceMaster___c__DisplayClass216_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        _4__this = v3->fields.__4__this,
        v3->fields.appearPos = localPosition,
        !_4__this) )
  {
    sub_1C93D2C(this, method);
  }
  v5 = BattlePerformanceMaster__DelayEffect(_4__this, v3->fields.id, v3->fields.parentObj, 0, localPosition, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0);
}


void BattlePerformanceMaster___c__DisplayClass223_0___ctor(
        BattlePerformanceMaster___c__DisplayClass223_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceMaster___c__DisplayClass223_0___IBattlePerformanceExtraUiParent_OnTapButtonCallback_b__0(
        BattlePerformanceMaster___c__DisplayClass223_0_o *this,
        int32_t confirmNextPartyIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster___c__DisplayClass223_0_o *v4; // x20
  struct BattlePerformanceMaster_o *_4__this; // x8
  System_String_o **v6; // x8

  v4 = this;
  if ( (byte_4D340C0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3299/*"CANCEL_SWITCH_PARTY"*/);
    this = (BattlePerformanceMaster___c__DisplayClass223_0_o *)sub_1C93AD4(&StringLiteral_3786/*"CONFIRM_SWITCH_PARTY"*/);
    byte_4D340C0 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattlePerformanceMaster___c__DisplayClass223_0_o *)_4__this->fields.myFsm,
        _4__this->fields.tempSelectNextPartyIndex = confirmNextPartyIndex,
        !this) )
  {
    sub_1C93D2C(this, *(_QWORD *)&confirmNextPartyIndex);
  }
  if ( v4->fields.selectNextPartyIndex == confirmNextPartyIndex )
    v6 = (System_String_o **)&StringLiteral_3786/*"CONFIRM_SWITCH_PARTY"*/;
  else
    v6 = (System_String_o **)&StringLiteral_3299/*"CANCEL_SWITCH_PARTY"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, *v6, 0);
}


void BattlePerformanceMaster___c__DisplayClass95_0___ctor(
        BattlePerformanceMaster___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceMaster___c__DisplayClass95_0___Initialize_b__0(
        BattlePerformanceMaster___c__DisplayClass95_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  BattlePerformanceMaster___c__DisplayClass95_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BattlePerformanceMaster___c__DisplayClass95_0_o *)UnityEngine_Object__get_name(
                                                                     (UnityEngine_Object_o *)x,
                                                                     0)) == 0) )
  {
    sub_1C93D2C(this, x);
  }
  return System_String__StartsWith((System_String_o *)this, v3->fields.flashPrefabName, 0);
}


void BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197___ctor(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197__MoveNext(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattlePerformanceMaster_o *v17; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass197_0_o *_8__1; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct BattlePerformanceMaster___c__DisplayClass197_0_o *v34; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass197_0_o *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  UnityEngine_Object_o *effectTween; // x19
  TweenAlpha_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  UITweener_o *v51; // x20
  Il2CppObject *v52; // x19
  EventDelegate_Callback_o *v53; // x21

  v2 = this;
  if ( (byte_4D340C7 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattlePerformanceMaster___c__DisplayClass197_0__endMasterBuffEffectFadeOut_b__0__);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)sub_1C93AD4(&BattlePerformanceMaster___c__DisplayClass197_0_TypeInfo);
    byte_4D340C7 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)_4__this->fields.master_root;
    if ( !this )
      goto LABEL_26;
    _8__1 = v2->fields.__8__1;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_26;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&_8__1->fields.widget, (int32_t)this, v28, v29, v30, v31, v32, v33);
    v34 = v2->fields.__8__1;
    if ( !v34 )
      goto LABEL_26;
    widget = (UnityEngine_Object_o *)v34->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)UnityEngine_Object__op_Equality(widget, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v36 = v2->fields.__8__1;
      if ( !v36 )
        goto LABEL_26;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)v36->fields.widget;
      if ( !this )
        goto LABEL_26;
      ((void (__fastcall *)(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
        1.0);
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_26;
      if ( BattlePerformance__isPositionTactical((BattlePerformance_o *)this, 0) )
      {
        _4__this->fields.isMasterBuffEffectPlaying = 0;
        _4__this->fields.masterIconFadeCoroutine = 0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.masterIconFadeCoroutine,
          0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        effectTween = (UnityEngine_Object_o *)_4__this->fields.effectTween;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(effectTween, 0, 0) )
        {
          this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)_4__this->fields.effectTween;
          if ( !this )
            goto LABEL_26;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        }
      }
      else
      {
        v44 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0);
        _4__this->fields.effectTween = v44;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.effectTween,
          (int32_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        v51 = (UITweener_o *)_4__this->fields.effectTween;
        if ( !v51 )
          goto LABEL_26;
        v51->fields.method = 6;
        v52 = (Il2CppObject *)v2->fields.__8__1;
        v53 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v53,
          v52,
          Method_BattlePerformanceMaster___c__DisplayClass197_0__endMasterBuffEffectFadeOut_b__0__,
          0);
        UITweener__SetOnFinished(v51, v53, 0);
      }
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C93D20(BattlePerformanceMaster___c__DisplayClass197_0_TypeInfo);
    System_Object___ctor(v4, 0);
    v2->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass197_0_o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *)v2->fields.__8__1;
    if ( this )
    {
      v17 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v17;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v17, v11, v12, v13, v14, v15, v16);
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C93A78(p__2__current, 0, v19, v20, v21, v22, v23, v24);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return 1;
    }
LABEL_26:
    sub_1C93D2C(this, method);
  }
  return 0;
}


Il2CppObject *BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197__System_IDisposable_Dispose(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__197_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__waitMasterBuffEffect_d__195___ctor(
        BattlePerformanceMaster__waitMasterBuffEffect_d__195_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__waitMasterBuffEffect_d__195__MoveNext(
        BattlePerformanceMaster__waitMasterBuffEffect_d__195_o *this,
        const MethodInfo *method)
{
  unsigned int _1__state; // w8
  bool v4; // cf
  bool v5; // zf
  int32_t v6; // w8
  float waitTime; // s8
  BattlePerformanceMaster_o *_4__this; // x0
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  bool result; // w0
  float deltaTime; // s0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  _1__state = this->fields.__1__state;
  v4 = _1__state >= 2;
  v5 = _1__state == 2;
  v6 = -1;
  if ( !v4 )
  {
    waitTime = this->fields.waitTime;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( waitTime >= 0.0 )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      this->fields.__2__current = 0;
      this->fields.waitTime = waitTime - deltaTime;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v18, v19, v20, v21, v22, v23);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_1C93D2C(0, method);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, method);
      this->fields.__2__current = v9;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11, v12, v13, v14, v15);
      result = 1;
      v6 = 2;
    }
    goto LABEL_8;
  }
  result = 0;
  if ( v5 )
LABEL_8:
    this->fields.__1__state = v6;
  return result;
}


Il2CppObject *BattlePerformanceMaster__waitMasterBuffEffect_d__195__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__waitMasterBuffEffect_d__195__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__waitMasterBuffEffect_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__195_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__waitMasterBuffEffect_d__195__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__waitMasterBuffEffect_d__195__System_IDisposable_Dispose(
        BattlePerformanceMaster__waitMasterBuffEffect_d__195_o *this,
        const MethodInfo *method)
{
  ;
}