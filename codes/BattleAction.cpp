void __fastcall BattleAction_BasePlayShiftGauge___ctor(
        BattleAction_BasePlayShiftGauge_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAction_BasePlayShiftGauge__End(BattleAction_BasePlayShiftGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleActionData_BaseShiftGaugeData_o *v7; // x8

  if ( (byte_4B14246 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, method, v2);
    byte_4B14246 = 1;
  }
  shiftData = this->fields.shiftData;
  v5 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData
    || (BattleActionData_BaseShiftGaugeData__OffState(shiftData, v5, 0LL), (v7 = this->fields.shiftData) == 0LL) )
  {
    sub_1BCAA3C(v5, v6);
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    v7->fields._TargetId_k__BackingField,
    (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleAction_BasePlayShiftGauge__Init(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleActionData_BaseShiftGaugeData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.shiftData = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  return this;
}


void __fastcall BattleAction_BasePlayShiftGauge__OnCompleteChangeHp(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleAction_BasePlayShiftGauge__Start(
        BattleAction_BasePlayShiftGauge_o *this,
        BattlePerformanceStatus_o *status,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  this->fields.callBack = callBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callBack,
    (int64_t)callBack,
    (int64_t)callBack,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  shiftData = this->fields.shiftData;
  v11 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData )
    sub_1BCAA3C(v11, v12);
  BattleActionData_BaseShiftGaugeData__OnState(shiftData, v11, 0LL);
  ((void (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, BattlePerformanceStatus_o *, Il2CppMethodPointer))this->klass->vtable._5_StartPlayEffect.method)(
    this,
    status,
    this->klass->vtable._6_OnCompleteChangeHp.methodPtr);
}


void __fastcall BattleAction_BasePlayShiftGauge__StartPlayEffect(
        BattleAction_BasePlayShiftGauge_o *this,
        BattlePerformanceStatus_o *status,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall BattleAction_BasePlayShiftGauge__get_ChangeToHp(
        BattleAction_BasePlayShiftGauge_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeToHp_k__BackingField;
}


void __fastcall BattleAction_BasePlayShiftGauge__set_ChangeToHp(
        BattleAction_BasePlayShiftGauge_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ChangeToHp_k__BackingField = value;
}


void __fastcall BattleAction_PlayDownShiftGaugeMain___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1424C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v1, v2);
    byte_4B1424C = 1;
  }
  LODWORD(BattleAction_PlayDownShiftGaugeMain_TypeInfo->static_fields->EffectAnmDelayTime) = (struct BattleAction_PlayDownShiftGaugeMain_StaticFields)1057518256;
}


void __fastcall BattleAction_PlayDownShiftGaugeMain___ctor(
        BattleAction_PlayDownShiftGaugeMain_o *this,
        const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAction_PlayDownShiftGaugeMain__DelayPlayDownShiftEffect(
        BattleAction_PlayDownShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v5; // x21
  BattleServantHpShiftComponent_EffectData_o *v7; // x22
  float TotalMovePer; // s0
  BattleAction_PlayDownShiftGaugeMain_c *klass; // x8

  if ( !hpData )
    goto LABEL_7;
  v5 = this;
  if ( (((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, void *))hpData->klass->vtable._5_IsPlayShiftEffect.method)(
          hpData,
          hpData->klass[1]._1.image) & 1) != 0 )
  {
    this = (BattleAction_PlayDownShiftGaugeMain_o *)v5->fields.shiftData;
    if ( this )
    {
      v7 = (BattleServantHpShiftComponent_EffectData_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, Il2CppMethodPointer))this->klass->vtable._5_StartPlayEffect.method)(
                                                           this,
                                                           this->klass->vtable._6_OnCompleteChangeHp.methodPtr);
      this = (BattleAction_PlayDownShiftGaugeMain_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, Il2CppMethodPointer))hpData->klass->vtable._4_unknown.method)(
                                                        hpData,
                                                        hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr);
      if ( comp )
      {
        BattleServantParamComponent__PlayDownShiftEffect(comp, (int32_t)this, v7, 0LL);
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_1BCAA3C(this, comp);
  }
