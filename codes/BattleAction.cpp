void BattleAction_BasePlayShiftGauge___ctor(BattleAction_BasePlayShiftGauge_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleAction_BasePlayShiftGauge__End(BattleAction_BasePlayShiftGauge_o *this, const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct BattleActionData_BaseShiftGaugeData_o *v6; // x8

  if ( (byte_4C2516A & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C2516A = 1;
  }
  shiftData = this->fields.shiftData;
  v4 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !shiftData
    || (BattleActionData_BaseShiftGaugeData__OffState(shiftData, v4, 0), (v6 = this->fields.shiftData) == 0) )
  {
    sub_1C2D6EC(v4, v5);
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    v6->fields._TargetId_k__BackingField,
    (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
}


BattleAction_BasePlayShiftGauge_o *BattleAction_BasePlayShiftGauge__Init(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleActionData_BaseShiftGaugeData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.shiftData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  return this;
}


void BattleAction_BasePlayShiftGauge__OnCompleteChangeHp(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  ;
}


void BattleAction_BasePlayShiftGauge__Start(
        BattleAction_BasePlayShiftGauge_o *this,
        BattlePerformanceStatus_o *status,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  this->fields.callBack = callBack;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callBack, (int32_t)callBack, (int32_t)callBack, method);
  shiftData = this->fields.shiftData;
  v7 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  if ( !shiftData )
    sub_1C2D6EC(v7, v8);
  BattleActionData_BaseShiftGaugeData__OnState(shiftData, v7, 0);
  ((void (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, BattlePerformanceStatus_o *, const MethodInfo *))this->klass->vtable._5_StartPlayEffect.methodPtr)(
    this,
    status,
    this->klass->vtable._5_StartPlayEffect.method);
}


void BattleAction_BasePlayShiftGauge__StartPlayEffect(
        BattleAction_BasePlayShiftGauge_o *this,
        BattlePerformanceStatus_o *status,
        const MethodInfo *method)
{
  ;
}


int32_t BattleAction_BasePlayShiftGauge__get_ChangeToHp(
        BattleAction_BasePlayShiftGauge_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeToHp_k__BackingField;
}


void BattleAction_BasePlayShiftGauge__set_ChangeToHp(
        BattleAction_BasePlayShiftGauge_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ChangeToHp_k__BackingField = value;
}


void BattleAction_PlayDownShiftGaugeMain___cctor(const MethodInfo *method)
{
  if ( (byte_4C25170 & 1) == 0 )
  {
    sub_1C2D490(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_4C25170 = 1;
  }
  LODWORD(BattleAction_PlayDownShiftGaugeMain_TypeInfo->static_fields->EffectAnmDelayTime) = (struct BattleAction_PlayDownShiftGaugeMain_StaticFields)1057518256;
}


void BattleAction_PlayDownShiftGaugeMain___ctor(BattleAction_PlayDownShiftGaugeMain_o *this, const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleAction_PlayDownShiftGaugeMain__DelayPlayDownShiftEffect(
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
  if ( (((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr)(
          hpData,
          hpData->klass->vtable._5_IsPlayShiftEffect.method)
      & 1) != 0 )
  {
    this = (BattleAction_PlayDownShiftGaugeMain_o *)v5->fields.shiftData;
    if ( this )
    {
      v7 = (BattleServantHpShiftComponent_EffectData_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, const MethodInfo *))this->klass->vtable._5_StartPlayEffect.methodPtr)(
                                                           this,
                                                           this->klass->vtable._5_StartPlayEffect.method);
      this = (BattleAction_PlayDownShiftGaugeMain_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._4_unknown.methodPtr)(
                                                        hpData,
                                                        hpData->klass->vtable._4_unknown.method);
      if ( comp )
      {
        BattleServantParamComponent__PlayDownShiftEffect(comp, (int32_t)this, v7, 0);
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_1C2D6EC(this, comp);
  }
LABEL_6:
  TotalMovePer = BattleAction_ShiftHpData__get_TotalMovePer(hpData, (const MethodInfo *)comp);
  klass = v5->klass;
  *((float *)&v5->fields._ChangeToHp_k__BackingField + 1) = 1.5 / TotalMovePer;
  ((void (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, const MethodInfo *))klass->vtable._10_StartHpChangeGauge.methodPtr)(
    v5,
    comp,
    hpData,
    klass->vtable._10_StartHpChangeGauge.method);
}


void BattleAction_PlayDownShiftGaugeMain__PlayEffectMain(
        BattleAction_PlayDownShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_c *v7; // x0
  float EffectAnmDelayTime; // s9
  float v9; // s8
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x8
  int32_t v11; // w22
  const MethodInfo *v12; // x2
  float v13; // s0
  System_Action_object__object__o *v14; // x22
  BattleCallBack_T1__T2__o *v15; // x21

  if ( (byte_4C2516F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_1C2D490(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
    sub_1C2D490(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_1C2D490(&Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__);
    sub_1C2D490(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_4C2516F = 1;
  }
  v7 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  if ( !BattleAction_PlayDownShiftGaugeMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    v7 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  }
  if ( !hpData )
    goto LABEL_15;
  EffectAnmDelayTime = v7->static_fields->EffectAnmDelayTime;
  v9 = 0.0;
  if ( (((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const MethodInfo *, BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr)(
          hpData,
          hpData->klass->vtable._5_IsPlayShiftEffect.method,
          hpData,
          method)
      & 1) == 0 )
    goto LABEL_13;
  v7 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._4_unknown.methodPtr)(
                                                  hpData,
                                                  hpData->klass->vtable._4_unknown.method);
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (v11 = (int)v7,
        v7 = (BattleAction_PlayDownShiftGaugeMain_c *)((BattleAction_PlayDownShiftGaugeMain_c *(__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *__return_ptr, struct BattleActionData_BaseShiftGaugeData_o *, const MethodInfo *))shiftData->klass->vtable._6_GetBeforeEffectData.methodPtr)(
                                                        shiftData,
                                                        this->fields.shiftData,
                                                        shiftData->klass->vtable._6_GetBeforeEffectData.method),
        !comp) )
  {
LABEL_15:
    sub_1C2D6EC(v7, comp);
  }
  v13 = BattleServantParamComponent__PlayShiftEffectGeneral(
          comp,
          v11,
          (BattleServantHpShiftComponent_EffectData_o *)v7,
          0);
  if ( v13 <= 0.0 )
    v9 = EffectAnmDelayTime;
  else
    v9 = v13;
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v12);
LABEL_13:
  v14 = (System_Action_object__object__o *)sub_1C2D6DC(System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
  System_Action_object__object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__,
    0);
  v15 = (BattleCallBack_T1__T2__o *)sub_1C2D6DC(BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
  BattleCallBack_object__object____ctor(
    v15,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v14,
    (const MethodInfo_32FE51C *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  if ( !comp )
    goto LABEL_15;
  BattleServantParamComponent__DelayCoroutine(comp, v9, (BattleCallBackBase_o *)v15, 0);
}


void BattleAction_PlayShiftGaugeMain___ctor(BattleAction_PlayShiftGaugeMain_o *this, const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleAction_PlayShiftGaugeMain__InitNextTdGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  BattleAction_PlayShiftGaugeMain_o *v3; // x19

  if ( !comp
    || (v3 = this,
        BattleServantParamComponent__InitNextTdGauge(comp, 0),
        (this = (BattleAction_PlayShiftGaugeMain_o *)v3->fields.shiftData) == 0) )
  {
    sub_1C2D6EC(this, comp);
  }
  BattleActionData_BaseShiftGaugeData__OnNotUpdateState((BattleActionData_BaseShiftGaugeData_o *)this, 1, 0);
}


void BattleAction_PlayShiftGaugeMain__NextHpChangeGauge(
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
    sub_1C2D6EC(this, comp);
  }
  if ( !comp )
    goto LABEL_9;
  BattleServantParamComponent__UpdateShiftChange(comp, hpData->fields._CurGaugeIndex_k__BackingField, 0);
LABEL_8:
  BattleServantParamComponent__SetBreakSpriteDisplay(comp, 0, 0);
  BattleServantParamComponent__UpdateShiftGaugeChangeHp(
    comp,
    (int32_t)v7->fields.shiftData,
    HIDWORD(v7->fields.shiftData),
    (int32_t)v7->fields.callBack,
    *((float *)&v7->fields.callBack + 1) * v4[9],
    (BattleAction_BasePlayShiftGauge_o *)v4,
    0);
}


void BattleAction_PlayShiftGaugeMain__NextPlayEffect(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleAction_ShiftHpData_o *HpData; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  __int64 v10; // x2

  shiftData = this->fields.shiftData;
  if ( !shiftData )
    sub_1C2D6EC(0, comp);
  HpData = BattleActionData_BaseShiftGaugeData__GetHpData(shiftData, 0);
  *(_QWORD *)&this->fields.hpGaugeSpeed = HpData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.hpGaugeSpeed, (int32_t)HpData, v7, v8);
  v10 = *(_QWORD *)&this->fields.hpGaugeSpeed;
  if ( v10 )
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, __int64, const MethodInfo *))this->klass->vtable._8_PlayEffectMain.methodPtr)(
      this,
      comp,
      v10,
      this->klass->vtable._8_PlayEffectMain.method);
  else
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, v9);
}


void BattleAction_PlayShiftGaugeMain__OnCompleteChangeHp(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_NextHpChangeGauge.methodPtr)(
    this,
    comp,
    *(_QWORD *)&this->fields.hpGaugeSpeed,
    this->klass->vtable._11_NextHpChangeGauge.method);
}


void BattleAction_PlayShiftGaugeMain__PlayEffectMain(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  ;
}


void BattleAction_PlayShiftGaugeMain__StartHpChangeGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C2516C & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__);
    byte_4C2516C = 1;
  }
  v7 = Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__;
  if ( (*((_BYTE *)Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C2D4A8(Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe(v8, 16, 0, 0);
  ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, const MethodInfo *))this->klass->vtable._11_NextHpChangeGauge.methodPtr)(
    this,
    comp,
    hpData,
    this->klass->vtable._11_NextHpChangeGauge.method);
}


void BattleAction_PlayShiftGaugeMain__StartPlayEffect(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattlePerformanceStatus_o *status,
        const MethodInfo *method)
{
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  struct BattleActionData_BaseShiftGaugeData_o *v6; // x8
  UnityEngine_Object_o *EnemySvtParamComponent; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C2516B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2516B = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, const MethodInfo *, const MethodInfo *))shiftData->klass->vtable._13_InitShiftHpPos.methodPtr)(
                                                                      shiftData,
                                                                      shiftData->klass->vtable._13_InitShiftHpPos.method,
                                                                      method),
        (v6 = this->fields.shiftData) == 0)
    || !status )
  {
    sub_1C2D6EC(shiftData, status);
  }
  EnemySvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceStatus__GetEnemySvtParamComponent(
                                                     status,
                                                     v6->fields._TargetId_k__BackingField,
                                                     0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(EnemySvtParamComponent, 0, 0) )
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, v8);
  else
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, UnityEngine_Object_o *, const MethodInfo *))this->klass->vtable._9_NextPlayEffect.methodPtr)(
      this,
      EnemySvtParamComponent,
      this->klass->vtable._9_NextPlayEffect.method);
}


