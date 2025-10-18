void BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C46575 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster_TypeInfo);
    sub_1C37058(&StringLiteral_17497/*"btn_master_skill"*/);
    byte_4C46575 = 1;
  }
  BattlePerformanceMaster_TypeInfo->static_fields->MASTER_SKILL_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_17497/*"btn_master_skill"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)BattlePerformanceMaster_TypeInfo->static_fields, StringLiteral_17497/*"btn_master_skill"*/, v1, v2);
}


void BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C46574 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    byte_4C46574 = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterBuffEffectObjectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.delayAfterNoblePhantasmBuffData, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.battleItemEffectObject, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.battleItemEffectCoroutines, (int32_t)v12, v13, v14);
  v15 = sub_1C372A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterBuffEffectDataClose, v15, v16, v17);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


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

  if ( (byte_4C46509 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&StringLiteral_19657/*"frame_master_bg"*/);
    byte_4C46509 = 1;
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
        TransformHelper__DestroyChildren(transform, 0),
        (data = this->fields.data) == 0)
    || (MasterFaceManager__CreatePrefab_40670548(
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
                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
  {
LABEL_10:
    sub_1C372B4(userGrade);
  }
  UISprite__set_spriteName((UISprite_o *)userGrade, (System_String_o *)StringLiteral_19657/*"frame_master_bg"*/, 0);
  BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v9);
  BattlePerformanceMaster__UpdateMasterSkill(this, v10);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v11);
}


void BattlePerformanceMaster__CloseBoostSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4652C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4652C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C46563 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46563 = 1;
  }
  win_Retire = this->fields.win_Retire;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0);
  if ( !win_Retire )
    sub_1C372B4(v5);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Retire->klass->vtable._12_Close.methodPtr)(
    win_Retire,
    v4,
    win_Retire->klass->vtable._12_Close.method);
}


void BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46527 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46527 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C4656A & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster__DelayEffect_d__209_TypeInfo);
    byte_4C4656A = 1;
  }
  v13 = checkObject;
  v14 = sub_1C372A4(BattlePerformanceMaster__DelayEffect_d__209_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  *(_DWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 64) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 64), (int32_t)this, v15, v16);
  *(_DWORD *)(v14 + 32) = id;
  *(_QWORD *)(v14 + 40) = parentObj;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 40), (int32_t)parentObj, v17, v18);
  *(_BYTE *)(v14 + 60) = v13;
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
  const MethodInfo *v7; // x3

  if ( (byte_4C4656C & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster__DelayShowItem_d__212_TypeInfo);
    byte_4C4656C = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceMaster__DelayShowItem_d__212_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = obj;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)obj, v6, v7);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceMaster__EndNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields._IsNoblePhantasm_k__BackingField = 0;
  v3 = BattlePerformanceMaster__WaitTimeMasterBuffEffect(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectAfterNoblePhantasmCoroutine, (int32_t)started, v5, v6);
}


bool BattlePerformanceMaster__GetBattleItemGetPos(
        BattlePerformanceMaster_o *this,
        UnityEngine_Vector3_o *outVector,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Object_o *battleItemTr; // x21
  bool v8; // w21
  UnityEngine_Transform_o *v9; // x0

  if ( (byte_4C4656E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4656E = 1;
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&outVector->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  outVector->fields.z = z;
  battleItemTr = (UnityEngine_Object_o *)this->fields.battleItemTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(battleItemTr, 0, 0);
  if ( !v8 )
  {
    v9 = this->fields.battleItemTr;
    if ( !v9 )
      sub_1C372B4(0);
    *outVector = UnityEngine_Transform__get_localPosition(v9, 0);
  }
  return !v8;
}


void BattlePerformanceMaster__HideMaster(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *userGrade; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C4650A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&StringLiteral_19659/*"frame_master_bg_disable"*/);
    byte_4C4650A = 1;
  }
  userGrade = this->fields.userGrade;
  if ( !userGrade
    || (UnityEngine_GameObject__SetActive(userGrade, 0, 0), (userGrade = this->fields.master_root) == 0)
    || (userGrade = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  userGrade,
                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0
    || (UISprite__set_spriteName((UISprite_o *)userGrade, (System_String_o *)StringLiteral_19659/*"frame_master_bg_disable"*/, 0),
        (userGrade = this->fields.face_root) == 0) )
  {
    sub_1C372B4(userGrade);
  }
  transform = UnityEngine_GameObject__get_transform(userGrade, 0);
  TransformHelper__DestroyChildren(transform, 0);
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
  System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *Components; // x0
  BattlePerformanceMaster___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__bool__o *_9__219_0; // x21
  Il2CppObject *v8; // x22
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct BattlePerformanceMaster_PlacePositionSetting_array *placePositionSettings; // x21
  int max_length; // w8
  unsigned int v15; // w22
  bool v16; // w20

  if ( (byte_4C4656F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceComponent___);
    sub_1C37058(&System_Func_ExtraBattleUserInterfaceComponent__bool__TypeInfo);
    sub_1C37058(&Method_BattlePerformanceMaster___c__IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi_b__219_0__);
    sub_1C37058(&BattlePerformanceMaster___c_TypeInfo);
    byte_4C4656F = 1;
  }
  v3 = BattlePerformanceMaster__get_ExUiController(this, method);
  if ( !v3 )
    goto LABEL_18;
  Components = ExtraBattleUserInterfaceController__get_Components(v3, 0);
  v5 = BattlePerformanceMaster___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)Components;
  if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
    v5 = BattlePerformanceMaster___c_TypeInfo;
  }
  _9__219_0 = (System_Func_object__bool__o *)v5->static_fields->__9__219_0;
  if ( !_9__219_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattlePerformanceMaster___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__219_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ExtraBattleUserInterfaceComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__219_0,
      v8,
      Method_BattlePerformanceMaster___c__IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi_b__219_0__,
      0);
    static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
    static_fields->__9__219_0 = (struct System_Func_ExtraBattleUserInterfaceComponent__bool__o *)_9__219_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__219_0, (int32_t)_9__219_0, v10, v11);
  }
  v3 = (ExtraBattleUserInterfaceController_o *)System_Linq_Enumerable__Any_object__51336868(
                                                 v6,
                                                 (System_Func_TSource__bool__o *)_9__219_0,
                                                 (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceComponent___);
  placePositionSettings = this->fields.placePositionSettings;
  if ( !placePositionSettings )
    goto LABEL_18;
  max_length = placePositionSettings->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v16 = (unsigned __int8)v3 & 1;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C372BC(v3);
      v3 = (ExtraBattleUserInterfaceController_o *)placePositionSettings->m_Items[v15];
      if ( !v3 )
        break;
      BattlePerformanceMaster_PlacePositionSetting__AdjustPosition(
        (BattlePerformanceMaster_PlacePositionSetting_o *)v3,
        v16,
        v12);
      max_length = placePositionSettings->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C372B4(v3);
  }
LABEL_16:
  BattlePerformanceMaster__ProcLightExButton(this, this->fields.lastProcLightOnTarget, v12);
}


void BattlePerformanceMaster__IBattlePerformanceExtraUiParent_OnTapButtonCallback(
        BattlePerformanceMaster_o *this,
        int32_t execType,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattlePerformance_o *perf; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattlePerformance_o *v9; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x21
  BattleData_o *data; // x22
  int32_t v13; // w23
  System_Action_int__o *v14; // x24

  if ( (byte_4C46570 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass220_0__IBattlePerformanceExtraUiParent_OnTapButtonCallback_b__0__);
    sub_1C37058(&BattlePerformanceMaster___c__DisplayClass220_0_TypeInfo);
    sub_1C37058(&StringLiteral_3489/*"CLICK_SWITCH_PARTY"*/);
    byte_4C46570 = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceMaster___c__DisplayClass220_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  if ( execType == 1 )
  {
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_13;
    perf = (BattlePerformance_o *)BattlePerformance__IsEnableToSwitchPlayerParty(perf, (int32_t *)(v5 + 24), 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      v9 = this->fields.perf;
      if ( v9 )
      {
        statusPerf = v9->fields.statusPerf;
        if ( statusPerf )
        {
          switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
          data = this->fields.data;
          v13 = *(_DWORD *)(v5 + 24);
          v14 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v14,
            (Il2CppObject *)v5,
            Method_BattlePerformanceMaster___c__DisplayClass220_0__IBattlePerformanceExtraUiParent_OnTapButtonCallback_b__0__,
            0);
          if ( switchPartyConfirmWindow )
          {
            BattleSwitchPartyConfirmWindow__SetSwitchPartyData(switchPartyConfirmWindow, data, v13, v14, 0);
            perf = (BattlePerformance_o *)this->fields.myFsm;
            if ( perf )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3489/*"CLICK_SWITCH_PARTY"*/, 0);
              return;
            }
          }
        }
      }
LABEL_13:
      sub_1C372B4(perf);
    }
  }
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  CommandSpellWindowComponent_CloseButtonCallBack_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct CommandSpellWindowComponent_o *v22; // x21
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct BattleData_o *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleData_o *v31; // x1
  UnityEngine_Transform_o *v32; // x21
  int v33; // s0
  int v34; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *fieldConf; // x21
  BattleFieldConfConponent_o *v44; // x21
  System_Action_o *v45; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct BattleData_o *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  AssetData_o *v54; // x21
  int32_t v55; // w1
  UnityEngine_GameObject_o *v56; // x21
  UnityEngine_GameObject_array *Children; // x22
  System_Func_object__bool__o *v58; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UnityEngine_Object_o *battleItemUi; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46507 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_GameObject___);
    sub_1C37058(&Method_BattlePerformanceMaster_OnCloseFieldConf__);
    sub_1C37058(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__);
    sub_1C37058(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__);
    sub_1C37058(&Method_BattlePerformanceMaster_procUseCommandSpell__);
    sub_1C37058(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_1C37058(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    sub_1C37058(&System_Func_GameObject__bool__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass93_0__Initialize_b__0__);
    sub_1C37058(&BattlePerformanceMaster___c__DisplayClass93_0_TypeInfo);
    sub_1C37058(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
    sub_1C37058(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C37058(&StringLiteral_18848/*"ef_masterskill_flash"*/);
    byte_4C46507 = 1;
  }
  v9 = sub_1C372A4(BattlePerformanceMaster___c__DisplayClass93_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  this->fields.perf = inperf;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.perf, (int32_t)inperf, v10, v11);
  this->fields.data = indata;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)indata, v12, v13);
  this->fields.logic = inlogic;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)inlogic, v14, v15);
  skillBtn = (char *)this->fields.skillBtn;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0);
  if ( !skillBtn )
    goto LABEL_59;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0);
  skillBtn = (char *)this->fields.menuBtn;
  this->fields.pos_skillbtn = localPosition;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0);
  if ( !skillBtn )
    goto LABEL_59;
  v65 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v65;
  if ( !skillBtn )
    goto LABEL_59;
  BattleMasterSkillWindowComponent__setInitData((BattleMasterSkillWindowComponent_o *)skillBtn, 0, 0.1, 0, 0);
  skillBtn = (char *)this->fields.win_Skill;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_59;
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_59;
  CommandSpellWindowComponent__InitializeCommandSpell(
    (CommandSpellWindowComponent_o *)skillBtn,
    this->fields.perf,
    1,
    data->fields.temporarySpell,
    0);
  win_Spell = this->fields.win_Spell;
  v19 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C372A4(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0);
  if ( !win_Spell )
    goto LABEL_59;
  win_Spell->fields.callback_close = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&win_Spell->fields.callback_close, (int32_t)v19, v20, v21);
  v22 = this->fields.win_Spell;
  v23 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_1C372A4(CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0);
  if ( !v22 )
    goto LABEL_59;
  v22->fields.callback_use = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->fields.callback_use, (int32_t)v23, v24, v25);
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_59;
  v28 = this->fields.data;
  *((_QWORD *)skillBtn + 11) = v28;
  sub_1C36FFC((CGThumbnailListItem_o *)(skillBtn + 88), (int32_t)v28, v26, v27);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  v31 = this->fields.data;
  *((_QWORD *)skillBtn + 19) = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)(skillBtn + 152), (int32_t)v31, v29, v30);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_59;
  v32 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0);
  if ( !skillBtn )
    goto LABEL_59;
  v66 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0);
  if ( !v32 )
    goto LABEL_59;
  v33 = 0;
  v34 = 0;
  UnityEngine_Transform__set_localPosition(v32, v66, 0);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  v36 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C372A4(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_59;
  warBoard_win_EnemyConf->fields.callback_close = v36;
  sub_1C36FFC((CGThumbnailListItem_o *)&warBoard_win_EnemyConf->fields.callback_close, (int32_t)v36, v37, v38);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  win_EnemyConf = this->fields.win_EnemyConf;
  v40 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C372A4(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0);
  if ( !win_EnemyConf )
    goto LABEL_59;
  win_EnemyConf->fields.callback_close = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&win_EnemyConf->fields.callback_close, (int32_t)v40, v41, v42);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0, 0) )
  {
    v44 = this->fields.fieldConf;
    v45 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0);
    if ( !v44 )
      goto LABEL_59;
    BattleFieldConfConponent__Initialize(v44, v45, 0);
  }
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0);
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_59;
  v48 = this->fields.data;
  *((_QWORD *)skillBtn + 13) = v48;
  sub_1C36FFC((CGThumbnailListItem_o *)(skillBtn + 104), (int32_t)v48, v46, v47);
  BattlePerformanceMaster__updateShortSkill(this, v49);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v50);
  BattlePerformanceMaster__updateSkipDead(this, v51);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_59;
  BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)skillBtn, this->fields.data, 0);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 424LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 432LL));
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
  if ( !v9 )
    goto LABEL_59;
  v54 = (AssetData_o *)skillBtn;
  v55 = StringLiteral_18848/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v9 + 16) = StringLiteral_18848/*"ef_masterskill_flash"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), v55, v52, v53);
  if ( !v54 )
    goto LABEL_59;
  skillBtn = (char *)AssetData__GetObject_object__51154888(
                       v54,
                       *(System_String_o **)(v9 + 16),
                       (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !this->fields.win_Menu )
    goto LABEL_59;
  v56 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0, 0) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0);
    v58 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v58,
      (Il2CppObject *)v9,
      Method_BattlePerformanceMaster___c__DisplayClass93_0__Initialize_b__0__,
      0);
    if ( !BasicHelper__Any_object__51187876(
            (System_Object_array *)Children,
            (System_Func_T__bool__o *)v58,
            (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_GameObject___) )
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_59;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v56, transform, 0, 0);
      this->fields.skillBtnFlashObject = Object;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillBtnFlashObject, (int32_t)Object, v61, v62);
    }
    skillBtn = (char *)this->fields.skillBtnFlashObject;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0);
      goto LABEL_53;
    }
LABEL_59:
    sub_1C372B4(skillBtn);
  }
LABEL_53:
  this->fields._IsNoblePhantasm_k__BackingField = 0;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0, 0) )
  {
    skillBtn = (char *)this->fields.battleItemUi;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0);
      return;
    }
    goto LABEL_59;
  }
}


void BattlePerformanceMaster__InitializeBattleItem(
        BattlePerformanceMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_Object_o *battleItemIcon; // x20
  const MethodInfo *v8; // x1
  UISprite_o *v9; // x20
  int32_t monitor; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46566 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46566 = 1;
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
LABEL_20:
    sub_1C372B4(Instance);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
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
  BattlePerformanceMaster__UpdateBattleItemUi(this, v8);
}


bool BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_1C372B4(0);
  return BattleWindowComponent__isClose(fieldConf, 0);
}


bool BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46565 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15563/*"Wait"*/);
    byte_4C46565 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0)) == 0 )
    sub_1C372B4(myFsm);
  return System_String__IndexOf_63620032((System_String_o *)myFsm, (System_String_o *)StringLiteral_15563/*"Wait"*/, 0) >= 0;
}


void BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46557 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3503/*"CLOSE_CONF"*/);
    byte_4C46557 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3503/*"CLOSE_CONF"*/, 0);
}


void BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46564 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46564 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46562 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46562 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__OnDestroy(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.exUiController = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.exUiController, 0, v2, v3);
}


void BattlePerformanceMaster__OnRetireDialog(BattlePerformanceMaster_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C46547 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_9622/*"OK"*/);
    byte_4C46547 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.logic) == 0)
    || (BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9622/*"OK"*/, 0),
        (Instance = (CommonUI_o *)this->fields.perf) == 0) )
  {
    sub_1C372B4(Instance);
  }
  BattlePerformance__ResetSoundMask((BattlePerformance_o *)Instance, 0);
}


void BattlePerformanceMaster__OpenBoostSkillConfComplete(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4652A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4652A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__OpenRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46546 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster__OpenRetireDialog_d__165_TypeInfo);
    byte_4C46546 = 1;
  }
  v3 = sub_1C372A4(BattlePerformanceMaster__OpenRetireDialog_d__165_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46560 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3445/*"CLICK_CKRETIRE"*/);
    byte_4C46560 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3445/*"CLICK_CKRETIRE"*/, 0);
}


void BattlePerformanceMaster__OpenSkillConfComplete(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46525 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46525 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C46530 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4C46530 = 1;
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
    sub_1C372B4(perf);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1C372A4(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack, (int32_t)v7, v8, v9);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4650B & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_19660/*"frame_master_bg_{0}"*/);
    sub_1C37058(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C4650B = 1;
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
      if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/, 0) )
      {
        data = (BattleData_o *)this->fields.master_root;
        if ( data )
        {
          data = (BattleData_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            v9 = (UISprite_o *)data;
            UISprite__set_atlas((UISprite_o *)data, atlas, 0);
            v18 = v6;
            v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v10, v11, v12, v13, v14, v15);
            v17 = System_String__Format((System_String_o *)StringLiteral_19660/*"frame_master_bg_{0}"*/, v16, 0);
            UISprite__set_spriteName(v9, v17, 0);
            return;
          }
        }
LABEL_15:
        sub_1C372B4(data);
      }
    }
  }
}


void BattlePerformanceMaster__PlayInterruption(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C372B4(0);
  BattleLogic__PlayInterruption(logic, 0);
}


void BattlePerformanceMaster__PlayPartyReorganization(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C372B4(0);
  BattleLogic__PlayPartyReorganization(logic, 0);
}


void BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C46556 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__187_0__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46556 = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0, 0) )
  {
    v4 = this->fields.fieldConf;
    v5 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__187_0__,
      0);
    if ( !v4 )
      sub_1C372B4(v6);
    BattleFieldConfConponent__Close(v4, v5, 0);
  }
}


void BattlePerformanceMaster__ProcCloseSwitchPartyWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4C46572 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster__ProcCloseSwitchPartyWindow_b__222_0__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46572 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0 )
    sub_1C372B4(v4);
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
  {
    v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseSwitchPartyWindow_b__222_0__,
      0);
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      v8,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  }
}


void BattlePerformanceMaster__ProcConfirmSwitchPartyWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4C46573 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster__ProcConfirmSwitchPartyWindow_b__223_0__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46573 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0 )
    sub_1C372B4(v4);
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
  {
    v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcConfirmSwitchPartyWindow_b__223_0__,
      0);
    ((void (__fastcall *)(struct BattleSwitchPartyConfirmWindow_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))switchPartyConfirmWindow->klass->vtable._12_Close.methodPtr)(
      switchPartyConfirmWindow,
      v8,
      switchPartyConfirmWindow->klass->vtable._12_Close.method);
  }
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *Components; // x19
  System_Action_object__o *v11; // x20

  if ( (byte_4C4654C & 1) == 0 )
  {
    sub_1C37058(&System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass172_0__ProcLightExButton_b__0__);
    sub_1C37058(&BattlePerformanceMaster___c__DisplayClass172_0_TypeInfo);
    byte_4C4654C = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceMaster___c__DisplayClass172_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8),
        *(_DWORD *)(v5 + 24) = target,
        (v6 = BattlePerformanceMaster__get_ExUiController(this, v9)) == 0) )
  {
    sub_1C372B4(v6);
  }
  Components = (System_Collections_Generic_IEnumerable_T__o *)ExtraBattleUserInterfaceController__get_Components(v6, 0);
  v11 = (System_Action_object__o *)sub_1C372A4(System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattlePerformanceMaster___c__DisplayClass172_0__ProcLightExButton_b__0__,
    0);
  BasicHelper__ForEach_object_(
    Components,
    (System_Action_T__o *)v11,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
}


void BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v6; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4C46555 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__186_0__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C46555 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_13;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
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
        v7 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__186_0__,
          0);
        if ( v6 )
        {
          BattleFieldConfConponent__Open(v6, v7, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C372B4(perf);
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

  if ( (byte_4C46571 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster__ProcOpenSwitchPartyWindow_b__221_0__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C46571 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_14;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
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
    sub_1C372B4(perf);
  }
  switchPartyConfirmWindow = statusPerf->fields.switchPartyConfirmWindow;
  if ( switchPartyConfirmWindow )
  {
    v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcOpenSwitchPartyWindow_b__221_0__,
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
  BattleMenuWindowComponent_o *win_Menu; // x0

  BattlePerformanceMaster__ProcLight(this, 0, v2);
  BattlePerformanceMaster__proclight(v4, this->fields.menuBtn, 0, v5);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu
    || (BattleMenuWindowComponent__ProcWaveRestart(win_Menu, 0),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.logic) == 0) )
  {
    sub_1C372B4(win_Menu);
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

  if ( (byte_4C4650C & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattlePerformanceMaster_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C37058(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C4650C = 1;
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
  mAtlas = (UIAtlas_o *)System_String__Concat_63561656(klass, v7, 0);
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
  mAtlas = (UIAtlas_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
  if ( !mAtlas
    || (mAtlas = (UIAtlas_o *)AssetData__GetObject_object__51154888(
                                (AssetData_o *)mAtlas,
                                (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168)) == 0
    || (mAtlas = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)mAtlas,
                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_18:
    sub_1C372B4(mAtlas);
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

  if ( (byte_4C46554 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3458/*"CLICK_FIELD"*/);
    byte_4C46554 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3458/*"CLICK_FIELD"*/, 0);
}


void BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C46561 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_OnCompShowRetireSA__);
    sub_1C37058(&Method_BattlePerformanceMaster_ShowRetireSA__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46561 = 1;
  }
  v3 = Method_BattlePerformanceMaster_ShowRetireSA__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_ShowRetireSA__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_ShowRetireSA__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  win_Retire = this->fields.win_Retire;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCompShowRetireSA__, 0);
  if ( !win_Retire )
    sub_1C372B4(v7);
  BattleRetireWindowComponent__Open(win_Retire, v6, v8);
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
  if ( (byte_4C46531 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_3279/*"CANCEL"*/);
    byte_4C46531 = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3279/*"CANCEL"*/, 0);
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
        sub_1C372B4(this);
      }
    }
  }
}


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

  if ( (byte_4C4656B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4656B = 1;
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
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
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
      (const MethodInfo_33FBA0C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_33FBA0C *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
  }
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &v12,
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
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
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v11 = BattlePerformanceMaster__DelayEffect(
          this,
          id,
          (UnityEngine_GameObject_o *)battleItemUi,
          1,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v9);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                                                                     (UnityEngine_MonoBehaviour_o *)this,
                                                                                     v11,
                                                                                     0);
  if ( !battleItemEffectCoroutines )
LABEL_29:
    sub_1C372B4(battleItemEffectObject);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)battleItemEffectCoroutines,
    id,
    (Il2CppObject *)battleItemEffectObject,
    (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
}


void BattlePerformanceMaster__StartBattleGetEffectForBattleSkillDrop(
        BattlePerformanceMaster_o *this,
        int32_t effectId,
        UnityEngine_GameObject_o *parentObj,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_IEnumerator_o *v8; // x1

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v8 = BattlePerformanceMaster__DelayEffect(
         this,
         effectId,
         parentObj,
         0,
         UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
         v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v8, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o **v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  UnityEngine_GameObject_o *v17; // x2
  const MethodInfo *v18; // x4
  System_Collections_IEnumerator_o *v19; // x0
  const MethodInfo *v20; // x1
  Il2CppClass *klass; // x20
  System_Collections_IEnumerator_o *v22; // x0
  __int64 *v23; // x21
  __int64 v24; // x19
  System_Action_o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  UnityEngine_GameObject_o *v29; // x2
  const MethodInfo *v30; // x4
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4656D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BattlePerformanceMaster_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_BattleDropHighPosition___);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_BattleDropRandomBound___);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass213_0__StartBattleItemAppearEffect_b__0__);
    sub_1C37058(&BattlePerformanceMaster___c__DisplayClass213_0_TypeInfo);
    sub_1C37058(&StringLiteral_24188/*"treasure"*/);
    byte_4C4656D = 1;
  }
  component = 0;
  v9 = sub_1C372A4(BattlePerformanceMaster___c__DisplayClass213_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_26;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 48) = parentObj;
  v13 = (UnityEngine_GameObject_o **)(v9 + 48);
  *(_DWORD *)(v9 + 40) = id;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)parentObj, v14, v15);
  if ( !*(_DWORD *)(v9 + 40) )
    return;
  Component_object = *v13;
  if ( !*v13 )
    goto LABEL_26;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_BattleDropHighPosition___);
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
          v16 = *(_DWORD *)(v9 + 40);
          v17 = *(UnityEngine_GameObject_o **)(v9 + 48);
          localPosition.fields.y = localPosition.fields.y + 0.22;
          *(UnityEngine_Vector3_o *)(v9 + 16) = localPosition;
          v19 = BattlePerformanceMaster__DelayEffect(this, v16, v17, 0, localPosition, v18);
          Component_object = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                           v19,
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
                v22 = BattlePerformanceMaster__DelayShowItem((UnityEngine_GameObject_o *)klass, waitTime, v20);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C372B4(Component_object);
  }
  Component_object = *(UnityEngine_GameObject_o **)(v9 + 48);
  if ( !Component_object )
    goto LABEL_26;
  v23 = (__int64 *)(v9 + 56);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   (Il2CppObject **)(v9 + 56),
                                                   (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_BattleDropRandomBound___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v24 = *v23;
    if ( *v23 )
    {
      *(float *)(v24 + 92) = waitTime;
      v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v9,
        Method_BattlePerformanceMaster___c__DisplayClass213_0__StartBattleItemAppearEffect_b__0__,
        0);
      *(_QWORD *)(v24 + 128) = v25;
      sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 128), (int32_t)v25, v26, v27);
      return;
    }
    goto LABEL_26;
  }
  Component_object = *v13;
  if ( !*v13 )
    goto LABEL_26;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  if ( !Component_object )
    goto LABEL_26;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                   (UnityEngine_Transform_o *)Component_object,
                                                   (System_String_o *)StringLiteral_24188/*"treasure"*/,
                                                   0);
  if ( !Component_object )
    goto LABEL_26;
  v33 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0);
  v28 = *(_DWORD *)(v9 + 40);
  v29 = *(UnityEngine_GameObject_o **)(v9 + 48);
  *(UnityEngine_Vector3_o *)(v9 + 16) = v33;
  v22 = BattlePerformanceMaster__DelayEffect(this, v28, v29, 0, v33, v30);
LABEL_24:
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v22, 0);
}