LABEL_6:
  TotalMovePer = BattleAction_ShiftHpData__get_TotalMovePer(hpData, (const MethodInfo *)comp);
  klass = v5->klass;
  *((float *)&v5->fields._ChangeToHp_k__BackingField + 1) = 1.5 / TotalMovePer;
  ((void (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, Il2CppMethodPointer))klass->vtable._10_StartHpChangeGauge.method)(
    v5,
    comp,
    hpData,
    klass->vtable._11_NextHpChangeGauge.methodPtr);
}


void __fastcall BattleAction_PlayDownShiftGaugeMain__PlayEffectMain(
        BattleAction_PlayDownShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BattleAction_PlayDownShiftGaugeMain_c *v15; // x0
  float EffectAnmDelayTime; // s9
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  float v20; // s8
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x8
  int32_t v22; // w22
  const MethodInfo *v23; // x2
  float v24; // s0
  System_Action_object__object__o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  BattleCallBack_T1__T2__o *v29; // x21

  if ( (byte_4B1424B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, comp, hpData);
    sub_1BCA7E0(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v7, v8);
    sub_1BCA7E0(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__, v11, v12);
    sub_1BCA7E0(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v13, v14);
    byte_4B1424B = 1;
  }
  v15 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  if ( !BattleAction_PlayDownShiftGaugeMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_PlayDownShiftGaugeMain_TypeInfo, comp);
    v15 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  }
  if ( !hpData )
    goto LABEL_15;
  EffectAnmDelayTime = v15->static_fields->EffectAnmDelayTime;
  v20 = 0.0;
  if ( (((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, void *, BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._5_IsPlayShiftEffect.method)(
          hpData,
          hpData->klass[1]._1.image,
          hpData,
          method) & 1) == 0 )
    goto LABEL_13;
  v15 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, Il2CppMethodPointer))hpData->klass->vtable._4_unknown.method)(
                                                   hpData,
                                                   hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr);
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (v22 = (int)v15,
        v15 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftData->klass->vtable._6_GetBeforeEffectData.method)(
                                                         this->fields.shiftData,
                                                         shiftData->klass->vtable._7_unknown.methodPtr),
        !comp) )
  {
LABEL_15:
    sub_1BCAA3C(v15, comp);
  }
  v24 = BattleServantParamComponent__PlayShiftEffectGeneral(
          comp,
          v22,
          (BattleServantHpShiftComponent_EffectData_o *)v15,
          0LL);
  if ( v24 <= 0.0 )
    v20 = EffectAnmDelayTime;
  else
    v20 = v24;
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v23);
LABEL_13:
  v25 = (System_Action_object__object__o *)sub_1BCAA2C(
                                             System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                             v17,
                                             v18,
                                             v19);
  System_Action_object__object____ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__,
    0LL);
  v29 = (BattleCallBack_T1__T2__o *)sub_1BCAA2C(
                                      BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                      v26,
                                      v27,
                                      v28);
  BattleCallBack_object__object____ctor(
    v29,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v25,
    (const MethodInfo_312AFF4 *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  if ( !comp )
    goto LABEL_15;
  BattleServantParamComponent__DelayCoroutine(comp, v20, (BattleCallBackBase_o *)v29, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain___ctor(
        BattleAction_PlayShiftGaugeMain_o *this,
        const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__InitNextTdGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  BattleAction_PlayShiftGaugeMain_o *v3; // x19

  if ( !comp
    || (v3 = this,
        BattleServantParamComponent__InitNextTdGauge(comp, 0LL),
        (this = (BattleAction_PlayShiftGaugeMain_o *)v3->fields.shiftData) == 0LL) )
  {
    sub_1BCAA3C(this, comp);
  }
  BattleActionData_BaseShiftGaugeData__OnNotUpdateState((BattleActionData_BaseShiftGaugeData_o *)this, 1, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__NextHpChangeGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  float *v4; // x19
  BattleAction_PlayShiftGaugeMain_o *v7; // x21

  if ( !hpData )
    goto LABEL_9;
  v4 = (float *)this;
  this = (BattleAction_PlayShiftGaugeMain_o *)BattleAction_ShiftHpData__GetHpDetail(hpData, (const MethodInfo *)comp);
  if ( !this )
  {
    (*(void (__fastcall **)(float *, BattleServantParamComponent_o *, _QWORD))(*(_QWORD *)v4 + 456LL))(
      v4,
      comp,
      *(_QWORD *)(*(_QWORD *)v4 + 464LL));
    return;
  }
  v7 = this;
  if ( !LOBYTE(this->fields._ChangeToHp_k__BackingField) )
  {
    if ( comp )
      goto LABEL_8;
LABEL_9:
    sub_1BCAA3C(this, comp);
  }
  if ( !comp )
    goto LABEL_9;
  BattleServantParamComponent__UpdateShiftChange(comp, hpData->fields._CurGaugeIndex_k__BackingField, 0LL);
LABEL_8:
  BattleServantParamComponent__SetBreakSpriteDisplay(comp, 0, 0LL);
  BattleServantParamComponent__UpdateShiftGaugeChangeHp(
    comp,
    (int32_t)v7->fields.shiftData,
    HIDWORD(v7->fields.shiftData),
    (int32_t)v7->fields.callBack,
    *((float *)&v7->fields.callBack + 1) * v4[9],
    (BattleAction_BasePlayShiftGauge_o *)v4,
    0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__NextPlayEffect(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleAction_ShiftHpData_o *HpData; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1
  __int64 v14; // x2

  shiftData = this->fields.shiftData;
  if ( !shiftData )
    sub_1BCAA3C(0LL, comp);
  HpData = BattleActionData_BaseShiftGaugeData__GetHpData(shiftData, 0LL);
  *(_QWORD *)&this->fields.hpGaugeSpeed = HpData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hpGaugeSpeed, (int64_t)HpData, v7, v8, v9, v10, v11, v12);
  v14 = *(_QWORD *)&this->fields.hpGaugeSpeed;
  if ( v14 )
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._8_PlayEffectMain.method)(
      this,
      comp,
      v14,
      this->klass->vtable._9_NextPlayEffect.methodPtr);
  else
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, v13);
}


void __fastcall BattleAction_PlayShiftGaugeMain__OnCompleteChangeHp(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, _QWORD, void *))this->klass->vtable._11_NextHpChangeGauge.method)(
    this,
    comp,
    *(_QWORD *)&this->fields.hpGaugeSpeed,
    this->klass[1]._1.image);
}


