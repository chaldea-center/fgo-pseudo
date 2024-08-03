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
  struct BattleActionData_BaseShiftGaugeData_o *v5; // x8

  if ( (byte_49FA5A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int___, method);
    byte_49FA5A3 = 1;
  }
  shiftData = this->fields.shiftData;
  v4 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData
    || (BattleActionData_BaseShiftGaugeData__OffState(shiftData, v4, 0LL), (v5 = this->fields.shiftData) == 0LL) )
  {
    sub_1B64324(v4);
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    v5->fields._TargetId_k__BackingField,
    (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleAction_BasePlayShiftGauge__Init(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleActionData_BaseShiftGaugeData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.shiftData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
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
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x21
  __int64 v7; // x0

  this->fields.callBack = callBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callBack,
    (int32_t)callBack,
    (int32_t)callBack,
    (int32_t)method);
  shiftData = this->fields.shiftData;
  v7 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData )
    sub_1B64324(v7);
  BattleActionData_BaseShiftGaugeData__OnState(shiftData, v7, 0LL);
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

  if ( (byte_49FA5A9 & 1) == 0 )
  {
    sub_1B640C8(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v1);
    byte_49FA5A9 = 1;
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
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleServantHpShiftComponent_EffectData_o *v8; // x22
  const MethodInfo *v9; // x1
  float TotalMovePer; // s0
  BattleAction_PlayDownShiftGaugeMain_c *klass; // x8

  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer, BattleAction_ShiftHpData_o *, const MethodInfo *))shiftData->klass->vtable._5_unknown.method)(
                                                                      shiftData,
                                                                      shiftData->klass->vtable._6_GetBeforeEffectData.methodPtr,
                                                                      hpData,
                                                                      method),
        !hpData)
    || (v8 = (BattleServantHpShiftComponent_EffectData_o *)shiftData,
        shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *))hpData->klass[1]._1.gc_desc)(
                                                                      hpData,
                                                                      hpData->klass[1]._1.name),
        !comp) )
  {
    sub_1B64324(shiftData);
  }
  BattleServantParamComponent__PlayDownShiftEffect(comp, (int32_t)shiftData, v8, 0LL);
  TotalMovePer = BattleAction_ShiftHpData__get_TotalMovePer(hpData, v9);
  klass = this->klass;
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5 / TotalMovePer;
  ((void (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, Il2CppMethodPointer))klass->vtable._10_StartHpChangeGauge.method)(
    this,
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
  float EffectAnmDelayTime; // s8
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x8
  int32_t v14; // w22
  const MethodInfo *v15; // x2
  float v16; // s0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_object__object__o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  BattleCallBack_T1__T2__o *v22; // x21

  if ( (byte_49FA5A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, comp);
    sub_1B640C8(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v7);
    sub_1B640C8(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v8);
    sub_1B640C8(&Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__, v9);
    sub_1B640C8(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v10);
    byte_49FA5A8 = 1;
  }
  v11 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  if ( !BattleAction_PlayDownShiftGaugeMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    v11 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  }
  if ( !hpData
    || (EffectAnmDelayTime = v11->static_fields->EffectAnmDelayTime,
        v11 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *, BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass[1]._1.gc_desc)(
                                                         hpData,
                                                         hpData->klass[1]._1.name,
                                                         hpData,
                                                         method),
        (shiftData = this->fields.shiftData) == 0LL)
    || (v14 = (int)v11,
        v11 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftData->klass->vtable._6_GetBeforeEffectData.method)(
                                                         this->fields.shiftData,
                                                         shiftData->klass->vtable._7_unknown.methodPtr),
        !comp) )
  {
    sub_1B64324(v11);
  }
  v16 = BattleServantParamComponent__PlayShiftEffectGeneral(
          comp,
          v14,
          (BattleServantHpShiftComponent_EffectData_o *)v11,
          0LL);
  if ( v16 > 0.0 )
    EffectAnmDelayTime = v16;
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v15);
  v19 = (System_Action_object__object__o *)sub_1B64314(
                                             System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                             v17,
                                             v18);
  System_Action_object__object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__,
    0LL);
  v22 = (BattleCallBack_T1__T2__o *)sub_1B64314(
                                      BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                      v20,
                                      v21);
  BattleCallBack_object__object____ctor(
    v22,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v19,
    (const MethodInfo_304C6EC *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  BattleServantParamComponent__DelayCoroutine(comp, EffectAnmDelayTime, (BattleCallBackBase_o *)v22, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
  if ( !comp )
    goto LABEL_9;
  BattleServantParamComponent__UpdateShiftChange(comp, hpData->fields._CurGaugeIndex_k__BackingField, 0LL);
LABEL_8:
  BattleServantParamComponent__UpdateShiftGaugeChangeHp(
    comp,
    (int32_t)v7->fields.shiftData,
    HIDWORD(v7->fields.shiftData),
    (int32_t)v7->fields.callBack,
    v4[9] * *((float *)&v7->fields.callBack + 1),
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
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  __int64 v10; // x2

  shiftData = this->fields.shiftData;
  if ( !shiftData )
    sub_1B64324(0LL);
  HpData = BattleActionData_BaseShiftGaugeData__GetHpData(shiftData, 0LL);
  *(_QWORD *)&this->fields.hpGaugeSpeed = HpData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hpGaugeSpeed, (int32_t)HpData, v7, v8);
  v10 = *(_QWORD *)&this->fields.hpGaugeSpeed;
  if ( v10 )
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._8_PlayEffectMain.method)(
      this,
      comp,
      v10,
      this->klass->vtable._9_NextPlayEffect.methodPtr);
  else
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, v9);
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

  if ( (byte_49FA5A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__, comp);
    byte_49FA5A5 = 1;
  }
  v7 = Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__;
  if ( (*((_BYTE *)Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_BattleAction_PlayShiftGaugeMain_StartHpChangeGauge__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
  UnityEngine_Object_o *EnemySvtParamComponent; // x20
  const MethodInfo *v8; // x1

  if ( (byte_49FA5A4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, status);
    byte_49FA5A4 = 1;
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
    sub_1B64324(shiftData);
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
  if ( (byte_49FA5A7 & 1) == 0 )
  {
    this = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, comp);
    byte_49FA5A7 = 1;
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
    sub_1B64324(this);
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
  BattleServantHpShiftComponent_EffectData_o *v11; // x22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_object__object__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  BattleCallBack_T1__T2__o *v19; // x21

  if ( (byte_49FA5A6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, comp);
    sub_1B640C8(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v7);
    sub_1B640C8(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v8);
    sub_1B640C8(&Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__, v9);
    byte_49FA5A6 = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer, BattleAction_ShiftHpData_o *, const MethodInfo *))shiftData->klass->vtable._5_unknown.method)(
                                                                      shiftData,
                                                                      shiftData->klass->vtable._6_GetBeforeEffectData.methodPtr,
                                                                      hpData,
                                                                      method),
        !hpData)
    || (v11 = (BattleServantHpShiftComponent_EffectData_o *)shiftData,
        shiftData = (struct BattleActionData_BaseShiftGaugeData_o *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *))hpData->klass[1]._1.gc_desc)(
                                                                      hpData,
                                                                      hpData->klass[1]._1.name),
        !comp) )
  {
    sub_1B64324(shiftData);
  }
  BattleServantParamComponent__PlayUpShiftEffect(comp, (int32_t)shiftData, 1.5, v11, 0LL);
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v12);
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5
                                                            / BattleAction_ShiftHpData__get_TotalMovePer(hpData, v13);
  v16 = (System_Action_object__object__o *)sub_1B64314(
                                             System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                             v14,
                                             v15);
  System_Action_object__object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__,
    0LL);
  v19 = (BattleCallBack_T1__T2__o *)sub_1B64314(
                                      BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                      v17,
                                      v18);
  BattleCallBack_object__object____ctor(
    v19,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v16,
    (const MethodInfo_304C6EC *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  BattleServantParamComponent__DelayCoroutine(comp, 1.5, (BattleCallBackBase_o *)v19, 0LL);
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
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w24
  int32_t MaxHp_k__BackingField; // w25
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  int32_t v29; // w22
  __int64 v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49FA5A2 & 1) == 0 )
  {
    sub_1B640C8(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11);
    byte_49FA5A2 = 1;
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
  v18 = sub_1B64314(BattleAction_ShiftHpData_HpDetail_TypeInfo, v13, v14);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  *(_DWORD *)(v18 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v18 + 20) = 0;
  *(_DWORD *)(v18 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v18 + 32) = 0;
  *(float *)(v18 + 28) = vabds_f32(0.0, (float)Hp_k__BackingField) / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v22 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), v18, v19, v20);
  }
  if ( !curHp )
    goto LABEL_15;
  v27 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v29 = curHp->fields._Hp_k__BackingField;
  v28 = curHp->fields._MaxHp_k__BackingField;
  v30 = sub_1B64314(BattleAction_ShiftHpData_HpDetail_TypeInfo, v25, v26);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  *(_DWORD *)(v30 + 16) = v28;
  *(_DWORD *)(v30 + 20) = v29;
  *(_DWORD *)(v30 + 24) = v28;
  *(_BYTE *)(v30 + 32) = 1;
  *(float *)(v30 + 28) = vabds_f32((float)v29, (float)v28) / (float)v28;
  if ( !v27
    || (v33 = v27->fields._items,
        v34 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v27->fields._version,
        !v33) )
  {
LABEL_15:
    sub_1B64324(v12);
  }
  v35 = v27->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v30,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v27->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v30, v31, v32);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FA59E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__, *(_QWORD *)&curGaugeIndex);
    sub_1B640C8(&System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo, v7);
    byte_49FA59E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurGaugeIndex_k__BackingField = curGaugeIndex;
  this->fields._MaxGaugeIconIndex_k__BackingField = maxGaugeIconIndex;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
  this->fields._HpDetailList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._HpDetailList_k__BackingField, (int32_t)v10, v11, v12);
}