void BattlePerformanceMaster__StartNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *effectAfterNoblePhantasmCoroutine; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_4C46569 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    byte_4C46569 = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71252944(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0);
    this->fields.effectAfterNoblePhantasmCoroutine = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectAfterNoblePhantasmCoroutine, 0, v4, v5);
    delayAfterNoblePhantasmBuffData = this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_1C372B4(v6);
    size = delayAfterNoblePhantasmBuffData->fields._size;
    v9 = delayAfterNoblePhantasmBuffData->fields._version + 1;
    delayAfterNoblePhantasmBuffData->fields._size = 0;
    delayAfterNoblePhantasmBuffData->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)delayAfterNoblePhantasmBuffData->fields._items, 0, size, 0);
  }
}


void BattlePerformanceMaster__UpdateBattleItemUi(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v5; // x19
  System_String_o *Instance; // x0

  if ( (byte_4C46567 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4C46567 = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v3);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0, 0) )
  {
    v5 = this->fields.battleItemCountLabel;
    Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !Instance || (Instance = BasicHelper__ToCommaString(*(_DWORD *)&Instance->fields._firstChar, 0), !v5) )
      sub_1C372B4(Instance);
    UILabel__set_text(v5, Instance, 0);
  }
}


void BattlePerformanceMaster__UpdateMasterSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UISprite_o *data; // x0
  const MethodInfo *v4; // x1
  UISprite_o *skillBtnSp; // x20
  const MethodInfo *v6; // x1
  struct BattleData_o *v7; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  if ( (byte_4C4650E & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3480/*"CLICK_SKILL"*/);
    byte_4C4650E = 1;
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
    v7 = this->fields.data;
    if ( !v7 )
      goto LABEL_19;
    if ( v7->fields.masterSkillIconId >= 1 )
      BattlePerformanceMaster__SetupMasterSkillBtn(this, v6);
    data = (UISprite_o *)this->fields.skillBtn;
    if ( !data )
      goto LABEL_19;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( ComponentInChildren_object )
      {
        v11 = StringLiteral_3480/*"CLICK_SKILL"*/;
        ComponentInChildren_object[2].monitor = (void *)StringLiteral_3480/*"CLICK_SKILL"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&ComponentInChildren_object[2].monitor, v11, v9, v10);
        goto LABEL_18;
      }
LABEL_19:
      sub_1C372B4(data);
    }
  }
LABEL_18:
  BattlePerformanceMaster__updateSkillIcon(this, v4);
}


void BattlePerformanceMaster__UseSkill(BattlePerformanceMaster_o *this, bool playSe, const MethodInfo *method)
{
  PlayMakerFSM_o *perf; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4652E & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_UseSkill__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3279/*"CANCEL"*/);
    byte_4C4652E = 1;
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
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_3279/*"CANCEL"*/, 0);
      return;
    }
LABEL_23:
    sub_1C372B4(perf);
  }
  if ( playSe )
  {
    v8 = Method_BattlePerformanceMaster_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_UseSkill__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_UseSkill__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.actSkillObject, (int32_t)useSkillObject, v6, v7);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_23;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v13) )
  {
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v14);
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
  const MethodInfo *v5; // x3

  if ( (byte_4C46568 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_TypeInfo);
    byte_4C46568 = 1;
  }
  v3 = sub_1C372A4(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  bool IsExistBranchSkillInfo; // w0
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  bool v18; // w8

  v6 = this;
  if ( (byte_4C4652F & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_Target_isSubChoose__);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4652F = 1;
  }
  if ( !skillInfo )
    goto LABEL_19;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0);
  v8 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v8, 0, Method_Target_isSubChoose__, 0);
  if ( !BasicHelper__Any_int__51187064(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944) )
  {
    IsExistBranchSkillInfo = BattleSkillInfoData__IsExistBranchSkillInfo(skillInfo, 0);
    if ( BattleSkillInfoData__IsSelectServant_46382548(ValidTargetTypeArray, IsExistBranchSkillInfo, 0) )
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
          sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.selectMSWindow, (int32_t)SelectMainSubSvtWindow, v15, v16);
          this = (BattlePerformanceMaster_o *)v6->fields.selectMSWindow;
          if ( this )
          {
            ((void (__fastcall *)(BattlePerformanceMaster_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
              this,
              *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
            BattlePerformanceMaster__openSkillSelectSvtWindow(v6, skillInfo, v17);
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
          v18 = 0;
          goto LABEL_18;
        }
      }
    }
LABEL_19:
    sub_1C372B4(this);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.skillselectSvtWindow, (int32_t)SelectSvtWindow, v10, v11);
  this = (BattlePerformanceMaster_o *)v6->fields.skillselectSvtWindow;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformanceMaster_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
    this,
    *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v6, v12);
LABEL_14:
  v18 = 1;
LABEL_18:
  *isOpenOtherWindow = v18;
}


void BattlePerformanceMaster___ProcCloseFieldConf_b__187_0(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46577 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46577 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster___ProcCloseSwitchPartyWindow_b__222_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46579 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46579 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster___ProcConfirmSwitchPartyWindow_b__223_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformance_o *perf; // x0

  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf )
    sub_1C372B4(0);
  BattlePerformance__StartSwitchPlayerParty(perf, this->fields.tempSelectNextPartyIndex, 0);
}


void BattlePerformanceMaster___ProcOpenFieldConf_b__186_0(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46576 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46576 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster___ProcOpenSwitchPartyWindow_b__221_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46578 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46578 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 3, v2);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
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

  if ( (byte_4C46537 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46537 = 1;
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
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
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
    sub_1C372B4(selectMSWindow);
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

  if ( (byte_4C4653D & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_changeShortSkill__);
    byte_4C4653D = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0), !this->fields.data) )
    sub_1C372B4(data);
  v4 = Method_BattlePerformanceMaster_changeShortSkill__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeShortSkill__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_changeShortSkill__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__updateShortSkill(this, v6);
}


void BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C46541 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_changeSkipDead__);
    byte_4C46541 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0), !this->fields.data) )
    sub_1C372B4(data);
  v4 = Method_BattlePerformanceMaster_changeSkipDead__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeSkipDead__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_changeSkipDead__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__updateSkipDead(this, v6);
}


void BattlePerformanceMaster__changeTdConstantVelocity(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C4653F & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_changeTdConstantVelocity__);
    byte_4C4653F = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0), !this->fields.data) )
    sub_1C372B4(data);
  v4 = Method_BattlePerformanceMaster_changeTdConstantVelocity__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeTdConstantVelocity__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_changeTdConstantVelocity__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v6);
}


void BattlePerformanceMaster__checkCommandSpellTarget(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C46520 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46520 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v4);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0),
        (Instance = this->fields.logic) == 0) )
  {
LABEL_12:
    sub_1C372B4(Instance);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0);
}


void BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v4; // x8
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v6; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 *v9; // x8
  struct BattleLogic_UseSkillObject_o *v10; // x1

  v2 = this;
  if ( (byte_4C46523 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9334/*"NO_REACTION"*/);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    sub_1C37058(&StringLiteral_12235/*"SKIP"*/);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_9267/*"NG"*/);
    byte_4C46523 = 1;
  }
  tmp_useSkill = v2->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_25;
  this = (BattlePerformanceMaster_o *)tmp_useSkill->fields.skillInfo;
  if ( !this )
    goto LABEL_25;
  if ( !LOBYTE(this->fields.menuBtn) )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v9 = &StringLiteral_9334/*"NO_REACTION"*/;
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_18;
  v4 = v2->fields.tmp_useSkill;
  if ( !v4 )
    goto LABEL_25;
  this = (BattlePerformanceMaster_o *)v4->fields.skillInfo;
  if ( !this )
    goto LABEL_25;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_18:
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v9 = &StringLiteral_9267/*"NG"*/;
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_25;
  if ( data->fields.systemflg_skipskillconf )
  {
    v6 = v2->fields.tmp_useSkill;
    if ( v6 )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.skillInfo;
      if ( this )
      {
        if ( BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0) || v2->fields.isLongTap )
          goto LABEL_16;
        v10 = v2->fields.tmp_useSkill;
        v2->fields.useSkillObject = v10;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.useSkillObject, (int32_t)v10, v7, v8);
        this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
        if ( this )
        {
          v9 = &StringLiteral_12235/*"SKIP"*/;
          goto LABEL_22;
        }
      }
    }
LABEL_25:
    sub_1C372B4(this);
  }
LABEL_16:
  this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v9 = &StringLiteral_5456/*"END_PROC"*/;
LABEL_22:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0);
}


void BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v5; // x9

  if ( (byte_4C4654D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9622/*"OK"*/);
    sub_1C37058(&StringLiteral_12235/*"SKIP"*/);
    byte_4C4654D = 1;
  }
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0), (myFsm = this->fields.myFsm) == 0) )
  {
    sub_1C372B4(logic);
  }
  v5 = &StringLiteral_9622/*"OK"*/;
  if ( ((unsigned __int8)logic & 1) == 0 )
    v5 = &StringLiteral_12235/*"SKIP"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v5, 0);
}


void BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46528 & 1) == 0 )
  {
    sub_1C37058(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C37058(&StringLiteral_3441/*"CLICK_BOOST"*/);
    byte_4C46528 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C372A4(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0);
  this->fields.tmp_useSkill = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tmp_useSkill, (int32_t)v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3441/*"CLICK_BOOST"*/, 0);
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
  const MethodInfo *v9; // x3
  PlayMakerFSM_o *logic; // x0

  v6 = isLong;
  if ( (byte_4C4652D & 1) == 0 )
  {
    sub_1C37058(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C37058(&StringLiteral_3481/*"CLICK_SKILLICON"*/);
    byte_4C4652D = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_1C372A4(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0);
  this->fields.tmp_useSkill = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tmp_useSkill, (int32_t)v7, v8, v9);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = v6;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3481/*"CLICK_SKILLICON"*/, 0);
      return;
    }
LABEL_8:
    sub_1C372B4(logic);
  }
}


void BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46518 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5438/*"END_CLOSEALL"*/);
    byte_4C46518 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5438/*"END_CLOSEALL"*/, 0);
}


void BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46553 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46553 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4C4653C & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4653C = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46519 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46519 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4C46515 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46515 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compCloseSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4C4651D & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4651D = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46550 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46550 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenItemListWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4655F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4655F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46517 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46517 = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 2, v2);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4C4653A & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4653A = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4C46513 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46513 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4651B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C4651B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        BattlePerformanceMaster_MasterBuffEffectData_o *closeBuffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectTween; // x22
  bool v8; // w0
  UnityEngine_Behaviour_o *perf; // x0

  if ( (byte_4C4655C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4655C = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(effectTween, 0, 0);
  if ( !closeBuffData && v8 )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !perf )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(perf, 0, 0);
  }
  if ( closeBuffData )
  {
    this->fields.isMasterBuffEffectPlaying = 0;
  }
  else
  {
    closeBuffData = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_1C372A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    System_Object___ctor((Il2CppObject *)closeBuffData, 0);
    perf = (UnityEngine_Behaviour_o *)this->fields.perf;
    if ( !perf )
      goto LABEL_26;
    perf = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)perf, 0);
    if ( !closeBuffData )
      goto LABEL_26;
    closeBuffData->fields.isRootActive = (unsigned __int8)perf & 1;
    *(_WORD *)&closeBuffData->fields.isMenuBtnActive = 257;
    closeBuffData->fields.isSkillBtnActive = 1;
  }
  perf = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isMenuBtnActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSpellBtnActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.skillBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSkillBtnActive, 0);
  perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isRootActive, 0);
  if ( !widget )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_26;
    widget = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)perf,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
LABEL_26:
    sub_1C372B4(perf);
  }
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4655D & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_TypeInfo);
    byte_4C4655D = 1;
  }
  v3 = sub_1C372A4(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceMaster__endSelectSvtError(BattlePerformanceMaster_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C46538 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46538 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.perf) == 0) )
    sub_1C372B4(Instance);
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0);
}


void BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46544 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12346/*"START_TAC"*/);
    byte_4C46544 = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12346/*"START_TAC"*/, 0);
}


void BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_1C372B4(0);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C46506 & 1) == 0 )
  {
    sub_1C37058(&ExtraBattleUserInterfaceController_TypeInfo);
    byte_4C46506 = 1;
  }
  result = this->fields.exUiController;
  if ( !result )
  {
    data = this->fields.data;
    v5 = (ExtraBattleUserInterfaceController_o *)sub_1C372A4(ExtraBattleUserInterfaceController_TypeInfo);
    ExtraBattleUserInterfaceController___ctor(v5, (IBattlePerformanceExtraUiParent_o *)this, data, 0);
    this->fields.exUiController = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.exUiController, (int32_t)v5, v6, v7);
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
  if ( !*(_QWORD *)&data->fields.limitAct )
  {
LABEL_5:
    data = (BattleData_o *)this->fields.win_EnemyConf;
    if ( data )
      return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0);
LABEL_7:
    sub_1C372B4(data);
  }
  return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0);
}


bool BattlePerformanceMaster__isWinMenuWindowOpenOrOpening(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *win_Menu; // x0

  win_Menu = (BattleWindowComponent_o *)this->fields.win_Menu;
  if ( !win_Menu )
    sub_1C372B4(0);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0);
}


bool BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_1C372B4(0);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0);
}


void BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 data; // x0
  struct BattleData_o *v4; // x8
  int32_t v5; // w20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v10; // x9
  struct BattleData_o *v11; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w26
  int max_length; // w8
  __int64 v16; // x22
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
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
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x1
  Il2CppClass **v42; // x0
  System_Object_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct BattleData_o *v46; // x8
  struct BattleData_o *v47; // x8
  struct BattleData_o *v48; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v50; // x1
  int32_t v51; // w20
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  struct BattleData_o *v54; // x8
  int32_t masterChangedFaceId; // w8
  int32_t v56; // w8
  struct BattleData_o *v57; // x8
  const MethodInfo *v58; // x1
  char v59; // [xsp+8h] [xbp-88h]
  int32_t overwriteImageId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46508 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C37058(&StringLiteral_23524/*"skill_partition"*/);
    sub_1C37058(&StringLiteral_19659/*"frame_master_bg_disable"*/);
    byte_4C46508 = 1;
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
  v54 = this->fields.data;
  if ( !v54 )
    goto LABEL_102;
  masterChangedFaceId = v54->fields.masterChangedFaceId;
  if ( masterChangedFaceId )
  {
    overwriteImageId = masterChangedFaceId;
    data = (__int64)this->fields.userGrade;
    if ( !data )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
  }
  v56 = overwriteImageId;
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
    v56 = overwriteImageId;
  }
  if ( v56 == -1 )
  {
LABEL_11:
    data = (__int64)this->fields.master_root;
    if ( !data )
      goto LABEL_102;
    data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)data,
                      (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_102;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19659/*"frame_master_bg_disable"*/, 0);
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
    v57 = this->fields.data;
    if ( !v57 )
      goto LABEL_102;
    MasterFaceManager__CreatePrefab_40670548(
      this->fields.face_root,
      1,
      v57->fields.battleGenderType,
      v5,
      2,
      0,
      overwriteImageId,
      0);
    BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v58);
  }
LABEL_14:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_102;
  v10 = perf->fields.data;
  if ( !v10 )
    goto LABEL_102;
  if ( v10->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, v6);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_102;
  }
  v11 = perf->fields.data;
  if ( !v11 )
    goto LABEL_102;
  masterSkillInfo = v11->fields.masterSkillInfo;
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
      v16 = 0;
      do
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1C372BC(data);
        data = (__int64)skillIcon->m_Items[v16];
        if ( !data )
          goto LABEL_102;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(gameObject, 0);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v16 < max_length );
    }
    this->fields.skillIcon = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillIcon, 0, v7, v8);
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
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v21 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  if ( size >= 1 )
  {
    v59 = 0;
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
      data = (__int64)UnityEngine_Object__Instantiate_object__51855596(
                        skillIconPrefab,
                        transform,
                        (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_102;
      v26 = (UnityEngine_Component_o *)data;
      data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
      v27 = (UnityEngine_Transform_o *)data;
      if ( !byte_4C3C926 )
      {
        data = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v27 )
        goto LABEL_102;
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      data = (__int64)UnityEngine_Component__get_transform(v26, 0);
      v28 = (UnityEngine_Transform_o *)data;
      if ( !byte_4C3C921 )
      {
        data = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
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
                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !data )
        goto LABEL_102;
      v32 = x + (float)(skillIconOffset * (float)(size + v23));
      if ( *(_BYTE *)(data + 84) )
      {
        v33 = v26;
        v34 = this->fields.data;
        if ( !v34 )
          goto LABEL_102;
        if ( !v34->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v59 & 1) == 0 )
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
            AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_23524/*"skill_partition"*/, 0);
          }
          v26 = v33;
          v59 = 1;
          v32 = v32 - this->fields.skillIconSplitSpace;
        }
      }
      data = (__int64)UnityEngine_Component__get_transform(v26, 0);
      if ( !data )
        goto LABEL_102;
      v62.fields.x = v32;
      v62.fields.y = y;
      v62.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v62, 0);
      data = (__int64)UnityEngine_Component__GetComponent_object_(
                        v26,
                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v21 )
        goto LABEL_102;
      items = v21->fields._items;
      v39 = Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_102;
      v40 = v21->fields._size;
      v41 = data;
      if ( (unsigned int)v40 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)data,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + v40;
        v21->fields._size = v40 + 1;
        v42[4] = (Il2CppClass *)v41;
        sub_1C36FFC((CGThumbnailListItem_o *)(v42 + 4), v41, v36, v37);
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
  v43 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = (struct BattleServantSkillIConComponent_array *)v43;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillIcon, (int32_t)v43, v44, v45);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data || (data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0)) == 0 )
LABEL_102:
    sub_1C372B4(data);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
LABEL_74:
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_102;
  data = (__int64)v46->fields.questphase_ent;
  if ( !data )
    goto LABEL_102;
  data = QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0);
  v47 = this->fields.data;
  this->fields.iconItemNumberDispType = data;
  if ( !v47 )
    goto LABEL_102;
  data = (__int64)v47->fields.questphase_ent;
  if ( !data )
    goto LABEL_102;
  data = QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0);
  v48 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = data;
  if ( !v48 )
    goto LABEL_102;
  data = (__int64)v48->fields.questphase_ent;
  if ( !data )
    goto LABEL_102;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0);
  if ( BattleItemObjectId >= 1 )
  {
    v51 = BattleItemObjectId;
    data = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_102;
    BattleItemData__SetItemId((BattleItemData_o *)data, v51, 0);
    BattlePerformanceMaster__InitializeBattleItem(this, v51, v52);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v50);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v53);
  data = (__int64)this->fields.master_root;
  if ( !data )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
}


void BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v8; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x0
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4C4654A & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4654A = 1;
  }
  v3 = sub_1C372A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterBuffEffectDataClose, v3, v4, v5);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0, 0, v6);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(master_root, 0, 0);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_21;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, 0);
  BattlePerformanceMaster__procCloseSkill(this, v8);
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
    sub_1C372B4(master_root);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.fields)(
    master_root,
    0,
    master_root->klass[1]._1.events);
}


void BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C46511 & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    byte_4C46511 = 1;
  }
  v3 = sub_1C372A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterBuffEffectDataClose, v3, v4, v5);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0, 0, v6);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, 0),
        BattlePerformanceMaster__updateSkillIcon(this, v8),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C372B4(master_root);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
}


void BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_4C46559 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3469/*"CLICK_MENU"*/);
    byte_4C46559 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_1C372B4(perf);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3469/*"CLICK_MENU"*/, 0);
      return;
    }
    goto LABEL_10;
  }
}


void BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46534 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3279/*"CANCEL"*/);
    byte_4C46534 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3279/*"CANCEL"*/, 0);
}


void BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46533 & 1) == 0 )
  {
    sub_1C37058(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C37058(&StringLiteral_9622/*"OK"*/);
    byte_4C46533 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C372A4(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0);
  this->fields.useSkillObject = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.useSkillObject, (int32_t)v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9622/*"OK"*/, 0);
}


void BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v5; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C46558 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_onClickSpellButton__);
    sub_1C37058(&StringLiteral_3483/*"CLICK_SPELL"*/);
    byte_4C46558 = 1;
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3483/*"CLICK_SPELL"*/, 0);
          return;
        }
      }
LABEL_21:
      sub_1C372B4(perf);
    }
  }
LABEL_16:
  v6 = Method_BattlePerformanceMaster_onClickSpellButton__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_onClickSpellButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_onClickSpellButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
}


void BattlePerformanceMaster__onCloseEnemyServantConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46551 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3503/*"CLOSE_CONF"*/);
    byte_4C46551 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3503/*"CLOSE_CONF"*/, 0);
}


void BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleSelectServantWindow_o *v8; // x0
  struct BattleSelectServantWindow_o *v9; // x21
  BattleSelectServantWindow_SelectServantCallBack_o *v10; // x22
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v15; // x21
  BattleServantData_array *FieldPlayerServantList; // x0

  if ( (byte_4C46521 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_selectedSvt__);
    sub_1C37058(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4C46521 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_1C372B4(0);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectSvtWindow, (int32_t)SelectSvtWindow, v6, v7);
  v8 = this->fields.selectSvtWindow;
  if ( !v8 )
    sub_1C372B4(0);
  BattleSelectServantWindow__setUseClose(v8, 1, 0);
  v9 = *p_selectSvtWindow;
  v10 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C372A4(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0);
  if ( !v9 )
    sub_1C372B4(v11);
  v9->fields.selectCallBack = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.selectCallBack, (int32_t)v10, v12, v13);
  data = this->fields.data;
  if ( !data )
    sub_1C372B4(0);
  v15 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0);
  if ( !v15 )
    sub_1C372B4(FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v15,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0);
  if ( !*p_selectSvtWindow )
    sub_1C372B4(0);
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
  const MethodInfo *v7; // x3
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleData_o *v14; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  NotificationDialog_ClickDelegate_o *v18; // x23

  if ( (byte_4C46536 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_callBackSelectedMainSub__);
    sub_1C37058(&Method_BattlePerformanceMaster_endSelectSvtError__);
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_2870/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/);
    sub_1C37058(&StringLiteral_2871/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/);
    byte_4C46536 = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectMSWindow, (int32_t)SelectMainSubSvtWindow, v6, v7);
      selectMSWindow = this->fields.selectMSWindow;
      v9 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_1C372A4(BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v9,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v9;
        sub_1C36FFC((CGThumbnailListItem_o *)&selectMSWindow->fields.callBack, (int32_t)v9, v10, v11);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v14 = this->fields.data;
          *((_QWORD *)data + 19) = v14;
          sub_1C36FFC((CGThumbnailListItem_o *)(data + 152), (int32_t)v14, v12, v13);
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
    sub_1C372B4(data);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2871/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2870/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0);
  v18 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog_31210584(
    (CommonUI_o *)Instance,
    v16,
    v17,
    v18,
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
  const MethodInfo *v9; // x3
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleSelectServantWindow_o *v14; // x20

  if ( (byte_4C46532 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_selectedSkillSvt__);
    sub_1C37058(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4C46532 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillselectSvtWindow, (int32_t)SelectSvtWindow, v8, v9);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v11 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C372A4(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v11,
        sub_1C36FFC((CGThumbnailListItem_o *)&skillselectSvtWindow->fields.selectCallBack, (int32_t)v11, v12, v13),
        (perf = (BattlePerformance_o *)this->fields.data) == 0)
    || (v14 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0),
        !v14)
    || (BattleSelectServantWindow__SetServantData(v14, (BattleServantData_array *)perf, skillInfo, -1, 0, 0),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0) )
  {
LABEL_10:
    sub_1C372B4(perf);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.generic_class)(
    perf,
    0,
    perf->klass[1]._1.typeMetadataHandle);
}


void BattlePerformanceMaster__procCloseAll(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // x0
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4C46548 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compCloseALL__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46548 = 1;
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
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseALL__, 0);
  if ( !win_Skill )
    goto LABEL_23;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))win_Skill->klass->vtable._12_Close.methodPtr)(
    win_Skill,
    v6,
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
    sub_1C372B4(win_Menu);
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

  if ( (byte_4C4652B & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__);
    sub_1C37058(&Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C4652B = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseBoostSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseBoostSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0);
  if ( !boostSkillConfWindow )
    sub_1C372B4(v7);
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

  if ( (byte_4C4651E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3520/*"CLOSE_SPELL"*/);
    byte_4C4651E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3520/*"CLOSE_SPELL"*/, 0);
}


void BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4C46552 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compCloseEnemyConf__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46552 = 1;
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
    v5 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_1C372B4(data);
  }
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
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

  if ( (byte_4C4653B & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compCloseMenu__);
    sub_1C37058(&Method_BattlePerformanceMaster_procCloseMenuWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C4653B = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseMenuWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procCloseMenuWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  BattlePerformanceMaster__proclight(v5, this->fields.menuBtn, 0, v6);
  win_Menu = this->fields.win_Menu;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0);
  if ( !win_Menu )
    sub_1C372B4(v9);
  BattleMenuWindowComponent__Close(win_Menu, v8, 0);
}


void BattlePerformanceMaster__procCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0

  BattlePerformanceMaster__ProcLight(this, 0, v2);
  win_Skill = this->fields.win_Skill;
  if ( !win_Skill )
    sub_1C372B4(0);
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

  if ( (byte_4C46526 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_CloseSkillConfComp__);
    sub_1C37058(&Method_BattlePerformanceMaster_procCloseSkillConf__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46526 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procCloseSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  skillConfWindow = this->fields.skillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_CloseSkillConfComp__, 0);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))skillConfWindow->klass->vtable._12_Close.methodPtr)(
          skillConfWindow,
          v6,
          skillConfWindow->klass->vtable._12_Close.method),
        (perf = this->fields.perf) == 0) )
  {
    sub_1C372B4(perf);
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

  if ( (byte_4C46514 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compCloseSkillWindow__);
    sub_1C37058(&Method_BattlePerformanceMaster_procCloseSkillWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46514 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procCloseSkillWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  BattlePerformanceMaster__proclight(v5, this->fields.skillBtn, 0, v6);
  win_Skill = this->fields.win_Skill;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0);
  if ( !win_Skill )
    sub_1C372B4(v9);
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

  if ( (byte_4C4651C & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compCloseSpellWindow__);
    sub_1C37058(&Method_BattlePerformanceMaster_procCloseSpellWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C4651C = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSpellWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procCloseSpellWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  win_Spell = this->fields.win_Spell;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0);
  if ( !win_Spell )
    sub_1C372B4(v7);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct BattleSkillConfComponent_o *v8; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4C46529 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46529 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1C36FFC((CGThumbnailListItem_o *)&boostSkillConfWindow->fields.target, (int32_t)gameObject, v6, v7),
        !tmp_useSkill)
    || (gameObject = this->fields.boostSkillConfWindow) == 0
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0),
        v8 = this->fields.boostSkillConfWindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0),
        !v8) )
  {
    sub_1C372B4(gameObject);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v8->klass->vtable._10_Open.methodPtr)(
    v8,
    v9,
    v8->klass->vtable._10_Open.method);
}


void BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v4; // x20
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4C4654F & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compOpenEnemyConf__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C4654F = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
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
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_compOpenEnemyConf__, 0);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_1C372B4(perf);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v6, 0);
}