int32_t BattleAction_PlayShiftGaugeMain__get_PlayedFlag(
        BattleAction_PlayShiftGaugeMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


void BattleAction_PlayUpShiftGaugeUpMain___ctor(BattleAction_PlayUpShiftGaugeUpMain_o *this, const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleAction_PlayUpShiftGaugeUpMain__DelayStartHpChangeGauge(
        BattleAction_PlayUpShiftGaugeUpMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v6; // x21
  UnityEngine_Object_o *hpShift; // x22

  v6 = this;
  if ( (byte_4C2516E & 1) == 0 )
  {
    this = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2516E = 1;
  }
  if ( !comp )
    goto LABEL_12;
  hpShift = (UnityEngine_Object_o *)comp->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleAction_PlayUpShiftGaugeUpMain_o *)UnityEngine_Object__op_Inequality(hpShift, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( hpData && hpShift )
    {
      if ( !BattleServantHpShiftComponent__IsIconActive(
              (BattleServantHpShiftComponent_o *)hpShift,
              hpData->fields._MaxGaugeIconIndex_k__BackingField,
              0) )
        BattleServantHpShiftComponent__UpdateIcon(
          (BattleServantHpShiftComponent_o *)hpShift,
          hpData->fields._MaxGaugeIconIndex_k__BackingField,
          1,
          1,
          0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C2D6EC(this, comp);
  }
LABEL_11:
  ((void (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, const MethodInfo *))v6->klass->vtable._10_StartHpChangeGauge.methodPtr)(
    v6,
    comp,
    hpData,
    v6->klass->vtable._10_StartHpChangeGauge.method);
}


void BattleAction_PlayUpShiftGaugeUpMain__PlayEffectMain(
        BattleAction_PlayUpShiftGaugeUpMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleServantHpShiftComponent_EffectData_o *v8; // x23
  const MethodInfo *v9; // x2
  char v10; // w22
  const MethodInfo *v11; // x1
  System_Action_object__object__o *v12; // x23
  BattleCallBack_T1__T2__o *v13; // x21
  float v14; // s0

  if ( (byte_4C2516D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_1C2D490(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
    sub_1C2D490(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_1C2D490(&Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__);
    byte_4C2516D = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData )
    goto LABEL_12;
  shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, const MethodInfo *, BattleAction_ShiftHpData_o *, const MethodInfo *))shiftData->klass->vtable._5_unknown.methodPtr)(
                                                                shiftData,
                                                                shiftData->klass->vtable._5_unknown.method,
                                                                hpData,
                                                                method);
  if ( !hpData )
    goto LABEL_12;
  v8 = (BattleServantHpShiftComponent_EffectData_o *)shiftData;
  v10 = ((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._5_IsPlayShiftEffect.methodPtr)(
          hpData,
          hpData->klass->vtable._5_IsPlayShiftEffect.method);
  if ( (v10 & 1) != 0 )
  {
    shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass->vtable._4_unknown.methodPtr)(
                                                                  hpData,
                                                                  hpData->klass->vtable._4_unknown.method);
    if ( !comp )
      goto LABEL_12;
    BattleServantParamComponent__PlayUpShiftEffect(comp, (int32_t)shiftData, 1.5, v8, 0);
  }
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v9);
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5
                                                            / BattleAction_ShiftHpData__get_TotalMovePer(hpData, v11);
  v12 = (System_Action_object__object__o *)sub_1C2D6DC(System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
  System_Action_object__object____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__,
    0);
  v13 = (BattleCallBack_T1__T2__o *)sub_1C2D6DC(BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
  BattleCallBack_object__object____ctor(
    v13,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v12,
    (const MethodInfo_32FE51C *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  if ( !comp )
LABEL_12:
    sub_1C2D6EC(shiftData, comp);
  v14 = 0.0;
  if ( (v10 & 1) != 0 )
    v14 = 1.5;
  BattleServantParamComponent__DelayCoroutine(comp, v14, (BattleCallBackBase_o *)v13, 0);
}


void BattleAction_ShiftDownHpData___ctor(
        BattleAction_ShiftDownHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w24
  int32_t MaxHp_k__BackingField; // w25
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w21
  int32_t v25; // w22
  __int64 v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4C25168 & 1) == 0 )
  {
    sub_1C2D490(&BattleAction_ShiftHpData_HpDetail_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
    byte_4C25168 = 1;
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
  v16 = sub_1C2D6DC(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(_DWORD *)(v16 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v16 + 20) = 0;
  *(_DWORD *)(v16 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v16 + 32) = 0;
  *(float *)(v16 + 28) = vabds_f32(0.0, (float)Hp_k__BackingField) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v20 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v16,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v16;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), v16, v17, v18);
  }
  if ( !curHp )
    goto LABEL_15;
  v23 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v25 = curHp->fields._Hp_k__BackingField;
  v24 = curHp->fields._MaxHp_k__BackingField;
  v26 = sub_1C2D6DC(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  *(_DWORD *)(v26 + 16) = v24;
  *(_DWORD *)(v26 + 20) = v25;
  *(_DWORD *)(v26 + 24) = v24;
  *(_BYTE *)(v26 + 32) = 1;
  *(float *)(v26 + 28) = vabds_f32((float)v25, (float)v24) / (float)v24;
  if ( !v23
    || (v29 = v23->fields._items,
        v30 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v23->fields._version,
        !v29) )
  {
LABEL_15:
    sub_1C2D6EC(v11, v12);
  }
  v31 = v23->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v26,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v23->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v26;
    sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), v26, v27, v28);
  }
}


int32_t BattleAction_ShiftDownHpData__get_PlayGaugeIndex(
        BattleAction_ShiftDownHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}


void BattleAction_ShiftHpData___ctor(
        BattleAction_ShiftHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C25164 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo);
    byte_4C25164 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._CurGaugeIndex_k__BackingField = curGaugeIndex;
  this->fields._MaxGaugeIconIndex_k__BackingField = maxGaugeIconIndex;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
  this->fields._HpDetailList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._HpDetailList_k__BackingField, (int32_t)v7, v8, v9);
}


