void __fastcall BattleAction_BasePlayShiftGauge___ctor(
        BattleAction_BasePlayShiftGauge_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAction_BasePlayShiftGauge__End(BattleAction_BasePlayShiftGauge_o *this, const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x20
  int32_t v4; // w0
  struct BattleActionData_BaseShiftGaugeData_o *v5; // x8

  if ( (byte_40F6F11 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, method);
    byte_40F6F11 = 1;
  }
  shiftData = this->fields.shiftData;
  v4 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData
    || (BattleActionData_BaseShiftGaugeData__OffState(shiftData, v4, 0LL), (v5 = this->fields.shiftData) == 0LL) )
  {
    sub_B170D4();
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    v5->fields._TargetId_k__BackingField,
    (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleAction_BasePlayShiftGauge__Init(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleActionData_BaseShiftGaugeData_o *data,
        const MethodInfo *method)
{
  this->fields.shiftData = data;
  sub_B16F98(&this->fields, data);
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
  long double v6; // q0
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x21
  int32_t v8; // w0

  this->fields.callBack = callBack;
  *(__n128 *)&v6 = sub_B16F98(&this->fields.callBack, callBack);
  shiftData = this->fields.shiftData;
  v8 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr,
         v6);
  if ( !shiftData )
    sub_B170D4();
  BattleActionData_BaseShiftGaugeData__OnState(shiftData, v8, 0LL);
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

  if ( (byte_40F8F6A & 1) == 0 )
  {
    sub_B16FFC(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v1);
    byte_40F8F6A = 1;
  }
  LODWORD(BattleAction_PlayDownShiftGaugeMain_TypeInfo->static_fields->EffectAnmDelayTime) = (struct BattleAction_PlayDownShiftGaugeMain_StaticFields)1057518256;
}


void __fastcall BattleAction_PlayDownShiftGaugeMain___ctor(
        BattleAction_PlayDownShiftGaugeMain_o *this,
        const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  BattleAction_BasePlayShiftGauge___ctor((BattleAction_BasePlayShiftGauge_o *)this, 0LL);
}


void __fastcall BattleAction_PlayDownShiftGaugeMain__DelayPlayDownShiftEffect(
        BattleAction_PlayDownShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  __int64 v8; // x0
  BattleServantHpShiftComponent_EffectData_o *v9; // x22
  int32_t v10; // w0
  float TotalMovePer; // s0
  BattleAction_PlayDownShiftGaugeMain_c *klass; // x8

  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (v8 = ((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer, BattleAction_ShiftHpData_o *, const MethodInfo *))shiftData->klass->vtable._5_unknown.method)(
               shiftData,
               shiftData->klass->vtable._6_GetBeforeEffectData.methodPtr,
               hpData,
               method),
        !hpData)
    || (v9 = (BattleServantHpShiftComponent_EffectData_o *)v8,
        v10 = ((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *))hpData->klass[1]._1.gc_desc)(
                hpData,
                hpData->klass[1]._1.name),
        !comp) )
  {
    sub_B170D4();
  }
  BattleServantParamComponent__PlayDownShiftEffect(comp, v10, v9, 0LL);
  TotalMovePer = BattleAction_ShiftHpData__get_TotalMovePer(hpData, 0LL);
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
  __int64 v11; // x1
  BattleAction_PlayDownShiftGaugeMain_c *v12; // x0
  float EffectAnmDelayTime; // s8
  int32_t v14; // w0
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x8
  int32_t v16; // w22
  BattleServantHpShiftComponent_EffectData_o *v17; // x0
  const MethodInfo *v18; // x2
  float v19; // s0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleCallBack_T1__T2__o *v29; // x21

  if ( (byte_40F8F69 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__, comp);
    sub_B16FFC(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, v7);
    sub_B16FFC(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v8);
    sub_B16FFC(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__, v10);
    sub_B16FFC(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, v11);
    byte_40F8F69 = 1;
  }
  v12 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  if ( (BYTE3(BattleAction_PlayDownShiftGaugeMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAction_PlayDownShiftGaugeMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    v12 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  }
  if ( !hpData
    || (EffectAnmDelayTime = v12->static_fields->EffectAnmDelayTime,
        v14 = ((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *, BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass[1]._1.gc_desc)(
                hpData,
                hpData->klass[1]._1.name,
                hpData,
                method),
        (shiftData = this->fields.shiftData) == 0LL)
    || (v16 = v14,
        v17 = (BattleServantHpShiftComponent_EffectData_o *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftData->klass->vtable._6_GetBeforeEffectData.method)(
                                                              this->fields.shiftData,
                                                              shiftData->klass->vtable._7_unknown.methodPtr),
        !comp) )
  {
    sub_B170D4();
  }
  v19 = BattleServantParamComponent__PlayShiftEffectGeneral(comp, v16, v17, 0LL);
  if ( v19 > 0.0 )
    EffectAnmDelayTime = v19;
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v18);
  v24 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B170CC(
                                                                           System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                                                           v20,
                                                                           v21,
                                                                           v22,
                                                                           v23);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v24,
    (Il2CppObject *)this,
    Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__,
    (const MethodInfo_24C4F70 *)Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__);
  v29 = (BattleCallBack_T1__T2__o *)sub_B170CC(
                                      BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                      v25,
                                      v26,
                                      v27,
                                      v28);
  BattleCallBack_object__object____ctor(
    v29,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v24,
    (const MethodInfo_2D33F9C *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  BattleServantParamComponent__DelayCoroutine(comp, EffectAnmDelayTime, (BattleCallBackBase_o *)v29, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain___ctor(
        BattleAction_PlayShiftGaugeMain_o *this,
        const MethodInfo *method)
{
  *(&this->fields._ChangeToHp_k__BackingField + 1) = 1036831949;
  BattleAction_BasePlayShiftGauge___ctor((BattleAction_BasePlayShiftGauge_o *)this, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__InitNextTdGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x0

  if ( !comp || (BattleServantParamComponent__InitNextTdGauge(comp, 0LL), (shiftData = this->fields.shiftData) == 0LL) )
    sub_B170D4();
  BattleActionData_BaseShiftGaugeData__OnNotUpdateState(shiftData, 1, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__NextHpChangeGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  BattleAction_ShiftHpData_HpDetail_o *HpDetail; // x0
  BattleAction_ShiftHpData_HpDetail_o *v8; // x21

  if ( !hpData )
    goto LABEL_9;
  HpDetail = BattleAction_ShiftHpData__GetHpDetail(hpData, 0LL);
  if ( !HpDetail )
  {
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, Il2CppMethodPointer))this->klass->vtable._9_NextPlayEffect.method)(
      this,
      comp,
      this->klass->vtable._10_StartHpChangeGauge.methodPtr);
    return;
  }
  v8 = HpDetail;
  if ( !HpDetail->fields._IsHpChange_k__BackingField )
  {
    if ( comp )
      goto LABEL_8;
LABEL_9:
    sub_B170D4();
  }
  if ( !comp )
    goto LABEL_9;
  BattleServantParamComponent__UpdateShiftChange(comp, hpData->fields._CurGaugeIndex_k__BackingField, 0LL);
LABEL_8:
  BattleServantParamComponent__UpdateShiftGaugeChangeHp(
    comp,
    v8->fields._StartHp_k__BackingField,
    v8->fields._EndHp_k__BackingField,
    v8->fields._MaxHp_k__BackingField,
    *((float *)&this->fields._ChangeToHp_k__BackingField + 1) * v8->fields._MovePer_k__BackingField,
    (BattleAction_BasePlayShiftGauge_o *)this,
    0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__NextPlayEffect(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  System_Int32_array **HpData; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x2

  shiftData = this->fields.shiftData;
  if ( !shiftData )
    sub_B170D4();
  HpData = (System_Int32_array **)BattleActionData_BaseShiftGaugeData__GetHpData(shiftData, 0LL);
  *(_QWORD *)&this->fields.hpGaugeSpeed = HpData;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.hpGaugeSpeed, HpData, v7, v8, v9, v10, v11, v12);
  v13 = *(_QWORD *)&this->fields.hpGaugeSpeed;
  if ( v13 )
    ((void (__fastcall *)(BattleAction_PlayShiftGaugeMain_o *, BattleServantParamComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._8_PlayEffectMain.method)(
      this,
      comp,
      v13,
      this->klass->vtable._9_NextPlayEffect.methodPtr);
  else
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, 0LL);
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
  if ( (byte_40F8F9B & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, comp);
    byte_40F8F9B = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(16, 0LL);
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

  if ( (byte_40F8F9A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, status);
    byte_40F8F9A = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (((void (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, void *, const MethodInfo *))shiftData->klass->vtable._13_InitShiftHpPos.method)(
          shiftData,
          shiftData->klass[1]._1.image,
          method),
        (v6 = this->fields.shiftData) == 0LL)
    || !status )
  {
    sub_B170D4();
  }
  EnemySvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceStatus__GetEnemySvtParamComponent(
                                                     status,
                                                     v6->fields._TargetId_k__BackingField,
                                                     0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(EnemySvtParamComponent, 0LL, 0LL) )
    BattleAction_BasePlayShiftGauge__End((BattleAction_BasePlayShiftGauge_o *)this, 0LL);
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
  BattleAction_BasePlayShiftGauge___ctor((BattleAction_BasePlayShiftGauge_o *)this, 0LL);
}


void __fastcall BattleAction_PlayUpShiftGaugeUpMain__DelayStartHpChangeGauge(
        BattleAction_PlayUpShiftGaugeUpMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *hpShift; // x22

  if ( (byte_40F8FA0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, comp);
    byte_40F8FA0 = 1;
  }
  if ( !comp )
    goto LABEL_13;
  hpShift = comp->fields.hpShift;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)hpShift, 0LL, 0LL) )
  {
    if ( hpData && hpShift )
    {
      if ( !BattleServantHpShiftComponent__IsIconActive(hpShift, hpData->fields._MaxGaugeIconIndex_k__BackingField, 0LL) )
        BattleServantHpShiftComponent__UpdateIcon(hpShift, hpData->fields._MaxGaugeIconIndex_k__BackingField, 1, 1, 0LL);
      goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_12:
  ((void (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleServantParamComponent_o *, BattleAction_ShiftHpData_o *, Il2CppMethodPointer))this->klass->vtable._10_StartHpChangeGauge.method)(
    this,
    comp,
    hpData,
    this->klass->vtable._11_NextHpChangeGauge.methodPtr);
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
  __int64 v10; // x1
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  __int64 v12; // x0
  BattleServantHpShiftComponent_EffectData_o *v13; // x22
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleCallBack_T1__T2__o *v25; // x21

  if ( (byte_40F8F9F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__, comp);
    sub_B16FFC(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo, v7);
    sub_B16FFC(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__, v8);
    sub_B16FFC(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__, v10);
    byte_40F8F9F = 1;
  }
  shiftData = this->fields.shiftData;
  if ( !shiftData
    || (v12 = ((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer, BattleAction_ShiftHpData_o *, const MethodInfo *))shiftData->klass->vtable._5_unknown.method)(
                shiftData,
                shiftData->klass->vtable._6_GetBeforeEffectData.methodPtr,
                hpData,
                method),
        !hpData)
    || (v13 = (BattleServantHpShiftComponent_EffectData_o *)v12,
        v14 = ((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *))hpData->klass[1]._1.gc_desc)(
                hpData,
                hpData->klass[1]._1.name),
        !comp) )
  {
    sub_B170D4();
  }
  BattleServantParamComponent__PlayUpShiftEffect(comp, v14, 1.5, v13, 0LL);
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v15);
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5
                                                            / BattleAction_ShiftHpData__get_TotalMovePer(hpData, 0LL);
  v20 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B170CC(
                                                                           System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                                                           v16,
                                                                           v17,
                                                                           v18,
                                                                           v19);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__,
    (const MethodInfo_24C4F70 *)Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__);
  v25 = (BattleCallBack_T1__T2__o *)sub_B170CC(
                                      BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo,
                                      v21,
                                      v22,
                                      v23,
                                      v24);
  BattleCallBack_object__object____ctor(
    v25,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v20,
    (const MethodInfo_2D33F9C *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  BattleServantParamComponent__DelayCoroutine(comp, 1.5, (BattleCallBackBase_o *)v25, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x22
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w24
  BattleAction_ShiftHpData_HpDetail_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *v24; // x20
  int32_t v25; // w21
  int32_t v26; // w22
  BattleAction_ShiftHpData_HpDetail_o *v27; // x19

  if ( (byte_40FF361 & 1) == 0 )
  {
    sub_B16FFC(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11);
    byte_40FF361 = 1;
  }
  BattleAction_ShiftHpData___ctor(
    (BattleAction_ShiftHpData_o *)this,
    curGaugeIndex,
    maxGaugeIconIndex,
    (const MethodInfo *)prevHp);
  if ( !prevHp )
    goto LABEL_8;
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v19 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B170CC(
                                                 BattleAction_ShiftHpData_HpDetail_TypeInfo,
                                                 v12,
                                                 v13,
                                                 v14,
                                                 v15);
  BattleAction_ShiftHpData_HpDetail___ctor(v19, Hp_k__BackingField, 0, MaxHp_k__BackingField, 0, 0LL);
  if ( !HpDetailList_k__BackingField
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)HpDetailList_k__BackingField,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__),
        !curHp)
    || (v24 = this->fields._HpDetailList_k__BackingField,
        v25 = curHp->fields._Hp_k__BackingField,
        v26 = curHp->fields._MaxHp_k__BackingField,
        v27 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B170CC(
                                                       BattleAction_ShiftHpData_HpDetail_TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22,
                                                       v23),
        BattleAction_ShiftHpData_HpDetail___ctor(v27, v26, v25, v26, 1, 0LL),
        !v24) )
  {
LABEL_8:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FF363 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__, *(_QWORD *)&curGaugeIndex);
    sub_B16FFC(&System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo, v7);
    byte_40FF363 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurGaugeIndex_k__BackingField = curGaugeIndex;
  this->fields._MaxGaugeIconIndex_k__BackingField = maxGaugeIconIndex;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
  this->fields._HpDetailList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._HpDetailList_k__BackingField,
    (System_Int32_array **)v12,
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
  int32_t hpDetailIndex; // w1
  System_Collections_Generic_List_T__o *HpDetailList_k__BackingField; // x0

  if ( (byte_40FF364 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___, method);
    byte_40FF364 = 1;
  }
  hpDetailIndex = this->fields.hpDetailIndex;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._HpDetailList_k__BackingField;
  this->fields.hpDetailIndex = hpDetailIndex + 1;
  return (BattleAction_ShiftHpData_HpDetail_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                                  HpDetailList_k__BackingField,
                                                  hpDetailIndex,
                                                  0LL,
                                                  (const MethodInfo_18B822C *)Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x19
  BattleAction_ShiftHpData___c_c *v11; // x0
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__17_0; // x20
  Il2CppObject *v14; // x21
  struct BattleAction_ShiftHpData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0

  if ( (byte_40FF362 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___, method);
    sub_B16FFC(&Method_System_Func_ShiftHpData_HpDetail__float___ctor__, v6);
    sub_B16FFC(&System_Func_ShiftHpData_HpDetail__float__TypeInfo, v7);
    sub_B16FFC(&Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__, v8);
    sub_B16FFC(&BattleAction_ShiftHpData___c_TypeInfo, v9);
    byte_40FF362 = 1;
  }
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  v11 = BattleAction_ShiftHpData___c_TypeInfo;
  if ( (BYTE3(BattleAction_ShiftHpData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAction_ShiftHpData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_ShiftHpData___c_TypeInfo);
    v11 = BattleAction_ShiftHpData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__17_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B170CC(
                                                                    System_Func_ShiftHpData_HpDetail__float__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__17_0,
      v14,
      Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__,
      (const MethodInfo_2B6CA34 *)Method_System_Func_ShiftHpData_HpDetail__float___ctor__);
    v15 = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    v15->__9__17_0 = (struct System_Func_ShiftHpData_HpDetail__float__o *)_9__17_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)HpDetailList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__17_0,
          (const MethodInfo_19C0DC8 *)Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
  return System_Linq_Enumerable__Sum_40250696((System_Collections_Generic_IEnumerable_float__o *)v22, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._HpDetailList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._HpDetailList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x0

  if ( (byte_40F79E0 & 1) == 0 )
  {
    sub_B16FFC(&BattleAction_ShiftHpData___c_TypeInfo, v1);
    byte_40F79E0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleAction_ShiftHpData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleAction_ShiftHpData___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x22
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w24
  BattleAction_ShiftHpData_HpDetail_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *v24; // x20
  int32_t v25; // w21
  int32_t v26; // w22
  BattleAction_ShiftHpData_HpDetail_o *v27; // x19

  if ( (byte_40FF365 & 1) == 0 )
  {
    sub_B16FFC(&BattleAction_ShiftHpData_HpDetail_TypeInfo, *(_QWORD *)&curGaugeIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__, v11);
    byte_40FF365 = 1;
  }
  BattleAction_ShiftHpData___ctor(
    (BattleAction_ShiftHpData_o *)this,
    curGaugeIndex,
    maxGaugeIconIndex,
    (const MethodInfo *)prevHp);
  if ( !prevHp )
    goto LABEL_8;
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  Hp_k__BackingField = prevHp->fields._Hp_k__BackingField;
  MaxHp_k__BackingField = prevHp->fields._MaxHp_k__BackingField;
  v19 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B170CC(
                                                 BattleAction_ShiftHpData_HpDetail_TypeInfo,
                                                 v12,
                                                 v13,
                                                 v14,
                                                 v15);
  BattleAction_ShiftHpData_HpDetail___ctor(
    v19,
    Hp_k__BackingField,
    MaxHp_k__BackingField,
    MaxHp_k__BackingField,
    0,
    0LL);
  if ( !HpDetailList_k__BackingField
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)HpDetailList_k__BackingField,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__),
        !curHp)
    || (v24 = this->fields._HpDetailList_k__BackingField,
        v25 = curHp->fields._Hp_k__BackingField,
        v26 = curHp->fields._MaxHp_k__BackingField,
        v27 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B170CC(
                                                       BattleAction_ShiftHpData_HpDetail_TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22,
                                                       v23),
        BattleAction_ShiftHpData_HpDetail___ctor(v27, 0, v25, v26, 1, 0LL),
        !v24) )
  {
LABEL_8:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
}


int32_t __fastcall BattleAction_ShiftUpHpData__get_PlayGaugeIndex(
        BattleAction_ShiftUpHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField - 1;
}