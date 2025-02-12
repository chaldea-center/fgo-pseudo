void __fastcall BattleAction_BasePlayShiftGauge___ctor(
        BattleAction_BasePlayShiftGauge_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAction_BasePlayShiftGauge__End(BattleAction_BasePlayShiftGauge_o *this, const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct BattleActionData_BaseShiftGaugeData_o *v6; // x8

  if ( (byte_4BB26EB & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_int___, method);
    byte_4BB26EB = 1;
  }
  shiftData = this->fields.shiftData;
  v4 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData
    || (BattleActionData_BaseShiftGaugeData__OffState(shiftData, v4, 0LL), (v6 = this->fields.shiftData) == 0LL) )
  {
    sub_1C13F80(v4, v5);
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    v6->fields._TargetId_k__BackingField,
    (const MethodInfo_2EE1BD8 *)Method_ActionExtensions_Call_int___);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C13CC8(
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
    sub_1C13F80(v11, v12);
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

  if ( (byte_4BB26F1 & 1) == 0 )
  {
    sub_1C13D24(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v1);
    byte_4BB26F1 = 1;
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
    sub_1C13F80(this, comp);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleAction_PlayDownShiftGaugeMain_c *v11; // x0
  float EffectAnmDelayTime; // s9
  float v13; // s8
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x8
  int32_t v15; // w22
  const MethodInfo *v16; // x2
  float v17; // s0
  System_Action_object__object__o *v18; // x22
  BattleCallBack_T1__T2__o *v19; // x21

  if ( (byte_4BB26F0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, comp);
    sub_1C13D24(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v7);
    sub_1C13D24(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v8);
    sub_1C13D24(&Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__, v9);
    sub_1C13D24(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v10);
    byte_4BB26F0 = 1;
  }
  v11 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  if ( !BattleAction_PlayDownShiftGaugeMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    v11 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  }
  if ( !hpData )
    goto LABEL_15;
  EffectAnmDelayTime = v11->static_fields->EffectAnmDelayTime;
  v13 = 0.0;
  if ( (((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, void *, BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._5_IsPlayShiftEffect.method)(
          hpData,
          hpData->klass[1]._1.image,
          hpData,
          method) & 1) == 0 )
    goto LABEL_13;
  v11 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, Il2CppMethodPointer))hpData->klass->vtable._4_unknown.method)(
                                                   hpData,
                                                   hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr);
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (v15 = (int)v11,
        v11 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftData->klass->vtable._6_GetBeforeEffectData.method)(
                                                         this->fields.shiftData,
                                                         shiftData->klass->vtable._7_unknown.methodPtr),
        !comp) )
  {
LABEL_15:
    sub_1C13F80(v11, comp);
  }
  v17 = BattleServantParamComponent__PlayShiftEffectGeneral(
          comp,
          v15,
          (BattleServantHpShiftComponent_EffectData_o *)v11,
          0LL);
  if ( v17 <= 0.0 )
    v13 = EffectAnmDelayTime;
  else
    v13 = v17;
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v16);
LABEL_13:
  v18 = (System_Action_object__object__o *)sub_1C13F70(System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
  System_Action_object__object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__,
    0LL);
  v19 = (BattleCallBack_T1__T2__o *)sub_1C13F70(BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
  BattleCallBack_object__object____ctor(
    v19,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v18,
    (const MethodInfo_31AE50C *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  if ( !comp )
    goto LABEL_15;
  BattleServantParamComponent__DelayCoroutine(comp, v13, (BattleCallBackBase_o *)v19, 0LL);
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
    sub_1C13F80(this, comp);
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
    sub_1C13F80(this, comp);
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
    sub_1C13F80(0LL, comp);
  HpData = BattleActionData_BaseShiftGaugeData__GetHpData(shiftData, 0LL);
  *(_QWORD *)&this->fields.hpGaugeSpeed = HpData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.hpGaugeSpeed, (int64_t)HpData, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BB26ED & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__, comp);
    byte_4BB26ED = 1;
  }
  v7 = Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__;
  if ( (*((_BYTE *)Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe(v8, 16, 0, 0LL);
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
  UnityEngine_Object_o *EnemySvtParamComponent; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4BB26EC & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, status);
    byte_4BB26EC = 1;
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
    sub_1C13F80(shiftData, status);
  }
  EnemySvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceStatus__GetEnemySvtParamComponent(
                                                     status,
                                                     v6->fields._TargetId_k__BackingField,
                                                     0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(EnemySvtParamComponent, 0LL, 0LL) )
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, v8);
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
  if ( (byte_4BB26EF & 1) == 0 )
  {
    this = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, comp);
    byte_4BB26EF = 1;
  }
  if ( !comp )
    goto LABEL_12;
  hpShift = (UnityEngine_Object_o *)comp->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C13F80(this, comp);
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleServantHpShiftComponent_EffectData_o *v11; // x23
  const MethodInfo *v12; // x2
  char v13; // w22
  const MethodInfo *v14; // x1
  System_Action_object__object__o *v15; // x23
  BattleCallBack_T1__T2__o *v16; // x21
  float v17; // s0

  if ( (byte_4BB26EE & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, comp);
    sub_1C13D24(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v7);
    sub_1C13D24(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v8);
    sub_1C13D24(&Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__, v9);
    byte_4BB26EE = 1;
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
  v11 = (BattleServantHpShiftComponent_EffectData_o *)shiftData;
  v13 = ((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, void *))hpData->klass->vtable._5_IsPlayShiftEffect.method)(
          hpData,
          hpData->klass[1]._1.image);
  if ( (v13 & 1) != 0 )
  {
    shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, Il2CppMethodPointer))hpData->klass->vtable._4_unknown.method)(
                                                                  hpData,
                                                                  hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr);
    if ( !comp )
      goto LABEL_12;
    BattleServantParamComponent__PlayUpShiftEffect(comp, (int32_t)shiftData, 1.5, v11, 0LL);
  }
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v12);
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5
                                                            / BattleAction_ShiftHpData__get_TotalMovePer(hpData, v14);
  v15 = (System_Action_object__object__o *)sub_1C13F70(System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
  System_Action_object__object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__,
    0LL);
  v16 = (BattleCallBack_T1__T2__o *)sub_1C13F70(BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
  BattleCallBack_object__object____ctor(
    v16,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v15,
    (const MethodInfo_31AE50C *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  if ( !comp )
LABEL_12:
    sub_1C13F80(shiftData, comp);
  v17 = 0.0;
  if ( (v13 & 1) != 0 )
    v17 = 1.5;
  BattleServantParamComponent__DelayCoroutine(comp, v17, (BattleCallBackBase_o *)v16, 0LL);
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
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w24
  int32_t MaxHp_k__BackingField; // w25
  int64_t v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w21
  int32_t v30; // w22
  int64_t v31; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4BB26E9 & 1) == 0 )
  {
    sub_1C13D24(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11);
    byte_4BB26E9 = 1;
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
  v17 = sub_1C13F70(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_DWORD *)(v17 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v17 + 20) = 0;
  *(_DWORD *)(v17 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v17 + 32) = 0;
  *(float *)(v17 + 28) = vabds_f32(0.0, (float)Hp_k__BackingField) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v25 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v17,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v17;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 4), v17, v18, v19, v20, v21, v22, v23);
  }
  if ( !curHp )
    goto LABEL_15;
  v28 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v30 = curHp->fields._Hp_k__BackingField;
  v29 = curHp->fields._MaxHp_k__BackingField;
  v31 = sub_1C13F70(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  *(_DWORD *)(v31 + 16) = v29;
  *(_DWORD *)(v31 + 20) = v30;
  *(_DWORD *)(v31 + 24) = v29;
  *(_BYTE *)(v31 + 32) = 1;
  *(float *)(v31 + 28) = vabds_f32((float)v30, (float)v29) / (float)v29;
  if ( !v28
    || (v38 = v28->fields._items,
        v39 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v28->fields._version,
        !v38) )
  {
LABEL_15:
    sub_1C13F80(v12, v13);
  }
  v40 = v28->fields._size;
  if ( (unsigned int)v40 >= v38->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v31,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v28->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v41 + 4), v31, v32, v33, v34, v35, v36, v37);
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
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB26E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__, *(_QWORD *)&curGaugeIndex);
    sub_1C13D24(&System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo, v7);
    byte_4BB26E5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurGaugeIndex_k__BackingField = curGaugeIndex;
  this->fields._MaxGaugeIconIndex_k__BackingField = maxGaugeIconIndex;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
  this->fields._HpDetailList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *)v8;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._HpDetailList_k__BackingField,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