void __fastcall BattleAction_PlayShiftGaugeMain__PlayEffectMain(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleAction_PlayShiftGaugeMain__StartHpChangeGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B14248 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__, comp, hpData);
    byte_4B14248 = 1;
  }
  v7 = Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__;
  if ( (*((_BYTE *)Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe(v8, 16, 0LL);
  ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, void *))this->klass->vtable._11_NextHpChangeGauge.method)(
    this,
    comp,
    hpData,
    this->klass[1]._1.image);
}


void __fastcall BattleAction_PlayShiftGaugeMain__StartPlayEffect(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattlePerformanceStatus_o *status,
        const MethodInfo *method)
{
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  struct BattleActionData_BaseShiftGaugeData_o *v6; // x8
  __int64 v7; // x1
  UnityEngine_Object_o *EnemySvtParamComponent; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B14247 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, status, method);
    byte_4B14247 = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, void *, const MethodInfo *))shiftData->klass->vtable._13_InitShiftHpPos.method)(
                                                                      shiftData,
                                                                      shiftData->klass[1]._1.image,
                                                                      method),
        (v6 = this->fields.shiftData) == 0LL)
    || !status )
  {
    sub_1BCAA3C(shiftData, status);
  }
  EnemySvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceStatus__GetEnemySvtParamComponent(
                                                     status,
                                                     v6->fields._TargetId_k__BackingField,
                                                     0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(EnemySvtParamComponent, 0LL, 0LL) )
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, v9);
  else
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, UnityEngine_Object_o *, Il2CppMethodPointer))this->klass->vtable._9_NextPlayEffect.method)(
      this,
      EnemySvtParamComponent,
      this->klass->vtable._10_StartHpChangeGauge.methodPtr);
}