void BattlePerformanceMaster__procOpenItemListWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformance_o *perf; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4C4655E & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compOpenItemListWindow__);
    sub_1C37058(&Method_BattlePerformanceMaster_procOpenItemListWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C4655E = 1;
  }
  BattlePerformanceMaster__ProcLight(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
  v5 = Method_BattlePerformanceMaster_procOpenItemListWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenItemListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procOpenItemListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0, 0);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
          perf,
          0,
          perf->klass[1]._1.events),
        itemListWindow = this->fields.itemListWindow,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0),
        !itemListWindow) )
  {
LABEL_10:
    sub_1C372B4(perf);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v8, 0);
}


void BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C46516 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_procOpenMasterMenu__);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C46516 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
  v4 = Method_BattlePerformanceMaster_procOpenMasterMenu__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMasterMenu__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procOpenMasterMenu__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_9:
    sub_1C372B4(perf);
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

  if ( (byte_4C46539 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compOpenMenu__);
    sub_1C37058(&Method_BattlePerformanceMaster_procOpenMenuWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C46539 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
  v4 = Method_BattlePerformanceMaster_procOpenMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMenuWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procOpenMenuWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__ProcLight(this, 1, v6);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
          perf,
          0,
          perf->klass[1]._1.events),
        win_Menu = this->fields.win_Menu,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceMaster_compOpenMenu__, 0),
        !win_Menu) )
  {
LABEL_10:
    sub_1C372B4(perf);
  }
  BattleMenuWindowComponent__Open(win_Menu, v8, 0);
}


void BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct BattleSkillConfComponent_o *v8; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4C46524 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_OpenSkillConfComplete__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C46524 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1C36FFC((CGThumbnailListItem_o *)&skillConfWindow->fields.target, (int32_t)gameObject, v6, v7),
        !tmp_useSkill)
    || (gameObject = this->fields.skillConfWindow) == 0
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0),
        v8 = this->fields.skillConfWindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0),
        !v8) )
  {
    sub_1C372B4(gameObject);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v8->klass->vtable._10_Open.methodPtr)(
    v8,
    v9,
    v8->klass->vtable._10_Open.method);
}


void BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4C46512 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compOpenSkillWindow__);
    sub_1C37058(&Method_BattlePerformanceMaster_procOpenSkillWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C46512 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
  v4 = Method_BattlePerformanceMaster_procOpenSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSkillWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procOpenSkillWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  BattlePerformanceMaster__ProcLight(this, 2, v6);
  win_Skill = this->fields.win_Skill;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0);
  if ( !win_Skill )
LABEL_9:
    sub_1C372B4(perf);
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

  if ( (byte_4C4651A & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_compOpenSpellWindow__);
    sub_1C37058(&Method_BattlePerformanceMaster_procOpenSpellWindow__);
    sub_1C37058(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C37058(&StringLiteral_12313/*"START_CLOSE"*/);
    byte_4C4651A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag((BattlePerformance_o *)perf, 0, 0);
  v4 = Method_BattlePerformanceMaster_procOpenSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSpellWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_procOpenSpellWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0);
  perf = this->fields.otherFsm;
  if ( !perf )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12313/*"START_CLOSE"*/, 0);
  BattlePerformanceMaster__ProcLight(this, 0, v6);
  perf = this->fields.data;
  if ( !perf )
    goto LABEL_12;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell
    || (win_Spell->fields.temporarySpell = *((_DWORD *)perf + 212),
        win_Spell->fields.isUseTemporarySpell = BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0),
        v8 = this->fields.win_Spell,
        v9 = (BattleWindowComponent_EndCall_o *)sub_1C372A4(BattleWindowComponent_EndCall_TypeInfo),
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
    sub_1C372B4(perf);
  }
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)perf + 504LL))(
    perf,
    0,
    *(_QWORD *)(*(_QWORD *)perf + 512LL));
}


void BattlePerformanceMaster__procUseCommandSpell(
        BattlePerformanceMaster_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4651F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3495/*"CLICK_USESPELL"*/);
    byte_4C4651F = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3495/*"CLICK_USESPELL"*/, 0);
}


void BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20

  if ( (byte_4C4654B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4654B = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C372B4(this);
  }
}


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
  System_Action_o *_9__147_0; // x23
  System_String_o *v14; // x22
  Il2CppObject *v15; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C46535 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__147_0__);
    sub_1C37058(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2795/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4C46535 = 1;
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
    skillselectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_28;
    skillselectSvtWindow = DataManager__GetMasterData_object_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
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
                             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_28;
    v9 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0);
    if ( !skillselectSvtWindow || !v9 )
      goto LABEL_28;
    if ( SkillEntity__checkUseTreasure(v9, *((_DWORD *)skillselectSvtWindow + 87), 0) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0);
          return;
        }
      }
LABEL_28:
      sub_1C372B4(skillselectSvtWindow);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2795/*"BATTLE_INVALID_SELECT_TARGET"*/, 0);
    v11 = (System_String_o *)skillselectSvtWindow;
    v12 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v12 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__147_0 = v12->static_fields->__9__147_0;
    v14 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__147_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattlePerformanceMaster___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__147_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__147_0, v15, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__147_0__, 0);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__147_0 = _9__147_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__147_0, (int32_t)_9__147_0, v17, v18);
    }
    if ( !Instance )
      goto LABEL_28;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v14, v11, _9__147_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
  }
  skillselectSvtWindow = this->fields.perf;
  if ( !skillselectSvtWindow )
    goto LABEL_28;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)skillselectSvtWindow,
    this->fields.myFsm,
    0);
}


void BattlePerformanceMaster__selectedSvt(BattlePerformanceMaster_o *this, int32_t uniqueId, const MethodInfo *method)
{
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v6; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  BattlePerformanceMaster___c_c *v9; // x8
  System_Action_o *_9__123_0; // x23
  System_String_o *v11; // x22
  Il2CppObject *v12; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C46522 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattlePerformanceMaster___c__selectedSvt_b__123_0__);
    sub_1C37058(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C37058(&StringLiteral_3279/*"CANCEL"*/);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2795/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4C46522 = 1;
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
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_27;
    v6 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0);
    if ( !selectSvtWindow || !v6 )
      goto LABEL_27;
    if ( CommandSpellEntity__checkUseTreasure(v6, *((_DWORD *)selectSvtWindow + 87), 0) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0);
          return;
        }
      }
LABEL_27:
      sub_1C372B4(selectSvtWindow);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2795/*"BATTLE_INVALID_SELECT_TARGET"*/, 0);
    v8 = (System_String_o *)selectSvtWindow;
    v9 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v9 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__123_0 = v9->static_fields->__9__123_0;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__123_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattlePerformanceMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__123_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__123_0, v12, Method_BattlePerformanceMaster___c__selectedSvt_b__123_0__, 0);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__123_0 = _9__123_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v14, v15);
    }
    if ( !Instance )
      goto LABEL_27;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v8, _9__123_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
  }
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_3279/*"CANCEL"*/, 0);
}


void BattlePerformanceMaster__set_IsNoblePhantasm(
        BattlePerformanceMaster_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNoblePhantasm_k__BackingField = value;
}


void BattlePerformanceMaster__showEnemyServant(
        BattlePerformanceMaster_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4654E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8329/*"LONGPRESS_ENEMY"*/);
    byte_4C4654E = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8329/*"LONGPRESS_ENEMY"*/, 0);
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

  if ( (byte_4C46545 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_showRetireDialog__);
    byte_4C46545 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_19;
  BattleLogic__playRetire(logic, 0);
  v4 = Method_BattlePerformanceMaster_showRetireDialog__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_showRetireDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
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
    sub_1C372B4(logic);
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
      v10 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster_showRetireDialog__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C3703C(v10, v10[4]);
    OverwriteAssetSoundName__PlayCommonSe(v11, 3, 0, 0);
    v13 = BattlePerformanceMaster__OpenRetireDialog(this, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
}


void BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46549 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12314/*"START_COM"*/);
    byte_4C46549 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12314/*"START_COM"*/, 0);
}


float BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 delayAfterNoblePhantasmBuffData; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject **v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  float v14; // s8
  Il2CppObject *v15; // x1
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  UnityEngine_Object_o *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x24
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Transform_o *v39; // x24
  BattleUIRangeLabel_o *v40; // x24
  BattleServantBuffIconComponent_o *v41; // x24
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  TrackingMoveCtCComponent_o *v45; // x23
  __int64 v46; // x23
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Collections_Generic_List_GameObject__o *masterBuffEffectObjectList; // x8
  int32_t size; // w2
  int v51; // w9
  __int64 v52; // x8
  System_Collections_Generic_IEnumerable_T__o *v53; // x23
  System_Action_int__o *v54; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  Il2CppObject *v57; // x8
  struct UnityEngine_Coroutine_o *v58; // x8
  const MethodInfo *v59; // x1
  System_Collections_IEnumerator_o *v60; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v65; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  UITweener_o *v71; // x19
  EventDelegate_Callback_o *v72; // x21
  int klass_high; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4655A & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_int___);
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__0__);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__1__);
    sub_1C37058(&BattlePerformanceMaster___c__DisplayClass191_0_TypeInfo);
    sub_1C37058(&StringLiteral_18908/*"effect/ef_poplabel{0:00}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4655A = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceMaster___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_80;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 32) = masterBuffData;
  v9 = (Il2CppObject **)(v5 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)masterBuffData, v10, v11);
  delayAfterNoblePhantasmBuffData = *(_QWORD *)(v5 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  v14 = 0.0;
  if ( !BattleActionData_MasterBuffData__IsEffectEnable(
          (BattleActionData_MasterBuffData_o *)delayAfterNoblePhantasmBuffData,
          0) )
    return v14;
  if ( this->fields._IsNoblePhantasm_k__BackingField )
  {
    delayAfterNoblePhantasmBuffData = (__int64)this->fields.delayAfterNoblePhantasmBuffData;
    if ( delayAfterNoblePhantasmBuffData )
    {
      v15 = *v9;
      v16 = *(_QWORD *)(delayAfterNoblePhantasmBuffData + 16);
      v17 = Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__;
      ++*(_DWORD *)(delayAfterNoblePhantasmBuffData + 28);
      if ( v16 )
      {
        v18 = *(int *)(delayAfterNoblePhantasmBuffData + 24);
        if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)delayAfterNoblePhantasmBuffData,
            v15,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * v18;
          *(_DWORD *)(delayAfterNoblePhantasmBuffData + 24) = v18 + 1;
          *(_QWORD *)(v19 + 32) = v15;
          sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v15, v12, v13);
        }
        return v14;
      }
    }
    goto LABEL_80;
  }
  delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    masterBuffPopLabelEffect = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_masterBuffPopLabelEffect = &this->fields.masterBuffPopLabelEffect;
    delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(masterBuffPopLabelEffect, 0, 0);
    if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
    {
      v29 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v29, 0);
      *p_masterBuffPopLabelEffect = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterBuffPopLabelEffect, 0, v30, v31);
    }
    if ( *v9 )
    {
      klass_high = HIDWORD((*v9)[4].klass);
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v23, v24, v25, v26, v27, v28);
      v33 = System_String__Format((System_String_o *)StringLiteral_18908/*"effect/ef_poplabel{0:00}"*/, v32, 0);
      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Resources__Load_object_(
                                                   v33,
                                                   (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( this->fields.masterBtn )
      {
        v34 = (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData;
        transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v34, transform, 0, 0);
        this->fields.masterBuffPopLabelEffect = Object;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterBuffPopLabelEffect, (int32_t)Object, v37, v38);
        delayAfterNoblePhantasmBuffData = (__int64)this->fields.masterBuffPopLabelEffect;
        if ( delayAfterNoblePhantasmBuffData )
        {
          delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                       0);
          if ( delayAfterNoblePhantasmBuffData )
          {
            v74.fields.x = 0.0;
            v74.fields.z = 0.0;
            v74.fields.y = -42.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, v74, 0);
            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
            if ( *p_masterBuffPopLabelEffect )
            {
              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                           0);
              if ( this->fields.master_root )
              {
                v39 = (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData;
                delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                             this->fields.master_root,
                                                             0);
                if ( delayAfterNoblePhantasmBuffData )
                {
                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                                                               0);
                  if ( v39 )
                  {
                    UnityEngine_Transform__set_parent(
                      v39,
                      (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                      0);
                    delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                    if ( *p_masterBuffPopLabelEffect )
                    {
                      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
                      if ( delayAfterNoblePhantasmBuffData )
                      {
                        v40 = (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData;
                        BattleUIRangeLabel__ParentHasChanged(
                          (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData,
                          0,
                          0);
                        if ( *v9 )
                        {
                          BattleUIRangeLabel__SetAdjustLabelOffset(
                            v40,
                            (System_String_o *)(*v9)[3].monitor,
                            (System_String_o *)StringLiteral_1/*""*/,
                            1,
                            0,
                            0,
                            0,
                            0,
                            0);
                          BattleUIRangeLabel__AddLabelDepth(v40, 20, 0);
                          if ( *v9 )
                          {
                            BattleUIRangeLabel__CondensedScaleLabel(
                              v40,
                              (int32_t)(*v9)[14].monitor,
                              HIDWORD((*v9)[14].monitor),
                              0);
                            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                            if ( *p_masterBuffPopLabelEffect )
                            {
                              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponentInChildren_object__51639680(
                                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                           1,
                                                                           (const MethodInfo_313F580 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
                              if ( delayAfterNoblePhantasmBuffData )
                              {
                                v41 = (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData;
                                BattleServantBuffIconComponent__ParentHasChanged(
                                  (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData,
                                  0);
                                BattleServantBuffIconComponent__setImageId(v41, 0, 0);
                                delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                                if ( *p_masterBuffPopLabelEffect )
                                {
                                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
                                  perf = this->fields.perf;
                                  if ( perf )
                                  {
                                    actorcamera = perf->fields.actorcamera;
                                    uicamera = perf->fields.uicamera;
                                    v45 = (TrackingMoveCtCComponent_o *)delayAfterNoblePhantasmBuffData;
                                    if ( !byte_4C3C921 )
                                    {
                                      delayAfterNoblePhantasmBuffData = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                                      byte_4C3C921 = 1;
                                    }
                                    if ( v45 )
                                    {
                                      TrackingMoveCtCComponent__Set(
                                        v45,
                                        actorcamera,
                                        uicamera,
                                        0,
                                        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                                        0,
                                        0);
                                      TrackingMoveCtCComponent__startAct(v45, 0);
                                      if ( !this->fields.isMasterBuffEffectPlaying )
                                      {
                                        v46 = sub_1C372A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
                                        System_Object___ctor((Il2CppObject *)v46, 0);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        delayAfterNoblePhantasmBuffData = UnityEngine_GameObject__get_activeSelf(
                                                                            (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                            0);
                                        if ( !v46 )
                                          goto LABEL_80;
                                        *(_BYTE *)(v46 + 16) = delayAfterNoblePhantasmBuffData & 1;
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v46 + 17) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v46 + 18) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v46 + 19) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0);
                                        this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v46;
                                        sub_1C36FFC(
                                          (CGThumbnailListItem_o *)&this->fields.masterBuffEffectDataClose,
                                          v46,
                                          v47,
                                          v48);
                                      }
                                      masterBuffEffectObjectList = this->fields.masterBuffEffectObjectList;
                                      if ( masterBuffEffectObjectList )
                                      {
                                        size = masterBuffEffectObjectList->fields._size;
                                        v51 = masterBuffEffectObjectList->fields._version + 1;
                                        masterBuffEffectObjectList->fields._size = 0;
                                        masterBuffEffectObjectList->fields._version = v51;
                                        if ( size >= 1 )
                                          System_Array__Clear(
                                            (System_Array_o *)masterBuffEffectObjectList->fields._items,
                                            0,
                                            size,
                                            0);
                                        v52 = *(_QWORD *)(v5 + 32);
                                        *(_DWORD *)(v5 + 24) = 1065353216;
                                        if ( v52 )
                                        {
                                          v53 = *(System_Collections_Generic_IEnumerable_T__o **)(v52 + 72);
                                          v54 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v54,
                                            (Il2CppObject *)v5,
                                            (intptr_t)Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__0__,
                                            0);
                                          BasicHelper__ForEach_int_(
                                            v53,
                                            (System_Action_T__o *)v54,
                                            (const MethodInfo_30D2FE8 *)Method_BasicHelper_ForEach_int___);
                                          masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
                                          if ( masterBuffEffectDataClose )
                                          {
                                            if ( masterBuffEffectDataClose->fields.isRootActive )
                                              return *(float *)(v5 + 24);
                                            v57 = *v9;
                                            if ( !*v9 )
                                              goto LABEL_80;
                                            if ( !LOBYTE(v57[15].klass) )
                                            {
                                              if ( BYTE1(v57[15].klass) )
                                              {
                                                masterIconFadeCoroutine = this->fields.masterIconFadeCoroutine;
                                                if ( masterIconFadeCoroutine )
                                                  UnityEngine_MonoBehaviour__StopCoroutine_71252944(
                                                    (UnityEngine_MonoBehaviour_o *)this,
                                                    masterIconFadeCoroutine,
                                                    0);
                                                v65 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                        this,
                                                        *(float *)(v5 + 24),
                                                        (const MethodInfo *)masterIconFadeCoroutine);
                                                UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                                  (UnityEngine_MonoBehaviour_o *)this,
                                                  v65,
                                                  0);
                                              }
                                              return *(float *)(v5 + 24);
                                            }
                                            v58 = this->fields.masterIconFadeCoroutine;
                                            this->fields.isMasterBuffEffectPlaying = 1;
                                            if ( v58 )
                                            {
                                              if ( !Component_object )
                                                goto LABEL_80;
                                              ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
                                                Component_object,
                                                Component_object->klass->vtable[8].method,
                                                1.0);
                                              UnityEngine_MonoBehaviour__StopCoroutine_71252944(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                this->fields.masterIconFadeCoroutine,
                                                0);
                                              v60 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                      this,
                                                      *(float *)(v5 + 24),
                                                      v59);
                                              started = UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                                          (UnityEngine_MonoBehaviour_o *)this,
                                                          v60,
                                                          0);
                                              this->fields.masterIconFadeCoroutine = started;
                                              sub_1C36FFC(
                                                (CGThumbnailListItem_o *)&this->fields.masterIconFadeCoroutine,
                                                (int32_t)started,
                                                v62,
                                                v63);
                                              return *(float *)(v5 + 24);
                                            }
                                            effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                            p_effectTween = &this->fields.effectTween;
                                            delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(
                                                                                effectTween,
                                                                                0,
                                                                                0);
                                            if ( (delayAfterNoblePhantasmBuffData & 1) == 0 )
                                              goto LABEL_72;
                                            delayAfterNoblePhantasmBuffData = (__int64)*p_effectTween;
                                            if ( !*p_effectTween )
                                              goto LABEL_80;
                                            delayAfterNoblePhantasmBuffData = UnityEngine_Behaviour__get_enabled(
                                                                                (UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData,
                                                                                0);
                                            if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
                                            {
                                              delayAfterNoblePhantasmBuffData = (__int64)*p_effectTween;
                                              if ( !*p_effectTween )
                                                goto LABEL_80;
                                              UnityEngine_Behaviour__set_enabled(
                                                (UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData,
                                                0,
                                                0);
                                            }
                                            else
                                            {
LABEL_72:
                                              if ( !Component_object )
                                                goto LABEL_80;
                                              ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
                                                Component_object,
                                                Component_object->klass->vtable[8].method,
                                                0.01);
                                            }
                                            delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
                                            if ( delayAfterNoblePhantasmBuffData )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                0,
                                                0);
                                              delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                                              if ( delayAfterNoblePhantasmBuffData )
                                              {
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                  0,
                                                  0);
                                                delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
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
                                                    v68 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0);
                                                    this->fields.effectTween = v68;
                                                    sub_1C36FFC(
                                                      (CGThumbnailListItem_o *)&this->fields.effectTween,
                                                      (int32_t)v68,
                                                      v69,
                                                      v70);
                                                    v71 = (UITweener_o *)this->fields.effectTween;
                                                    if ( v71 )
                                                    {
                                                      v71->fields.method = 6;
                                                      v72 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
                                                      EventDelegate_Callback___ctor(
                                                        v72,
                                                        (Il2CppObject *)v5,
                                                        Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__1__,
                                                        0);
                                                      UITweener__SetOnFinished(v71, v72, 0);
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
        }
      }
    }
LABEL_80:
    sub_1C372B4(delayAfterNoblePhantasmBuffData);
  }
  return v14;
}


void BattlePerformanceMaster__startSkill(BattlePerformanceMaster_o *this, int32_t type, const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_4C46543 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12340/*"START_SKILL"*/);
    byte_4C46543 = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.generic_class)(
          win_Spell,
          0,
          win_Spell->klass[1]._1.typeMetadataHandle),
        (win_Spell = this->fields.myFsm) == 0) )
  {
    sub_1C372B4(win_Spell);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12340/*"START_SKILL"*/, 0);
}


void BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46510 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12346/*"START_TAC"*/);
    byte_4C46510 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12346/*"START_TAC"*/, 0);
}


void BattlePerformanceMaster__updateCommandSpellIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  struct BattleData_o *v4; // x8
  UserGameEntity_o *SelfUserGame; // x20

  v2 = this;
  if ( (byte_4C4650D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&StringLiteral_19653/*"frame_cs_bg"*/);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_19654/*"frame_cs_bg_disable"*/);
    byte_4C4650D = 1;
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
                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19654/*"frame_cs_bg_disable"*/, 0);
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
    sub_1C372B4(this);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
  if ( !this )
    goto LABEL_21;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19653/*"frame_cs_bg"*/, 0);
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
  if ( (byte_4C4653E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C4653E = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skillSkipBtn) == 0 )
    sub_1C372B4(this);
  if ( data->fields.systemflg_skipskillconf )
    v4 = &StringLiteral_17506/*"btn_off"*/;
  else
    v4 = &StringLiteral_17507/*"btn_on"*/;
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
  const MethodInfo *v18; // x3
  BattlePerformanceMaster_o *v19; // x1
  BattlePerformanceMaster_c **v20; // x0
  struct BattleServantSkillIConComponent_array *v21; // x8
  int32_t ShortenMasterSkillValue; // w0
  UnityEngine_Object_o *skillBtnFlashObject; // x23
  int32_t v24; // w22
  BattlePerformanceMaster___c_c *v25; // x0
  System_Predicate_object__o *_9__101_0; // x24
  System_String_o *v27; // x23
  Il2CppObject *v28; // x25
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_array *All_object; // x0
  struct BattleData_o *data; // x8
  BattlePerformanceMaster_o *v34; // x21
  BattlePerformanceMaster_o *v35; // x23
  System_String_o *v36; // x1
  System_String_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  BattlePerformanceMaster_o *v45; // x23
  bool v46; // cc
  bool v47; // w22
  System_String_o *v48; // x1
  float v49; // s8
  BattlePerformanceMaster___c_c *v50; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  System_Predicate_object__o *_9__101_1; // x24
  System_String_o *v53; // x23
  Il2CppObject *v54; // x25
  struct BattlePerformanceMaster___c_StaticFields *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_String_array *v58; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  BattlePerformanceMaster_o *v60; // x20
  unsigned int localPosition; // s0
  unsigned int v62; // s9
  unsigned int v63; // s0
  float v64; // s1
  struct BattleData_o *v65; // x8
  struct BattleData_o *v66; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  int v71; // [xsp+8h] [xbp-78h] BYREF
  int v72; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C4650F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_FindAll_string___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_string__TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__101_0__);
    sub_1C37058(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__101_1__);
    sub_1C37058(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_2802/*"BATTLE_MASTER_SKILL_CHARGE"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_17498/*"btn_master_skill_disable"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2801/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_9267/*"NG"*/);
    byte_4C4650F = 1;
  }
  v72 = 0;
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)sub_1C37100(string___TypeInfo, LODWORD(skillIcon->max_length));
  v4 = v2->fields.skillIcon;
  if ( !v4 )
    goto LABEL_134;
  v5 = this;
  this = (BattlePerformanceMaster_o *)sub_1C37100(string___TypeInfo, LODWORD(v4->max_length));
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
      v72 = (int)this;
      if ( v15->fields.isAdd )
      {
        if ( (int)this <= 0 )
        {
          v19 = (BattlePerformanceMaster_o *)StringLiteral_861/*"-"*/;
          if ( !v7 )
            goto LABEL_134;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v72, 0);
          v19 = this;
          if ( !v7 )
            goto LABEL_134;
        }
        if ( (unsigned int)v11 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_135;
        v20 = &v7->klass + v11++;
      }
      else
      {
        if ( (int)this <= 0 )
        {
          v19 = (BattlePerformanceMaster_o *)StringLiteral_861/*"-"*/;
          if ( !v5 )
            goto LABEL_134;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v72, 0);
          v19 = this;
          if ( !v5 )
            goto LABEL_134;
        }
        if ( v10 >= LODWORD(v5->fields.m_CancellationTokenSource) )
          goto LABEL_135;
        v20 = &v5->klass + (int)v10++;
      }
      v20[4] = (BattlePerformanceMaster_c *)v19;
      sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v17, v18);
      v12 |= v72 > 0;
      v13 |= v15->fields.sealedTurn > 0;
    }
    v21 = v2->fields.skillIcon;
    if ( !v21 )
      goto LABEL_134;
    if ( (unsigned int)v8 >= LODWORD(v21->max_length) )