BattleAction_ShiftHpData_HpDetail_o *__fastcall BattleAction_ShiftHpData__GetHpDetail(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  int32_t hpDetailIndex; // w1
  System_Collections_Generic_List_T__o *HpDetailList_k__BackingField; // x0

  if ( (byte_4BB26E6 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___, method);
    byte_4BB26E6 = 1;
  }
  hpDetailIndex = this->fields.hpDetailIndex;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._HpDetailList_k__BackingField;
  this->fields.hpDetailIndex = hpDetailIndex + 1;
  return (BattleAction_ShiftHpData_HpDetail_o *)BasicHelper__IndexValue_object__49799096(
                                                  HpDetailList_k__BackingField,
                                                  hpDetailIndex,
                                                  0LL,
                                                  (const MethodInfo_2F7DFB8 *)Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleAction_ShiftHpData___c_c *v6; // x0
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x19
  System_Func_T__TResult__o *_9__17_0; // x20
  Il2CppObject *v9; // x21
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0

  if ( (byte_4BB26E4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___, method);
    sub_1C13D24(&System_Func_ShiftHpData_HpDetail__float__TypeInfo, v3);
    sub_1C13D24(&Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__, v4);
    sub_1C13D24(&BattleAction_ShiftHpData___c_TypeInfo, v5);
    byte_4BB26E4 = 1;
  }
  v6 = BattleAction_ShiftHpData___c_TypeInfo;
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  if ( !BattleAction_ShiftHpData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_ShiftHpData___c_TypeInfo);
    v6 = BattleAction_ShiftHpData___c_TypeInfo;
  }
  _9__17_0 = (System_Func_T__TResult__o *)v6->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleAction_ShiftHpData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__17_0 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_ShiftHpData_HpDetail__float__TypeInfo);
    System_Func_object__float____ctor(
      _9__17_0,
      v9,
      Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__,
      0LL);
    static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_ShiftHpData_HpDetail__float__o *)_9__17_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)HpDetailList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__17_0,
          (const MethodInfo_2FC0E6C *)Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
  return System_Linq_Enumerable__Sum_65187540((System_Collections_Generic_IEnumerable_float__o *)v17, 0LL);
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
  sub_1C13CC8(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB26E7 & 1) == 0 )
  {
    sub_1C13D24(&BattleAction_ShiftHpData___c_TypeInfo, v1);
    byte_4BB26E7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleAction_ShiftHpData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleAction_ShiftHpData___c_TypeInfo->static_fields->__9 = (struct BattleAction_ShiftHpData___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleAction_ShiftHpData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
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
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w25
  int64_t v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w21
  int32_t v30; // w22
  int64_t v31; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4BB26E8 & 1) == 0 )
  {
    sub_1C13D24(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11);
    byte_4BB26E8 = 1;
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
  v17 = sub_1C13F70(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_DWORD *)(v17 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v17 + 20) = MaxHp_k__BackingField;
  *(_DWORD *)(v17 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v17 + 32) = 0;
  *(float *)(v17 + 28) = vabds_f32((float)MaxHp_k__BackingField, (float)Hp_k__BackingField)
                       / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v25 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v17,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v17;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 4), v17, v18, v19, v20, v21, v22, v23);
  }
  if ( !curHp )
    goto LABEL_15;
  v28 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v29 = curHp->fields._Hp_k__BackingField;
  v30 = curHp->fields._MaxHp_k__BackingField;
  v31 = sub_1C13F70(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  *(_DWORD *)(v31 + 16) = 0;
  *(_DWORD *)(v31 + 20) = v29;
  *(_DWORD *)(v31 + 24) = v30;
  *(_BYTE *)(v31 + 32) = 1;
  *(float *)(v31 + 28) = fabsf((float)v29) / (float)v30;
  if ( !v28
    || (v38 = v28->fields._items,
        v39 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v28->fields._version,
        !v38) )
  {
LABEL_15:
    sub_1C13F80(v12, v13);
  }
  v40 = v28->fields._size;
  if ( (unsigned int)v40 >= v38->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v31,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v28->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v41 + 4), v31, v32, v33, v34, v35, v36, v37);
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x19
  int32_t Hp_k__BackingField; // w21
  int32_t v14; // w22
  int32_t MaxHp_k__BackingField; // w23
  int64_t v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BB26EA & 1) == 0 )
  {
    sub_1C13D24(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v9);
    byte_4BB26EA = 1;
  }
  BattleAction_ShiftHpData___ctor((BattleAction_ShiftHpData_o *)this, curGaugeIndex, -1, (const MethodInfo *)curHp);
  if ( !prevHp )
    goto LABEL_10;
  if ( !curHp )
    goto LABEL_10;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = curHp->fields._Hp_k__BackingField;
  v14 = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v16 = sub_1C13F70(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(_DWORD *)(v16 + 16) = v14;
  *(_DWORD *)(v16 + 20) = Hp_k__BackingField;
  *(_DWORD *)(v16 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v16 + 32) = 1;
  *(float *)(v16 + 28) = vabds_f32((float)Hp_k__BackingField, (float)v14) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField
    || (items = HpDetailList_k__BackingField->fields._items,
        v24 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++HpDetailList_k__BackingField->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C13F80(v10, v11);
  }
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v16,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v16;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 4), v16, v17, v18, v19, v20, v21, v22);
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