int32_t __fastcall BattleAction_PlayShiftGaugeMain__get_PlayedFlag(
        BattleAction_PlayShiftGaugeMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall BattleAction_PlayUpShiftGaugeUpMain___ctor(
        BattleAction_PlayUpShiftGaugeUpMain_o *this,
        const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAction_PlayUpShiftGaugeUpMain__DelayStartHpChangeGauge(
        BattleAction_PlayUpShiftGaugeUpMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v6; // x21
  UnityEngine_Object_o *hpShift; // x22

  v6 = this;
  if ( (byte_4B1424A & 1) == 0 )
  {
    this = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, comp, hpData);
    byte_4B1424A = 1;
  }
  if ( !comp )
    goto LABEL_12;
  hpShift = (UnityEngine_Object_o *)comp->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, comp);
  this = (BattleAction_PlayUpShiftGaugeUpMain_o *)UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( hpData && hpShift )
    {
      if ( !BattleServantHpShiftComponent__IsIconActive(
              (BattleServantHpShiftComponent_o *)hpShift,
              hpData->fields._MaxGaugeIconIndex_k__BackingField,
              0LL) )
        BattleServantHpShiftComponent__UpdateIcon(
          (BattleServantHpShiftComponent_o *)hpShift,
          hpData->fields._MaxGaugeIconIndex_k__BackingField,
          1,
          1,
          0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, comp);
  }
LABEL_11:
  ((void (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, Il2CppMethodPointer))v6->klass->vtable._10_StartHpChangeGauge.method)(
    v6,
    comp,
    hpData,
    v6->klass->vtable._11_NextHpChangeGauge.methodPtr);
}