LABEL_135:
      sub_1C372BC(this);
    this = (BattlePerformanceMaster_o *)v21->m_Items[v8];
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
  v24 = ShortenMasterSkillValue;
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
    v25 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v25 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__101_0 = (System_Predicate_object__o *)v25->static_fields->__9__101_0;
    v27 = (System_String_o *)StringLiteral_1048/*"/"*/;
    if ( !_9__101_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = BattlePerformanceMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__101_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(_9__101_0, v28, Method_BattlePerformanceMaster___c__updateSkillIcon_b__101_0__, 0);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__101_0 = (struct System_Predicate_string__o *)_9__101_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__101_0, (int32_t)_9__101_0, v30, v31);
    }
    All_object = (System_String_array *)System_Array__FindAll_object_(
                                          (System_Object_array *)v5,
                                          (System_Predicate_T__o *)_9__101_0,
                                          (const MethodInfo_31ED2CC *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v27, All_object, 0);
    data = v2->fields.data;
    if ( !data )
      goto LABEL_134;
    v34 = this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0);
    if ( !v2->fields.masterSkillBadStatus )
      goto LABEL_134;
    v35 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillBadStatus, v13 & 1, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_134;
    if ( (v13 & 1) != 0 )
      v36 = (System_String_o *)v35;
    else
      v36 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v36, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2802/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0);
    v71 = v24 + 1;
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v38, v39, v40, v41, v42, v43);
    this = (BattlePerformanceMaster_o *)System_String__Format(v37, v44, 0);
    if ( !v2->fields.masterSkillChargeRoot )
      goto LABEL_134;
    v45 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillChargeRoot, v24 > 0, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_134;
    v46 = v24 <= 0;
    v47 = v24 > 0;
    v48 = v46 ? (System_String_o *)StringLiteral_1/*""*/ : (System_String_o *)v45;
    UILabel__set_text((UILabel_o *)this, v48, 0);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    v49 = ((v13 | v47) & 1) != 0 ? -58.0 : -38.0;
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
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v34, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_134;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v2->fields.chargeTimeRoot )
        goto LABEL_134;
      v60 = this;
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
      v50 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v2->fields.addSkillAddChargeTimeLabel;
      if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
        v50 = BattlePerformanceMaster___c_TypeInfo;
      }
      _9__101_1 = (System_Predicate_object__o *)v50->static_fields->__9__101_1;
      v53 = (System_String_o *)StringLiteral_1048/*"/"*/;
      if ( !_9__101_1 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = BattlePerformanceMaster___c_TypeInfo;
        }
        v54 = (Il2CppObject *)v50->static_fields->__9;
        _9__101_1 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_string__TypeInfo);
        System_Predicate_object____ctor(
          _9__101_1,
          v54,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__101_1__,
          0);
        v55 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v55->__9__101_1 = (struct System_Predicate_string__o *)_9__101_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v55->__9__101_1, (int32_t)_9__101_1, v56, v57);
      }
      v58 = (System_String_array *)System_Array__FindAll_object_(
                                     (System_Object_array *)v7,
                                     (System_Predicate_T__o *)_9__101_1,
                                     (const MethodInfo_31ED2CC *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v53, v58, 0);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_134;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0);
      addSkillAddChargeTimeSplitLabel = v2->fields.addSkillAddChargeTimeSplitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2801/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_134;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_134;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v34, 0);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_134;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v2->fields.addSkillChargeTimeRoot )
        goto LABEL_134;
      v60 = this;
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
    v62 = localPosition;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_134;
    v73 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !v60 )
      goto LABEL_134;
    v63 = v62;
    v64 = v49;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v60, v73, 0);
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
  v65 = v2->fields.data;
  if ( !v65 )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)v65->fields.quest_ent;
  if ( !this )
    goto LABEL_134;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v66 = v2->fields.data;
    if ( !v66 )
      goto LABEL_134;
    this = (BattlePerformanceMaster_o *)v66->fields.quest_ent;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17498/*"btn_master_skill_disable"*/, 0);
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
  if ( !this )
    goto LABEL_134;
  UISprite__set_atlas((UISprite_o *)this, v2->fields.battleUiAtlas, 0);
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtn;
  if ( !this )
    goto LABEL_134;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
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
    v70 = StringLiteral_9267/*"NG"*/;
    ComponentInChildren_object[2].monitor = (void *)StringLiteral_9267/*"NG"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&ComponentInChildren_object[2].monitor, v70, v68, v69);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
  if ( !this )
LABEL_134:
    sub_1C372B4(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4C46542 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C46542 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skipDeadBtn) == 0 )
    sub_1C372B4(this);
  if ( data->fields.systemflg_skipDead )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


void BattlePerformanceMaster__updateTdConstantVelocity(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4C46540 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C46540 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.tdConstBtn) == 0 )
    sub_1C372B4(this);
  if ( data->fields.systemflg_TdConstantvelocity )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4655B & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster__waitMasterBuffEffect_d__192_TypeInfo);
    byte_4C4655B = 1;
  }
  v5 = sub_1C372A4(BattlePerformanceMaster__waitMasterBuffEffect_d__192_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster_MasterBuffEffectData___ctor_47383260(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields = (BattlePerformanceMaster_MasterBuffEffectData_Fields)(16843009 * value);
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

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.extraLocalPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.extraLocalPosition.fields.z = z;
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    v3 = UnityEngine_Vector3_TypeInfo;
    byte_4C3C926 = 1;
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
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x20
  float *p_z; // x8
  struct UnityEngine_Vector3_o *p_extraLocalScale; // x9
  float *p_y; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4657A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4657A = 1;
  }
  targetTransform = (UnityEngine_Object_o *)this->fields.targetTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(targetTransform, 0, 0);
  if ( (v6 & 1) == 0 )
  {
    v7 = this->fields.targetTransform;
    if ( isExtra )
    {
      if ( v7 )
      {
        UnityEngine_Transform__set_localPosition(this->fields.targetTransform, this->fields.extraLocalPosition, 0);
        v8 = this->fields.targetTransform;
        if ( v8 )
        {
          p_z = &this->fields.extraLocalScale.fields.z;
          p_extraLocalScale = &this->fields.extraLocalScale;
          p_y = &this->fields.extraLocalScale.fields.y;
LABEL_17:
          v13.fields.z = *p_z;
          v13.fields.y = *p_y;
          v13.fields.x = p_extraLocalScale->fields.x;
          UnityEngine_Transform__set_localScale(v8, v13, 0);
          return;
        }
      }
    }
    else
    {
      if ( !byte_4C3C921 )
      {
        v6 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( v7 )
      {
        UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v8 = this->fields.targetTransform;
        if ( !byte_4C3C926 )
        {
          v6 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        if ( v8 )
        {
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          p_z = &static_fields->oneVector.fields.z;
          p_y = &static_fields->oneVector.fields.y;
          p_extraLocalScale = &static_fields->oneVector;
          goto LABEL_17;
        }
      }
    }
    sub_1C372B4(v6);
  }
}


void BattlePerformanceMaster__DelayEffect_d__209___ctor(
        BattlePerformanceMaster__DelayEffect_d__209_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__DelayEffect_d__209__MoveNext(
        BattlePerformanceMaster__DelayEffect_d__209_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  float v7; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool result; // w0
  int32_t id; // w20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x21
  _QWORD *v21; // x0
  struct EffectEntity_o *effectEnt_5__2; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4657F & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattlePerformanceMaster__DelayEffect_d__209_MoveNext__);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C37058(&StringLiteral_3084/*"Battle"*/);
    byte_4C4657F = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_36;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_36;
    v7 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v7 > 0.0 )
    {
      v8 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v8, v7, 0);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v8, v10, v11);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
    goto LABEL_36;
  v18 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v19 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !v19 )
    goto LABEL_36;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v18, 0);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v20 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0);
  if ( !Instance )
    goto LABEL_36;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  if ( !v20 )
    goto LABEL_36;
  v24.fields.z = localPosition.fields.z + this->fields.pos.fields.z;
  v24.fields.y = localPosition.fields.y + this->fields.pos.fields.y;
  v24.fields.x = localPosition.fields.x + this->fields.pos.fields.x;
  UnityEngine_Transform__set_localPosition(v20, v24, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v18, 0);
  if ( !Instance )
    goto LABEL_36;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v25, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v18, 0);
  if ( !Instance )
    goto LABEL_36;
  v26.fields.x = 1.0;
  v26.fields.y = 1.0;
  v26.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v26, 0);
  UnityEngine_GameObject__SetActive(v18, 1, 0);
  Instance = (DataManager_o *)this->fields._effectEnt_5__2;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v21 = Method_BattlePerformanceMaster__DelayEffect_d__209_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster__DelayEffect_d__209_MoveNext__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster__DelayEffect_d__209_MoveNext__);
    Instance = (DataManager_o *)sub_1C3703C(v21, v21[4]);
    effectEnt_5__2 = this->fields._effectEnt_5__2;
    if ( !effectEnt_5__2 )
      goto LABEL_36;
    Instance = (DataManager_o *)OverwriteAssetSoundName__PlaySe_41420232(
                                  (System_Reflection_MethodBase_o *)Instance,
                                  (System_String_o *)StringLiteral_3084/*"Battle"*/,
                                  effectEnt_5__2->fields.se,
                                  1.0,
                                  0,
                                  0,
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
          (Il2CppObject *)v18,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_36:
    sub_1C372B4(Instance);
  }
  return 0;
}


Il2CppObject *BattlePerformanceMaster__DelayEffect_d__209__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayEffect_d__209_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__DelayEffect_d__209__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayEffect_d__209_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattlePerformanceMaster__DelayEffect_d__209_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__DelayEffect_d__209__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayEffect_d__209_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__DelayEffect_d__209__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayEffect_d__209_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__DelayShowItem_d__212___ctor(
        BattlePerformanceMaster__DelayShowItem_d__212_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__DelayShowItem_d__212__MoveNext(
        BattlePerformanceMaster__DelayShowItem_d__212_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  UnityEngine_GameObject_o *obj; // x0

  if ( (byte_4C46580 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C46580 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = this->fields.obj;
    if ( !obj )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(obj, 1, 0);
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v7, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *BattlePerformanceMaster__DelayShowItem_d__212__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayShowItem_d__212_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__DelayShowItem_d__212__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayShowItem_d__212_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattlePerformanceMaster__DelayShowItem_d__212_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__DelayShowItem_d__212__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayShowItem_d__212_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__DelayShowItem_d__212__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayShowItem_d__212_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__OpenRetireDialog_d__165___ctor(
        BattlePerformanceMaster__OpenRetireDialog_d__165_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__OpenRetireDialog_d__165__MoveNext(
        BattlePerformanceMaster__OpenRetireDialog_d__165_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster__OpenRetireDialog_d__165_o *v4; // x19
  int32_t _1__state; // w8
  DefCoroutine_c *v6; // x0
  Il2CppObject *milliSecSeven; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v12; // x21

  v4 = this;
  if ( (byte_4C46581 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_OnRetireDialog__);
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    this = (BattlePerformanceMaster__OpenRetireDialog_d__165_o *)sub_1C37058(&DefCoroutine_TypeInfo);
    byte_4C46581 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (logic = _4__this->fields.logic,
          v12 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo),
          NotificationDialog_ClickDelegate___ctor(
            v12,
            (Il2CppObject *)_4__this,
            Method_BattlePerformanceMaster_OnRetireDialog__,
            0),
          !logic)
      || (BattleLogic__OpenBattleLoseDlg(logic, 1, 1, v12, 0, 0),
          (this = (BattlePerformanceMaster__OpenRetireDialog_d__165_o *)_4__this->fields.perf) == 0) )
    {
      sub_1C372B4(this);
    }
    BattlePerformance__SetScreenEffectMode((BattlePerformance_o *)this, 0, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v6 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v6 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (Il2CppObject *)v6->static_fields->milliSecSeven;
  v4->fields.__2__current = milliSecSeven;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C36FFC(p__2__current, (int32_t)milliSecSeven, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattlePerformanceMaster__OpenRetireDialog_d__165__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__OpenRetireDialog_d__165_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__OpenRetireDialog_d__165__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__OpenRetireDialog_d__165_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattlePerformanceMaster__OpenRetireDialog_d__165_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__OpenRetireDialog_d__165__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__OpenRetireDialog_d__165_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__OpenRetireDialog_d__165__System_IDisposable_Dispose(
        BattlePerformanceMaster__OpenRetireDialog_d__165_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206___ctor(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206__MoveNext(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *v2; // x20
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x19
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  UnityEngine_WaitForSeconds_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_T__TResult__o *v11; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_float__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  struct System_Collections_Generic_IEnumerator_float__o *v27; // x19
  System_Collections_Generic_IEnumerator_float__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  const MethodInfo *v35; // x3
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *v36; // x8
  int32_t size; // w2
  int v38; // w9
  UnityEngine_WaitForSeconds_o *v39; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *v42; // [xsp+18h] [xbp-28h]

  v2 = this;
  v42 = this;
  if ( (byte_4C46582 & 1) == 0 )
  {
    sub_1C37058(&Method_BattlePerformanceMaster_startMasterBuffEffect__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    sub_1C37058(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_float__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_float__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *)sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C46582 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1C372B4(this);
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1C372B4(this);
      delayAfterNoblePhantasmBuffData = _4__this->fields.delayAfterNoblePhantasmBuffData;
      if ( !delayAfterNoblePhantasmBuffData )
        sub_1C372B4(this);
      if ( delayAfterNoblePhantasmBuffData->fields._size >= 1 )
      {
        v6 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v6, 0.25, 0);
        v42->fields.__2__current = (Il2CppObject *)v6;
        sub_1C36FFC((CGThumbnailListItem_o *)&v42->fields.__2__current, (int32_t)v6, v7, v8);
        result = 1;
        v42->fields.__1__state = 1;
        return result;
      }
    }
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    v11 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    System_Func_object__float____ctor(
      v11,
      (Il2CppObject *)_4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      0);
    v12 = System_Linq_Enumerable__Select_object__float_(
            v10,
            (System_Func_TSource__TResult__o *)v11,
            (const MethodInfo_311EC70 *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v13 = v12;
    if ( !v12 )
      sub_1C372B4(0);
    klass = v12->klass;
    v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_16:
      v17 = sub_1C87870(v12, System_Collections_Generic_IEnumerable_float__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v17)(
            v13,
            *(_QWORD *)(v17 + 8));
    v42->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&v42->fields.__7__wrap1, v18, v19, v20);
    v2 = v42;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1C372B4(this);
  v22 = _7__wrap1->klass;
  v23 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_24;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_24:
    v25 = sub_1C87870(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v25)(
          _7__wrap1,
          *(_QWORD *)(v25 + 8))
      & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206____m__Finally1(v42, v26);
    v42->fields.__7__wrap1 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v42->fields.__7__wrap1, 0, v32, v33);
    if ( !_4__this )
      sub_1C372B4(v34);
    v36 = _4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !v36 )
      sub_1C372B4(v34);
    size = v36->fields._size;
    v38 = v36->fields._version + 1;
    v36->fields._size = 0;
    v36->fields._version = v38;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v36->fields._items, 0, size, 0);
    _4__this->fields.effectAfterNoblePhantasmCoroutine = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.effectAfterNoblePhantasmCoroutine, 0, size, v35);
    return 0;
  }
  v27 = v42->fields.__7__wrap1;
  if ( !v27 )
    sub_1C372B4(v42);
  v28 = v27->klass;
  v29 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v30 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_32:
    v31 = sub_1C87870(v42->fields.__7__wrap1, System_Collections_Generic_IEnumerator_float__TypeInfo, 0);
  }
  (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v31)(
    v27,
    *(_QWORD *)(v31 + 8));
  v39 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v39, 0.25, 0);
  v42->fields.__2__current = (Il2CppObject *)v39;
  sub_1C36FFC((CGThumbnailListItem_o *)&v42->fields.__2__current, (int32_t)v39, v40, v41);
  result = 1;
  v42->fields.__1__state = 2;
  return result;
}


Il2CppObject *BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206__System_IDisposable_Dispose(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 || _1__state == -3 )
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206____m__Finally1(this, method);
}


void BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206____m__Finally1(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__206_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_float__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C46583 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    byte_4C46583 = 1;
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
      v7 = sub_1C87870(_7__wrap1, System_IDisposable_TypeInfo, 0);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C4657B & 1) == 0 )
  {
    sub_1C37058(&BattlePerformanceMaster___c_TypeInfo);
    byte_4C4657B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattlePerformanceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceMaster___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattlePerformanceMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattlePerformanceMaster___c___ctor(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceMaster___c___IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi_b__219_0(
        BattlePerformanceMaster___c_o *this,
        ExtraBattleUserInterfaceComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return comp->fields.changeRootExtraPlacement;
}


void BattlePerformanceMaster___c___selectedSkillSvt_b__147_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster___c___selectedSvt_b__123_0(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  ;
}


bool BattlePerformanceMaster___c___updateSkillIcon_b__101_0(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0);
}


bool BattlePerformanceMaster___c___updateSkillIcon_b__101_1(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0);
}


void BattlePerformanceMaster___c__DisplayClass172_0___ctor(
        BattlePerformanceMaster___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass172_0___ProcLightExButton_b__0(
        BattlePerformanceMaster___c__DisplayClass172_0_o *this,
        ExtraBattleUserInterfaceComponent_o *comp,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  struct BattlePerformanceMaster_o *_4__this; // x21
  BattlePerformanceMaster_o *gameObject; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4C4657C & 1) == 0 )
  {
    sub_1C37058(&ExtraBattleUserInterfaceButtonComponent_TypeInfo);
    byte_4C4657C = 1;
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
        sub_1C372B4(gameObject);
      BattlePerformanceMaster__proclight(
        gameObject,
        (UnityEngine_GameObject_o *)gameObject,
        this->fields.target == 3,
        v8);
    }
  }
}