BattleAction_ShiftHpData_HpDetail_o *__fastcall BattleAction_ShiftHpData__GetHpDetail(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  int32_t hpDetailIndex; // w1
  System_Collections_Generic_List_T__o *HpDetailList_k__BackingField; // x0

  if ( (byte_49FA59F & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___, method);
    byte_49FA59F = 1;
  }
  hpDetailIndex = this->fields.hpDetailIndex;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._HpDetailList_k__BackingField;
  this->fields.hpDetailIndex = hpDetailIndex + 1;
  return (BattleAction_ShiftHpData_HpDetail_o *)BasicHelper__IndexValue_object__48398780(
                                                  HpDetailList_k__BackingField,
                                                  hpDetailIndex,
                                                  0LL,
                                                  (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
}


void __fastcall BattleAction_ShiftHpData__InitHpIndex(BattleAction_ShiftHpData_o *this, const MethodInfo *method)
{
  this->fields.hpDetailIndex = 0;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleAction_ShiftHpData___c_c *v7; // x0
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x19
  System_Func_T__TResult__o *_9__17_0; // x20
  Il2CppObject *v10; // x21
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0

  if ( (byte_49FA59D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___, method);
    sub_1B640C8(&System_Func_ShiftHpData_HpDetail__float__TypeInfo, v4);
    sub_1B640C8(&Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__, v5);
    sub_1B640C8(&BattleAction_ShiftHpData___c_TypeInfo, v6);
    byte_49FA59D = 1;
  }
  v7 = BattleAction_ShiftHpData___c_TypeInfo;
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  if ( !BattleAction_ShiftHpData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_ShiftHpData___c_TypeInfo);
    v7 = BattleAction_ShiftHpData___c_TypeInfo;
  }
  _9__17_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleAction_ShiftHpData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__17_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_ShiftHpData_HpDetail__float__TypeInfo, method, v2);
    System_Func_object__float____ctor(
      _9__17_0,
      v10,
      Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__,
      0LL);
    static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_ShiftHpData_HpDetail__float__o *)_9__17_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)HpDetailList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__17_0,
          (const MethodInfo_2E69710 *)Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
  return System_Linq_Enumerable__Sum_63594372((System_Collections_Generic_IEnumerable_float__o *)v14, 0LL);
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

  this->fields._HpDetailList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._HpDetailList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA5A0 & 1) == 0 )
  {
    sub_1B640C8(&BattleAction_ShiftHpData___c_TypeInfo, v1);
    byte_49FA5A0 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleAction_ShiftHpData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleAction_ShiftHpData___c_TypeInfo->static_fields->__9 = (struct BattleAction_ShiftHpData___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleAction_ShiftHpData___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *HpDetailList_k__BackingField; // x21
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w25
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  int32_t v29; // w22
  __int64 v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49FA5A1 & 1) == 0 )
  {
    sub_1B640C8(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11);
    byte_49FA5A1 = 1;
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
  v18 = sub_1B64314(BattleAction_ShiftHpData_HpDetail_TypeInfo, v13, v14);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  *(_DWORD *)(v18 + 16) = Hp_k__BackingField;
  *(_DWORD *)(v18 + 20) = MaxHp_k__BackingField;
  *(_DWORD *)(v18 + 24) = MaxHp_k__BackingField;
  *(_BYTE *)(v18 + 32) = 0;
  *(float *)(v18 + 28) = vabds_f32((float)MaxHp_k__BackingField, (float)Hp_k__BackingField)
                       / (float)MaxHp_k__BackingField;
  if ( !HpDetailList_k__BackingField )
    goto LABEL_15;
  items = HpDetailList_k__BackingField->fields._items;
  v22 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__;
  ++HpDetailList_k__BackingField->fields._version;
  if ( !items )
    goto LABEL_15;
  size = HpDetailList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      HpDetailList_k__BackingField,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    HpDetailList_k__BackingField->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), v18, v19, v20);
  }
  if ( !curHp )
    goto LABEL_15;
  v27 = (System_Collections_Generic_List_object__o *)this->fields._HpDetailList_k__BackingField;
  v28 = curHp->fields._Hp_k__BackingField;
  v29 = curHp->fields._MaxHp_k__BackingField;
  v30 = sub_1B64314(BattleAction_ShiftHpData_HpDetail_TypeInfo, v25, v26);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  *(_DWORD *)(v30 + 16) = 0;
  *(_DWORD *)(v30 + 20) = v28;
  *(_DWORD *)(v30 + 24) = v29;
  *(_BYTE *)(v30 + 32) = 1;
  *(float *)(v30 + 28) = fabsf((float)v28) / (float)v29;
  if ( !v27
    || (v33 = v27->fields._items,
        v34 = Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__,
        ++v27->fields._version,
        !v33) )
  {
LABEL_15:
    sub_1B64324(v12);
  }
  v35 = v27->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v30,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v27->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v30, v31, v32);
  }
}


int32_t __fastcall BattleAction_ShiftUpHpData__get_PlayGaugeIndex(
        BattleAction_ShiftUpHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField - 1;
}