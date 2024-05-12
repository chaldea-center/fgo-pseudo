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

  if ( (byte_43897A6 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_int___);
    byte_43897A6 = 1;
  }
  shiftData = this->fields.shiftData;
  v4 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData
    || (BattleActionData_BaseShiftGaugeData__OffState(shiftData, v4, 0LL), (v6 = this->fields.shiftData) == 0LL) )
  {
    sub_B7769C(v4, v5);
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    v6->fields._TargetId_k__BackingField,
    (const MethodInfo_2C3C32C *)Method_ActionExtensions_Call_int___);
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleAction_BasePlayShiftGauge__Init(
        BattleAction_BasePlayShiftGauge_o *this,
        BattleActionData_BaseShiftGaugeData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.shiftData = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActionData_BaseShiftGaugeData_o *shiftData; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  this->fields.callBack = callBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callBack,
    (System_Int32_array **)callBack,
    (System_String_array **)callBack,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  shiftData = this->fields.shiftData;
  v11 = ((__int64 (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_StartPlayEffect.methodPtr);
  if ( !shiftData )
    sub_B7769C(v11, v12);
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
  if ( (byte_438B32D & 1) == 0 )
  {
    sub_B775C4(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_438B32D = 1;
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
  BattleServantHpShiftComponent_EffectData_o *v8; // x22
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
    sub_B7769C(shiftData, comp);
  }
  BattleServantParamComponent__PlayDownShiftEffect(comp, (int32_t)shiftData, v8, 0LL);
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
  BattleAction_PlayDownShiftGaugeMain_c *v7; // x0
  float EffectAnmDelayTime; // s8
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x8
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  float v12; // s0
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v13; // x22
  BattleCallBack_T1__T2__o *v14; // x21

  if ( (byte_438B32C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__);
    sub_B775C4(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_B775C4(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
    sub_B775C4(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_B775C4(&Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__);
    sub_B775C4(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_438B32C = 1;
  }
  v7 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  if ( (BYTE3(BattleAction_PlayDownShiftGaugeMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAction_PlayDownShiftGaugeMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    v7 = BattleAction_PlayDownShiftGaugeMain_TypeInfo;
  }
  if ( !hpData
    || (EffectAnmDelayTime = v7->static_fields->EffectAnmDelayTime,
        v7 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(BattleAction_ShiftHpData_o *, const char *, BattleAction_ShiftHpData_o *, const MethodInfo *))hpData->klass[1]._1.gc_desc)(
                                                        hpData,
                                                        hpData->klass[1]._1.name,
                                                        hpData,
                                                        method),
        (shiftData = this->fields.shiftData) == 0LL)
    || (v10 = (int)v7,
        v7 = (BattleAction_PlayDownShiftGaugeMain_c *)((__int64 (__fastcall *)(struct BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftData->klass->vtable._6_GetBeforeEffectData.method)(
                                                        this->fields.shiftData,
                                                        shiftData->klass->vtable._7_unknown.methodPtr),
        !comp) )
  {
    sub_B7769C(v7, comp);
  }
  v12 = BattleServantParamComponent__PlayShiftEffectGeneral(
          comp,
          v10,
          (BattleServantHpShiftComponent_EffectData_o *)v7,
          0LL);
  if ( v12 > 0.0 )
    EffectAnmDelayTime = v12;
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v11);
  v13 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B77694(System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleAction_PlayDownShiftGaugeMain_DelayPlayDownShiftEffect__,
    (const MethodInfo_26AEB2C *)Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__);
  v14 = (BattleCallBack_T1__T2__o *)sub_B77694(BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
  BattleCallBack_object__object____ctor(
    v14,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v13,
    (const MethodInfo_2CAE1F8 *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  BattleServantParamComponent__DelayCoroutine(comp, EffectAnmDelayTime, (BattleCallBackBase_o *)v14, 0LL);
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
  BattleAction_PlayShiftGaugeMain_o *v3; // x19

  if ( !comp
    || (v3 = this,
        BattleServantParamComponent__InitNextTdGauge(comp, 0LL),
        (this = (BattleAction_PlayShiftGaugeMain_o *)v3->fields.shiftData) == 0LL) )
  {
    sub_B7769C(this, comp);
  }
  BattleActionData_BaseShiftGaugeData__OnNotUpdateState((BattleActionData_BaseShiftGaugeData_o *)this, 1, 0LL);
}


void __fastcall BattleAction_PlayShiftGaugeMain__NextHpChangeGauge(
        BattleAction_PlayShiftGaugeMain_o *this,
        BattleServantParamComponent_o *comp,
        BattleAction_ShiftHpData_o *hpData,
        const MethodInfo *method)
{
  float *v5; // x19
  BattleAction_PlayShiftGaugeMain_o *v7; // x21

  if ( !hpData )
    goto LABEL_9;
  v5 = (float *)this;
  this = (BattleAction_PlayShiftGaugeMain_o *)BattleAction_ShiftHpData__GetHpDetail(hpData, 0LL);
  if ( !this )
  {
    (*(void (__fastcall **)(float *, BattleServantParamComponent_o *, _QWORD))(*(_QWORD *)v5 + 456LL))(
      v5,
      comp,
      *(_QWORD *)(*(_QWORD *)v5 + 464LL));
    return;
  }
  v7 = this;
  if ( !LOBYTE(this->fields._ChangeToHp_k__BackingField) )
  {
    if ( comp )
      goto LABEL_8;
LABEL_9:
    sub_B7769C(this, comp);
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
    v5[9] * *((float *)&v7->fields.callBack + 1),
    (BattleAction_BasePlayShiftGauge_o *)v5,
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
    sub_B7769C(0LL, comp);
  HpData = (System_Int32_array **)BattleActionData_BaseShiftGaugeData__GetHpData(shiftData, 0LL);
  *(_QWORD *)&this->fields.hpGaugeSpeed = HpData;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.hpGaugeSpeed, HpData, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_438B35F & 1) == 0 )
  {
    sub_B775C4(&SeManager_TypeInfo);
    byte_438B35F = 1;
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

  if ( (byte_438B35E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B35E = 1;
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
    sub_B7769C(shiftData, status);
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
  BattleAction_PlayUpShiftGaugeUpMain_o *v6; // x21
  UnityEngine_Object_o *hpShift; // x22

  v6 = this;
  if ( (byte_438B364 & 1) == 0 )
  {
    this = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B364 = 1;
  }
  if ( !comp )
    goto LABEL_13;
  hpShift = (UnityEngine_Object_o *)comp->fields.hpShift;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
      goto LABEL_12;
    }
LABEL_13:
    sub_B7769C(this, comp);
  }
LABEL_12:
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
  struct BattleActionData_BaseShiftGaugeData_o *shiftData; // x0
  BattleServantHpShiftComponent_EffectData_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v10; // x22
  BattleCallBack_T1__T2__o *v11; // x21

  if ( (byte_438B363 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__);
    sub_B775C4(&System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_B775C4(&Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
    sub_B775C4(&BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
    sub_B775C4(&Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__);
    byte_438B363 = 1;
  }
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
    sub_B7769C(shiftData, comp);
  }
  BattleServantParamComponent__PlayUpShiftEffect(comp, (int32_t)shiftData, 1.5, v8, 0LL);
  BattleAction_PlayShiftGaugeMain__InitNextTdGauge((BattleAction_PlayShiftGaugeMain_o *)this, comp, v9);
  *((float *)&this->fields._ChangeToHp_k__BackingField + 1) = 1.5
                                                            / BattleAction_ShiftHpData__get_TotalMovePer(hpData, 0LL);
  v10 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B77694(System_Action_BattleServantParamComponent__ShiftHpData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleAction_PlayUpShiftGaugeUpMain_DelayStartHpChangeGauge__,
    (const MethodInfo_26AEB2C *)Method_System_Action_BattleServantParamComponent__ShiftHpData___ctor__);
  v11 = (BattleCallBack_T1__T2__o *)sub_B77694(BattleCallBack_BattleServantParamComponent__ShiftHpData__TypeInfo);
  BattleCallBack_object__object____ctor(
    v11,
    (Il2CppObject *)comp,
    (Il2CppObject *)hpData,
    (System_Action_T1__T2__o *)v10,
    (const MethodInfo_2CAE1F8 *)Method_BattleCallBack_BattleServantParamComponent__ShiftHpData___ctor__);
  BattleServantParamComponent__DelayCoroutine(comp, 1.5, (BattleCallBackBase_o *)v11, 0LL);
}


void __fastcall BattleAction_ShiftDownHpData___ctor(
        BattleAction_ShiftDownHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x22
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w24
  BattleAction_ShiftHpData_HpDetail_o *v16; // x21
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *v17; // x20
  int32_t v18; // w21
  int32_t v19; // w22
  BattleAction_ShiftHpData_HpDetail_o *v20; // x19

  if ( (byte_438F9D2 & 1) == 0 )
  {
    sub_B775C4(&BattleAction_ShiftHpData_HpDetail_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
    byte_438F9D2 = 1;
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
  v16 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B77694(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  BattleAction_ShiftHpData_HpDetail___ctor(v16, Hp_k__BackingField, 0, MaxHp_k__BackingField, 0, 0LL);
  if ( !HpDetailList_k__BackingField
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)HpDetailList_k__BackingField,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__),
        !curHp)
    || (v17 = this->fields._HpDetailList_k__BackingField,
        v18 = curHp->fields._Hp_k__BackingField,
        v19 = curHp->fields._MaxHp_k__BackingField,
        v20 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B77694(BattleAction_ShiftHpData_HpDetail_TypeInfo),
        BattleAction_ShiftHpData_HpDetail___ctor(v20, v19, v18, v19, 1, 0LL),
        !v17) )
  {
LABEL_8:
    sub_B7769C(v11, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
}


int32_t __fastcall BattleAction_ShiftDownHpData__get_PlayGaugeIndex(
        BattleAction_ShiftDownHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField;
}


void __fastcall BattleAction_ShiftHpData___ctor(
        BattleAction_ShiftHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438F9D4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo);
    byte_438F9D4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurGaugeIndex_k__BackingField = curGaugeIndex;
  this->fields._MaxGaugeIconIndex_k__BackingField = maxGaugeIconIndex;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ShiftHpData_HpDetail__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail___ctor__);
  this->fields._HpDetailList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *)v7;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._HpDetailList_k__BackingField,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


BattleAction_ShiftHpData_HpDetail_o *__fastcall BattleAction_ShiftHpData__GetHpDetail(
        BattleAction_ShiftHpData_o *this,
        const MethodInfo *method)
{
  int32_t hpDetailIndex; // w1
  System_Collections_Generic_List_T__o *HpDetailList_k__BackingField; // x0

  if ( (byte_438F9D5 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
    byte_438F9D5 = 1;
  }
  hpDetailIndex = this->fields.hpDetailIndex;
  HpDetailList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._HpDetailList_k__BackingField;
  this->fields.hpDetailIndex = hpDetailIndex + 1;
  return (BattleAction_ShiftHpData_HpDetail_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                                  HpDetailList_k__BackingField,
                                                  hpDetailIndex,
                                                  0LL,
                                                  (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_ShiftHpData_HpDetail___);
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
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x19
  BattleAction_ShiftHpData___c_c *v4; // x0
  struct BattleAction_ShiftHpData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__17_0; // x20
  Il2CppObject *v7; // x21
  struct BattleAction_ShiftHpData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0

  if ( (byte_438F9D3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
    sub_B775C4(&Method_System_Func_ShiftHpData_HpDetail__float___ctor__);
    sub_B775C4(&System_Func_ShiftHpData_HpDetail__float__TypeInfo);
    sub_B775C4(&Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__);
    sub_B775C4(&BattleAction_ShiftHpData___c_TypeInfo);
    byte_438F9D3 = 1;
  }
  HpDetailList_k__BackingField = this->fields._HpDetailList_k__BackingField;
  v4 = BattleAction_ShiftHpData___c_TypeInfo;
  if ( (BYTE3(BattleAction_ShiftHpData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleAction_ShiftHpData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAction_ShiftHpData___c_TypeInfo);
    v4 = BattleAction_ShiftHpData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__17_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B77694(System_Func_ShiftHpData_HpDetail__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__17_0,
      v7,
      Method_BattleAction_ShiftHpData___c__get_TotalMovePer_b__17_0__,
      (const MethodInfo_29EB1B8 *)Method_System_Func_ShiftHpData_HpDetail__float___ctor__);
    v8 = BattleAction_ShiftHpData___c_TypeInfo->static_fields;
    v8->__9__17_0 = (struct System_Func_ShiftHpData_HpDetail__float__o *)_9__17_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)HpDetailList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__17_0,
          (const MethodInfo_1D3937C *)Method_System_Linq_Enumerable_Select_ShiftHpData_HpDetail__float___);
  return System_Linq_Enumerable__Sum_41375040((System_Collections_Generic_IEnumerable_float__o *)v15, 0LL);
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
  sub_B77560(
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E70 & 1) == 0 )
  {
    sub_B775C4(&BattleAction_ShiftHpData___c_TypeInfo);
    byte_4388E70 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleAction_ShiftHpData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleAction_ShiftHpData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return x->fields._MovePer_k__BackingField;
}


void __fastcall BattleAction_ShiftUpHpData___ctor(
        BattleAction_ShiftUpHpData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *HpDetailList_k__BackingField; // x22
  int32_t Hp_k__BackingField; // w23
  int32_t MaxHp_k__BackingField; // w24
  BattleAction_ShiftHpData_HpDetail_o *v16; // x21
  struct System_Collections_Generic_List_ShiftHpData_HpDetail__o *v17; // x20
  int32_t v18; // w21
  int32_t v19; // w22
  BattleAction_ShiftHpData_HpDetail_o *v20; // x19

  if ( (byte_438F9D6 & 1) == 0 )
  {
    sub_B775C4(&BattleAction_ShiftHpData_HpDetail_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
    byte_438F9D6 = 1;
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
  v16 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B77694(BattleAction_ShiftHpData_HpDetail_TypeInfo);
  BattleAction_ShiftHpData_HpDetail___ctor(
    v16,
    Hp_k__BackingField,
    MaxHp_k__BackingField,
    MaxHp_k__BackingField,
    0,
    0LL);
  if ( !HpDetailList_k__BackingField
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)HpDetailList_k__BackingField,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__),
        !curHp)
    || (v17 = this->fields._HpDetailList_k__BackingField,
        v18 = curHp->fields._Hp_k__BackingField,
        v19 = curHp->fields._MaxHp_k__BackingField,
        v20 = (BattleAction_ShiftHpData_HpDetail_o *)sub_B77694(BattleAction_ShiftHpData_HpDetail_TypeInfo),
        BattleAction_ShiftHpData_HpDetail___ctor(v20, 0, v18, v19, 1, 0LL),
        !v17) )
  {
LABEL_8:
    sub_B7769C(v11, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ShiftHpData_HpDetail__Add__);
}


int32_t __fastcall BattleAction_ShiftUpHpData__get_PlayGaugeIndex(
        BattleAction_ShiftUpHpData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurGaugeIndex_k__BackingField - 1;
}