void BattlePerformanceMaster___c__DisplayClass191_0___ctor(
        BattlePerformanceMaster___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass191_0___startMasterBuffEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass191_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x20
  struct BattlePerformanceMaster_o *v10; // x8
  UnityEngine_Transform_o *v11; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v13; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Component_object; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  float v19; // s0
  struct BattlePerformanceMaster_o *v20; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v22; // x9
  __int64 klass_low; // x10
  intptr_t v24; // x8

  if ( (byte_4C4657D & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__0__);
    sub_1C37058(&StringLiteral_3084/*"Battle"*/);
    byte_4C4657D = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(x, 0, 1, 1.0, 0);
  _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v7 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[5].monitor;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0);
  EffectObjectSafe = BaseMonoBehaviour__createObject(_4__this, v7, transform, 0, 0);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  v9 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_31;
  v11 = (UnityEngine_Transform_o *)EffectObjectSafe;
  EffectObjectSafe = v10->fields.master_root;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)EffectObjectSafe,
                                                   0);
  if ( !v11 )
    goto LABEL_31;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)EffectObjectSafe, 0);
  UnityEngine_GameObject__SetActive(v9, 1, 0);
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)EffectObjectSafe,
             x,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v13 = Entity;
    if ( EffectEntity__isSe((EffectEntity_o *)Entity, 0) )
    {
      v14 = Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__0__;
      if ( (*((_BYTE *)Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__0__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C37070(Method_BattlePerformanceMaster___c__DisplayClass191_0__startMasterBuffEffect_b__0__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C3703C(v14, v14[4]);
      OverwriteAssetSoundName__PlaySe_41420232(
        v15,
        (System_String_o *)StringLiteral_3084/*"Battle"*/,
        (System_String_o *)v13[2].klass,
        1.0,
        0,
        0,
        0);
    }
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    v19 = *(float *)&Component_object[2].klass;
    if ( this->fields.waitTime < v19 )
      this->fields.waitTime = v19;
  }
  v20 = this->fields.__4__this;
  if ( !v20
    || (EffectObjectSafe = (UnityEngine_GameObject_o *)v20->fields.masterBuffEffectObjectList) == 0
    || (m_CachedPtr = EffectObjectSafe->fields.m_CachedPtr,
        v22 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(EffectObjectSafe[1].klass),
        !m_CachedPtr) )
  {
LABEL_31:
    sub_1C372B4(EffectObjectSafe);
  }
  klass_low = SLODWORD(EffectObjectSafe[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)EffectObjectSafe,
      (Il2CppObject *)v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = m_CachedPtr + 8 * klass_low;
    LODWORD(EffectObjectSafe[1].klass) = klass_low + 1;
    *(_QWORD *)(v24 + 32) = v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v9, v17, v18);
  }
}


void BattlePerformanceMaster___c__DisplayClass191_0___startMasterBuffEffect_b__1(
        BattlePerformanceMaster___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_MasterBuffData_o *masterBuffData; // x8
  struct BattlePerformanceMaster_o *_4__this; // x19
  MethodInfo *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v6; // x0
  UnityEngine_Coroutine_o *started; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  masterBuffData = this->fields.masterBuffData;
  if ( !masterBuffData )
    goto LABEL_8;
  if ( masterBuffData->fields._IsEnd_k__BackingField )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      masterIconFadeCoroutine = (MethodInfo *)_4__this->fields.masterIconFadeCoroutine;
      if ( !masterIconFadeCoroutine
        || (UnityEngine_MonoBehaviour__StopCoroutine_71252944(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              (UnityEngine_Coroutine_o *)masterIconFadeCoroutine,
              0),
            (_4__this = this->fields.__4__this) != 0) )
      {
        v6 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, masterIconFadeCoroutine);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
        _4__this->fields.masterIconFadeCoroutine = started;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.masterIconFadeCoroutine, (int32_t)started, v8, v9);
        return;
      }
    }
LABEL_8:
    sub_1C372B4(this);
  }
}


void BattlePerformanceMaster___c__DisplayClass194_0___ctor(
        BattlePerformanceMaster___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass194_0___endMasterBuffEffectFadeOut_b__0(
        BattlePerformanceMaster___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct BattlePerformanceMaster_o *_4__this; // x8
  BattlePerformanceMaster___c__DisplayClass194_0_o *v5; // x19
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v5 = this,
        _4__this->fields.masterIconFadeCoroutine = 0,
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.masterIconFadeCoroutine, 0, v2, v3),
        (this = (BattlePerformanceMaster___c__DisplayClass194_0_o *)v5->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  BattlePerformanceMaster__endMasterBuffEffect(
    (BattlePerformanceMaster_o *)this,
    v5->fields.widget,
    (BattlePerformanceMaster_MasterBuffEffectData_o *)this[17].fields.widget,
    v6);
}


void BattlePerformanceMaster___c__DisplayClass213_0___ctor(
        BattlePerformanceMaster___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass213_0___StartBattleItemAppearEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  struct BattleDropRandomBound_o *jumping; // x8
  BattlePerformanceMaster___c__DisplayClass213_0_o *v3; // x19
  const MethodInfo *v4; // x4
  BattlePerformanceMaster_o *_4__this; // x20
  System_Collections_IEnumerator_o *v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  jumping = this->fields.jumping;
  if ( !jumping
    || (v3 = this, (this = (BattlePerformanceMaster___c__DisplayClass213_0_o *)jumping->fields.boundObject) == 0)
    || (this = (BattlePerformanceMaster___c__DisplayClass213_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        _4__this = v3->fields.__4__this,
        v3->fields.appearPos = localPosition,
        !_4__this) )
  {
    sub_1C372B4(this);
  }
  v6 = BattlePerformanceMaster__DelayEffect(_4__this, v3->fields.id, v3->fields.parentObj, 0, localPosition, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
}


void BattlePerformanceMaster___c__DisplayClass220_0___ctor(
        BattlePerformanceMaster___c__DisplayClass220_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceMaster___c__DisplayClass220_0___IBattlePerformanceExtraUiParent_OnTapButtonCallback_b__0(
        BattlePerformanceMaster___c__DisplayClass220_0_o *this,
        int32_t confirmNextPartyIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster___c__DisplayClass220_0_o *v4; // x20
  struct BattlePerformanceMaster_o *_4__this; // x8
  System_String_o **v6; // x8

  v4 = this;
  if ( (byte_4C4657E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3283/*"CANCEL_SWITCH_PARTY"*/);
    this = (BattlePerformanceMaster___c__DisplayClass220_0_o *)sub_1C37058(&StringLiteral_3764/*"CONFIRM_SWITCH_PARTY"*/);
    byte_4C4657E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattlePerformanceMaster___c__DisplayClass220_0_o *)_4__this->fields.myFsm,
        _4__this->fields.tempSelectNextPartyIndex = confirmNextPartyIndex,
        !this) )
  {
    sub_1C372B4(this);
  }
  if ( v4->fields.selectNextPartyIndex == confirmNextPartyIndex )
    v6 = (System_String_o **)&StringLiteral_3764/*"CONFIRM_SWITCH_PARTY"*/;
  else
    v6 = (System_String_o **)&StringLiteral_3283/*"CANCEL_SWITCH_PARTY"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, *v6, 0);
}


void BattlePerformanceMaster___c__DisplayClass93_0___ctor(
        BattlePerformanceMaster___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceMaster___c__DisplayClass93_0___Initialize_b__0(
        BattlePerformanceMaster___c__DisplayClass93_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  BattlePerformanceMaster___c__DisplayClass93_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BattlePerformanceMaster___c__DisplayClass93_0_o *)UnityEngine_Object__get_name(
                                                                     (UnityEngine_Object_o *)x,
                                                                     0)) == 0) )
  {
    sub_1C372B4(this);
  }
  return System_String__StartsWith((System_String_o *)this, v3->fields.flashPrefabName, 0);
}


void BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194___ctor(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194__MoveNext(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattlePerformanceMaster_o *v9; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass194_0_o *_8__1; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattlePerformanceMaster___c__DisplayClass194_0_o *v18; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass194_0_o *v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *effectTween; // x19
  TweenAlpha_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UITweener_o *v27; // x20
  Il2CppObject *v28; // x19
  EventDelegate_Callback_o *v29; // x21

  v2 = this;
  if ( (byte_4C46584 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattlePerformanceMaster___c__DisplayClass194_0__endMasterBuffEffectFadeOut_b__0__);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)sub_1C37058(&BattlePerformanceMaster___c__DisplayClass194_0_TypeInfo);
    byte_4C46584 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)_4__this->fields.master_root;
    if ( !this )
      goto LABEL_26;
    _8__1 = v2->fields.__8__1;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_26;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_1C36FFC((CGThumbnailListItem_o *)&_8__1->fields.widget, (int32_t)this, v16, v17);
    v18 = v2->fields.__8__1;
    if ( !v18 )
      goto LABEL_26;
    widget = (UnityEngine_Object_o *)v18->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)UnityEngine_Object__op_Equality(widget, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v20 = v2->fields.__8__1;
      if ( !v20 )
        goto LABEL_26;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)v20->fields.widget;
      if ( !this )
        goto LABEL_26;
      ((void (__fastcall *)(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
        1.0);
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_26;
      if ( BattlePerformance__isPositionTactical((BattlePerformance_o *)this, 0) )
      {
        _4__this->fields.isMasterBuffEffectPlaying = 0;
        _4__this->fields.masterIconFadeCoroutine = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.masterIconFadeCoroutine, 0, v21, v22);
        effectTween = (UnityEngine_Object_o *)_4__this->fields.effectTween;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(effectTween, 0, 0) )
        {
          this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)_4__this->fields.effectTween;
          if ( !this )
            goto LABEL_26;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        }
      }
      else
      {
        v24 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0);
        _4__this->fields.effectTween = v24;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.effectTween, (int32_t)v24, v25, v26);
        v27 = (UITweener_o *)_4__this->fields.effectTween;
        if ( !v27 )
          goto LABEL_26;
        v27->fields.method = 6;
        v28 = (Il2CppObject *)v2->fields.__8__1;
        v29 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v29,
          v28,
          Method_BattlePerformanceMaster___c__DisplayClass194_0__endMasterBuffEffectFadeOut_b__0__,
          0);
        UITweener__SetOnFinished(v27, v29, 0);
      }
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C372A4(BattlePerformanceMaster___c__DisplayClass194_0_TypeInfo);
    System_Object___ctor(v4, 0);
    v2->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass194_0_o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v4, v5, v6);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *)v2->fields.__8__1;
    if ( this )
    {
      v9 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v9;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v7, v8);
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_26:
    sub_1C372B4(this);
  }
  return 0;
}


Il2CppObject *BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194__System_IDisposable_Dispose(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__194_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceMaster__waitMasterBuffEffect_d__192___ctor(
        BattlePerformanceMaster__waitMasterBuffEffect_d__192_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceMaster__waitMasterBuffEffect_d__192__MoveNext(
        BattlePerformanceMaster__waitMasterBuffEffect_d__192_o *this,
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
  const MethodInfo *v11; // x3
  bool result; // w0
  float deltaTime; // s0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v14, v15);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_1C372B4(0);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, method);
      this->fields.__2__current = v9;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
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


Il2CppObject *BattlePerformanceMaster__waitMasterBuffEffect_d__192__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__192_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceMaster__waitMasterBuffEffect_d__192__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__waitMasterBuffEffect_d__192_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__192_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattlePerformanceMaster__waitMasterBuffEffect_d__192__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__192_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceMaster__waitMasterBuffEffect_d__192__System_IDisposable_Dispose(
        BattlePerformanceMaster__waitMasterBuffEffect_d__192_o *this,
        const MethodInfo *method)
{
  ;
}