BattleAction_ShiftHpData_HpDetail_o *BattleAction_ShiftHpData__GetHpDetail(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  int32_t hpDetailIndex; // w1
  System_Collections_Generic_List_T__o *HpDetailList_k__BackingField; // x0

  if ( (byte_4C25165 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
    byte_4C25165 = 1;
  }
  hpDetailIndex = this->fields.hpDetailIndex;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._HpDetailList_k__BackingField;
  this->fields.hpDetailIndex = hpDetailIndex + 1;
  return (BattleAction_ShiftHpData_HpDetail_o *)BasicHelper__IndexValue_object__51105396(
                                                  HpDetailList_k__BackingField,
                                                  hpDetailIndex,
                                                  0,
                                                  (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
}


void BattleAction_ShiftHpData__InitHpIndex(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  this->fields.hpDetailIndex = 0;
}


bool BattleAction_ShiftHpData__IsPlayShiftEffect(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t BattleAction_ShiftHpData__get_CurGaugeIndex(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}


System_Collections_Generic_List_ShiftHpData_HpDetail__o *BattleAction_ShiftHpData__get_HpDetailList(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._HpDetailList_k__BackingField;
}


int32_t BattleAction_ShiftHpData__get_MaxGaugeIconIndex(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  return this->fields._MaxGaugeIconIndex_k__BackingField;
}


float BattleAction_ShiftHpData__get_TotalMovePer(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  BattleAction_ShiftHpData___c_c *v3; // x0
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x19
  System_Func_T__TResult__o *_9__17_0; // x20
  Il2CppObject *v6; // x21
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0

  if ( (byte_4C25163 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
    sub_1C2D490(&System_Func_ShiftHpData_HpDetail__float__TypeInfo);
    sub_1C2D490(&Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__);
    sub_1C2D490(&BattleAction_ShiftHpData___c_TypeInfo);
    byte_4C25163 = 1;
  }
  v3 = BattleAction_ShiftHpData___c_TypeInfo;
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  if ( !BattleAction_ShiftHpData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_ShiftHpData___c_TypeInfo);
    v3 = BattleAction_ShiftHpData___c_TypeInfo;
  }
  _9__17_0 = (System_Func_T__TResult__o *)v3->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleAction_ShiftHpData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__17_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_ShiftHpData_HpDetail__float__TypeInfo);
    System_Func_object__float____ctor(_9__17_0, v6, Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__, 0);
    static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_ShiftHpData_HpDetail__float__o *)_9__17_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)HpDetailList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__17_0,
          (const MethodInfo_3105968 *)Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
  return System_Linq_Enumerable__Sum_66455804((System_Collections_Generic_IEnumerable_float__o *)v10, 0);
}


void BattleAction_ShiftHpData__set_CurGaugeIndex(
        BattleAction_ShiftHpData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CurGaugeIndex_k__BackingField = value;
}


void BattleAction_ShiftHpData__set_HpDetailList(
        BattleAction_ShiftHpData_o *this,
        System_Collections_Generic_List_ShiftHpData_HpDetail__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._HpDetailList_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._HpDetailList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleAction_ShiftHpData__set_MaxGaugeIconIndex(
        BattleAction_ShiftHpData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxGaugeIconIndex_k__BackingField = value;
}


void BattleAction_ShiftHpData_HpDetail___ctor(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t startHp,
        int32_t endHp,
        int32_t maxHp,
        bool isHpChange,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._StartHp_k__BackingField = startHp;
  this->fields._EndHp_k__BackingField = endHp;
  this->fields._MaxHp_k__BackingField = maxHp;
  this->fields._IsHpChange_k__BackingField = isHpChange;
  this->fields._MovePer_k__BackingField = vabds_f32((float)endHp, (float)startHp) / (float)maxHp;
}


int32_t BattleAction_ShiftHpData_HpDetail__get_EndHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._EndHp_k__BackingField;
}


bool BattleAction_ShiftHpData_HpDetail__get_IsHpChange(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._IsHpChange_k__BackingField;
}


int32_t BattleAction_ShiftHpData_HpDetail__get_MaxHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._MaxHp_k__BackingField;
}