void __fastcall BattleAction_PlayUpShiftGaugeUpMain__PlayEffectMain(
        BattleAction_PlayUpShiftGaugeUpMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleServantHpShiftComponent_EffectData_o *v14; // x23
  const MethodInfo *v15; // x2
  char v16; // w22
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_object__object__o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  BattleCallBack_T1__T2__o *v25; // x21
  float v26; // s0

  if ( (byte_4B14249 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, comp, hpData);
    sub_1BCA7E0(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v7, v8);
    sub_1BCA7E0(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__, v11, v12);
    byte_4B14249 = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData )
    goto LABEL_12;
  shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer, BattleAction_ShiftHpData_o *, const MethodInfo *))shiftData->klass->vtable._5_unknown.method)(
                                                                shiftData,
                                                                shiftData->klass->vtable._6_GetBeforeEffectData.methodPtr,
                                                                hpData,
                                                                method);
  if ( !hpData )
    goto LABEL_12;
  v14 = (BattleServantHpShiftComponent_EffectData_o *)shiftData;
  v16 = ((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, void *))hpData->klass->vtable._5_IsPlayShiftEffect.method)(
          hpData,
          hpData->klass[1]._1.image);
  if ( (v16 & 1) != 0 )
  {
    shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, Il2CppMethodPointer))hpData->klass->vtable._4_unknown.method)(
                                                                  hpData,
                                                                  hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr);
    if ( !comp )
      goto LABEL_12;
    BattleServantParamComponent__PlayUpShiftEffect(comp, (int32_t)shiftData, 1.5, v14, 0LL);
  }
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v15);
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5
                                                            / BattleAction_ShiftHpData__get_TotalMovePer(hpData, v17);
  v21 = (System_Action_object__object__o *)sub_1BCAA2C(
                                             System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                             v18,
                                             v19,
                                             v20);
  System_Action_object__object____ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__,
    0LL);
  v25 = (BattleCallBack_T1__T2__o *)sub_1BCAA2C(
                                      BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                      v22,
                                      v23,
                                      v24);
  BattleCallBack_object__object____ctor(
    v25,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v21,
    (const MethodInfo_312AFF4 *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  if ( !comp )
LABEL_12:
    sub_1BCAA3C(shiftData, comp);
  v26 = 0.0;
  if ( (v16 & 1) != 0 )
    v26 = 1.5;
  BattleServantParamComponent__DelayCoroutine(comp, v26, (BattleCallBackBase_o *)v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleAction_ShiftDownHpData___ctor(
        BattleAction_ShiftDownHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w24
  int32_t MaxHp_k__BackingField; // w25
  int64_t v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w21
  int32_t v35; // w22
  int64_t v36; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0

  if ( (byte_4B14244 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex, *(_QWORD *)&maxGaugeIconIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11, v12);
    byte_4B14244 = 1;
  }
  BattleAction_ShiftHpData___ctor(
    (BattleAction_ShiftHpData_o *)this,
    curGaugeIndex,
    maxGaugeIconIndex,
    (const MethodInfo *)prevHp);
  if ( !prevHp )
    goto LABEL_15;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v20 = sub_1BCAA2C(BattleAction_ShiftHpData_HpDetail_TypeInfo, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  *(_DWORD *)(v20 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v20 + 20) = 0;
  *(_DWORD *)(v20 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v20 + 32) = 0;
  *(float *)(v20 + 28) = vabds_f32(0.0, (float)Hp_k__BackingField) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v28 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v20,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
  }
  if ( !curHp )
    goto LABEL_15;
  v33 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v35 = curHp->fields._Hp_k__BackingField;
  v34 = curHp->fields._MaxHp_k__BackingField;
  v36 = sub_1BCAA2C(BattleAction_ShiftHpData_HpDetail_TypeInfo, v14, v31, v32);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  *(_DWORD *)(v36 + 16) = v34;
  *(_DWORD *)(v36 + 20) = v35;
  *(_DWORD *)(v36 + 24) = v34;
  *(_BYTE *)(v36 + 32) = 1;
  *(float *)(v36 + 28) = vabds_f32((float)v35, (float)v34) / (float)v34;
  if ( !v33
    || (v43 = v33->fields._items,
        v44 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v33->fields._version,
        !v43) )
  {
LABEL_15:
    sub_1BCAA3C(v13, v14);
  }
  v45 = v33->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v36,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v33->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v36;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v36, v37, v38, v39, v40, v41, v42);
  }
}


int32_t __fastcall BattleAction_ShiftDownHpData__get_PlayGaugeIndex(
        BattleAction_ShiftDownHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleAction_ShiftHpData___ctor(
        BattleAction_ShiftHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B14240 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__,
      *(_QWORD *)&curGaugeIndex,
      *(_QWORD *)&maxGaugeIconIndex);
    sub_1BCA7E0(&System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo, v7, v8);
    byte_4B14240 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurGaugeIndex_k__BackingField = curGaugeIndex;
  this->fields._MaxGaugeIconIndex_k__BackingField = maxGaugeIconIndex;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo,
                                                       v9,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
  this->fields._HpDetailList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._HpDetailList_k__BackingField,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


BattleAction_ShiftHpData_HpDetail_o *__fastcall BattleAction_ShiftHpData__GetHpDetail(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t hpDetailIndex; // w1
  System_Collections_Generic_List_T__o *HpDetailList_k__BackingField; // x0

  if ( (byte_4B14241 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___, method, v2);
    byte_4B14241 = 1;
  }
  hpDetailIndex = this->fields.hpDetailIndex;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._HpDetailList_k__BackingField;
  this->fields.hpDetailIndex = hpDetailIndex + 1;
  return (BattleAction_ShiftHpData_HpDetail_o *)BasicHelper__IndexValue_object__49289180(
                                                  HpDetailList_k__BackingField,
                                                  hpDetailIndex,
                                                  0LL,
                                                  (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
}


void __fastcall BattleAction_ShiftHpData__InitHpIndex(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  this->fields.hpDetailIndex = 0;
}


bool __fastcall BattleAction_ShiftHpData__IsPlayShiftEffect(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall BattleAction_ShiftHpData__get_CurGaugeIndex(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}


System_Collections_Generic_List_ShiftHpData_HpDetail__o *__fastcall BattleAction_ShiftHpData__get_HpDetailList(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._HpDetailList_k__BackingField;
}


int32_t __fastcall BattleAction_ShiftHpData__get_MaxGaugeIconIndex(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._MaxGaugeIconIndex_k__BackingField;
}


float __fastcall BattleAction_ShiftHpData__get_TotalMovePer(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleAction_ShiftHpData___c_c *v11; // x0
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x19
  System_Func_T__TResult__o *_9__17_0; // x20
  Il2CppObject *v14; // x21
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0

  if ( (byte_4B1423F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___, method, v2);
    sub_1BCA7E0(&System_Func_ShiftHpData_HpDetail__float__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__, v7, v8);
    sub_1BCA7E0(&BattleAction_ShiftHpData___c_TypeInfo, v9, v10);
    byte_4B1423F = 1;
  }
  v11 = BattleAction_ShiftHpData___c_TypeInfo;
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  if ( !BattleAction_ShiftHpData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_ShiftHpData___c_TypeInfo, method);
    v11 = BattleAction_ShiftHpData___c_TypeInfo;
  }
  _9__17_0 = (System_Func_T__TResult__o *)v11->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleAction_ShiftHpData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__17_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_ShiftHpData_HpDetail__float__TypeInfo,
                                              method,
                                              v2,
                                              v3);
    System_Func_object__float____ctor(
      _9__17_0,
      v14,
      Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__,
      0LL);
    static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_ShiftHpData_HpDetail__float__o *)_9__17_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)HpDetailList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__17_0,
          (const MethodInfo_2F43DD4 *)Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
  return System_Linq_Enumerable__Sum_64620648((System_Collections_Generic_IEnumerable_float__o *)v22, 0LL);
}


void __fastcall BattleAction_ShiftHpData__set_CurGaugeIndex(
        BattleAction_ShiftHpData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CurGaugeIndex_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData__set_HpDetailList(
        BattleAction_ShiftHpData_o *this,
        System_Collections_Generic_List_ShiftHpData_HpDetail__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._HpDetailList_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._HpDetailList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleAction_ShiftHpData__set_MaxGaugeIconIndex(
        BattleAction_ShiftHpData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxGaugeIconIndex_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData_HpDetail___ctor(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t startHp,
        int32_t endHp,
        int32_t maxHp,
        bool isHpChange,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._StartHp_k__BackingField = startHp;
  this->fields._EndHp_k__BackingField = endHp;
  this->fields._MaxHp_k__BackingField = maxHp;
  this->fields._IsHpChange_k__BackingField = isHpChange;
  this->fields._MovePer_k__BackingField = vabds_f32((float)endHp, (float)startHp) / (float)maxHp;
}


int32_t __fastcall BattleAction_ShiftHpData_HpDetail__get_EndHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._EndHp_k__BackingField;
}


bool __fastcall BattleAction_ShiftHpData_HpDetail__get_IsHpChange(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._IsHpChange_k__BackingField;
}


int32_t __fastcall BattleAction_ShiftHpData_HpDetail__get_MaxHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._MaxHp_k__BackingField;
}


float __fastcall BattleAction_ShiftHpData_HpDetail__get_MovePer(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._MovePer_k__BackingField;
}


int32_t __fastcall BattleAction_ShiftHpData_HpDetail__get_StartHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._StartHp_k__BackingField;
}


void __fastcall BattleAction_ShiftHpData_HpDetail__set_EndHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EndHp_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData_HpDetail__set_IsHpChange(
        BattleAction_ShiftHpData_HpDetail_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsHpChange_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData_HpDetail__set_MaxHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxHp_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData_HpDetail__set_MovePer(
        BattleAction_ShiftHpData_HpDetail_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._MovePer_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData_HpDetail__set_StartHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._StartHp_k__BackingField = value;
}


void __fastcall BattleAction_ShiftHpData___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B14242 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_ShiftHpData___c_TypeInfo, v1, v2);
    byte_4B14242 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleAction_ShiftHpData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleAction_ShiftHpData___c_TypeInfo->static_fields->__9 = (struct BattleAction_ShiftHpData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleAction_ShiftHpData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleAction_ShiftHpData___c___ctor(BattleAction_ShiftHpData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall BattleAction_ShiftHpData___c___get_TotalMovePer_b__17_0(
        BattleAction_ShiftHpData___c_o *this,
        BattleAction_ShiftHpData_HpDetail_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._MovePer_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleAction_ShiftUpHpData___ctor(
        BattleAction_ShiftUpHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w25
  int64_t v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w21
  int32_t v35; // w22
  int64_t v36; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0

  if ( (byte_4B14243 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex, *(_QWORD *)&maxGaugeIconIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11, v12);
    byte_4B14243 = 1;
  }
  BattleAction_ShiftHpData___ctor(
    (BattleAction_ShiftHpData_o *)this,
    curGaugeIndex,
    maxGaugeIconIndex,
    (const MethodInfo *)prevHp);
  if ( !prevHp )
    goto LABEL_15;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v20 = sub_1BCAA2C(BattleAction_ShiftHpData_HpDetail_TypeInfo, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  *(_DWORD *)(v20 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v20 + 20) = MaxHp_k__BackingField;
  *(_DWORD *)(v20 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v20 + 32) = 0;
  *(float *)(v20 + 28) = vabds_f32((float)MaxHp_k__BackingField, (float)Hp_k__BackingField)
                       / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v28 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v20,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
  }
  if ( !curHp )
    goto LABEL_15;
  v33 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v34 = curHp->fields._Hp_k__BackingField;
  v35 = curHp->fields._MaxHp_k__BackingField;
  v36 = sub_1BCAA2C(BattleAction_ShiftHpData_HpDetail_TypeInfo, v14, v31, v32);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  *(_DWORD *)(v36 + 16) = 0;
  *(_DWORD *)(v36 + 20) = v34;
  *(_DWORD *)(v36 + 24) = v35;
  *(_BYTE *)(v36 + 32) = 1;
  *(float *)(v36 + 28) = fabsf((float)v34) / (float)v35;
  if ( !v33
    || (v43 = v33->fields._items,
        v44 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v33->fields._version,
        !v43) )
  {
LABEL_15:
    sub_1BCAA3C(v13, v14);
  }
  v45 = v33->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v36,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v33->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v36;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v36, v37, v38, v39, v40, v41, v42);
  }
}


int32_t __fastcall BattleAction_ShiftUpHpData__get_PlayGaugeIndex(
        BattleAction_ShiftUpHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField - 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleAction_UpHpDataBeforeShift___ctor(
        BattleAction_UpHpDataBeforeShift_o *this,
        int32_t curGaugeIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x19
  int32_t Hp_k__BackingField; // w21
  int32_t v17; // w22
  int32_t MaxHp_k__BackingField; // w23
  int64_t v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B14245 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex, prevHp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v9, v10);
    byte_4B14245 = 1;
  }
  BattleAction_ShiftHpData___ctor((BattleAction_ShiftHpData_o *)this, curGaugeIndex, -1, (const MethodInfo *)curHp);
  if ( !prevHp )
    goto LABEL_10;
  if ( !curHp )
    goto LABEL_10;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = curHp->fields._Hp_k__BackingField;
  v17 = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v19 = sub_1BCAA2C(BattleAction_ShiftHpData_HpDetail_TypeInfo, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  *(_DWORD *)(v19 + 16) = v17;
  *(_DWORD *)(v19 + 20) = Hp_k__BackingField;
  *(_DWORD *)(v19 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v19 + 32) = 1;
  *(float *)(v19 + 28) = vabds_f32((float)Hp_k__BackingField, (float)v17) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField
    || (items = HpDetailList_k__BackingField->fields._items,
        v27 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++HpDetailList_k__BackingField->fields._version,
        !items) )
  {
LABEL_10:
    sub_1BCAA3C(v11, v12);
  }
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v19,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), v19, v20, v21, v22, v23, v24, v25);
  }
}


bool __fastcall BattleAction_UpHpDataBeforeShift__IsPlayShiftEffect(
        BattleAction_UpHpDataBeforeShift_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall BattleAction_UpHpDataBeforeShift__get_PlayGaugeIndex(
        BattleAction_UpHpDataBeforeShift_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}