float BattleAction_ShiftHpData_HpDetail__get_MovePer(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._MovePer_k__BackingField;
}


int32_t BattleAction_ShiftHpData_HpDetail__get_StartHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        const MethodInfo *method)
{
  return this->fields._StartHp_k__BackingField;
}


void BattleAction_ShiftHpData_HpDetail__set_EndHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EndHp_k__BackingField = value;
}


void BattleAction_ShiftHpData_HpDetail__set_IsHpChange(
        BattleAction_ShiftHpData_HpDetail_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsHpChange_k__BackingField = value;
}


void BattleAction_ShiftHpData_HpDetail__set_MaxHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxHp_k__BackingField = value;
}


void BattleAction_ShiftHpData_HpDetail__set_MovePer(
        BattleAction_ShiftHpData_HpDetail_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._MovePer_k__BackingField = value;
}


void BattleAction_ShiftHpData_HpDetail__set_StartHp(
        BattleAction_ShiftHpData_HpDetail_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._StartHp_k__BackingField = value;
}


void BattleAction_ShiftHpData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C25166 & 1) == 0 )
  {
    sub_1C2D490(&BattleAction_ShiftHpData___c_TypeInfo);
    byte_4C25166 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleAction_ShiftHpData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleAction_ShiftHpData___c_TypeInfo->static_fields->__9 = (struct BattleAction_ShiftHpData___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleAction_ShiftHpData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleAction_ShiftHpData___c___ctor(BattleAction_ShiftHpData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float BattleAction_ShiftHpData___c___get_TotalMovePer_b__17_0(
        BattleAction_ShiftHpData___c_o *this,
        BattleAction_ShiftHpData_HpDetail_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields._MovePer_k__BackingField;
}


void BattleAction_ShiftUpHpData___ctor(
        BattleAction_ShiftUpHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w25
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w21
  int32_t v25; // w22
  __int64 v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4C25167 & 1) == 0 )
  {
    sub_1C2D490(&BattleAction_ShiftHpData_HpDetail_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
    byte_4C25167 = 1;
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
  v16 = sub_1C2D6DC(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(_DWORD *)(v16 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v16 + 20) = MaxHp_k__BackingField;
  *(_DWORD *)(v16 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v16 + 32) = 0;
  *(float *)(v16 + 28) = vabds_f32((float)MaxHp_k__BackingField, (float)Hp_k__BackingField)
                       / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v20 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v16,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v16;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), v16, v17, v18);
  }
  if ( !curHp )
    goto LABEL_15;
  v23 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v24 = curHp->fields._Hp_k__BackingField;
  v25 = curHp->fields._MaxHp_k__BackingField;
  v26 = sub_1C2D6DC(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  *(_DWORD *)(v26 + 16) = 0;
  *(_DWORD *)(v26 + 20) = v24;
  *(_DWORD *)(v26 + 24) = v25;
  *(_BYTE *)(v26 + 32) = 1;
  *(float *)(v26 + 28) = fabsf((float)v24) / (float)v25;
  if ( !v23
    || (v29 = v23->fields._items,
        v30 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v23->fields._version,
        !v29) )
  {
LABEL_15:
    sub_1C2D6EC(v11, v12);
  }
  v31 = v23->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v26,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v23->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v26;
    sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), v26, v27, v28);
  }
}


int32_t BattleAction_ShiftUpHpData__get_PlayGaugeIndex(BattleAction_ShiftUpHpData_o *this, const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField - 1;
}


void BattleAction_UpHpDataBeforeShift___ctor(
        BattleAction_UpHpDataBeforeShift_o *this,
        int32_t curGaugeIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x19
  int32_t Hp_k__BackingField; // w21
  int32_t v13; // w22
  int32_t MaxHp_k__BackingField; // w23
  __int64 v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C25169 & 1) == 0 )
  {
    sub_1C2D490(&BattleAction_ShiftHpData_HpDetail_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
    byte_4C25169 = 1;
  }
  BattleAction_ShiftHpData___ctor((BattleAction_ShiftHpData_o *)this, curGaugeIndex, -1, (const MethodInfo *)curHp);
  if ( !prevHp )
    goto LABEL_10;
  if ( !curHp )
    goto LABEL_10;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = curHp->fields._Hp_k__BackingField;
  v13 = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v15 = sub_1C2D6DC(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = v13;
  *(_DWORD *)(v15 + 20) = Hp_k__BackingField;
  *(_DWORD *)(v15 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v15 + 32) = 1;
  *(float *)(v15 + 28) = vabds_f32((float)Hp_k__BackingField, (float)v13) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField
    || (items = HpDetailList_k__BackingField->fields._items,
        v19 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++HpDetailList_k__BackingField->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C2D6EC(v9, v10);
  }
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v15,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v15;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), v15, v16, v17);
  }
}


bool BattleAction_UpHpDataBeforeShift__IsPlayShiftEffect(
        BattleAction_UpHpDataBeforeShift_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t BattleAction_UpHpDataBeforeShift__get_PlayGaugeIndex(
        BattleAction_UpHpDataBeforeShift_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}