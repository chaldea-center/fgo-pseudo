void __fastcall TimeSyncAlphaSwitcher___ctor(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  this->fields.toggleNum = 1;
  this->fields.toggleFreqRate = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TimeSyncAlphaSwitcher__Clear(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x0

  widget = this->fields.widget;
  *(_QWORD *)&this->fields.toggleNum = 1LL;
  if ( !widget )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))widget->klass->vtable._8_set_alpha.method)(
    widget,
    widget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  *(_QWORD *)&this->fields._firstFreqCount_k__BackingField = 0LL;
}


void __fastcall TimeSyncAlphaSwitcher__SetAlphaBlink(
        TimeSyncAlphaSwitcher_o *this,
        int32_t num,
        int32_t index,
        float time,
        const MethodInfo *method)
{
  float toggleFreqRate; // s1
  float delay; // s2
  float v8; // s8
  __int64 v9; // x0
  float v10; // s0
  int32_t toggleNum; // w8
  int32_t toggleIndex; // w9
  _BOOL4 v13; // w10
  double v14; // d0
  int32_t v15; // w10

  toggleFreqRate = this->fields.toggleFreqRate;
  delay = this->fields.delay;
  this->fields._SyncReferenceTime_k__BackingField = time;
  v8 = (float)(delay + time) / (float)(toggleFreqRate * 3.1416);
  this->fields.toggleNum = num;
  this->fields.toggleIndex = index;
  v10 = fmodf(v8, 1.0);
  if ( !this )
    sub_B0D97C(v9);
  toggleNum = this->fields.toggleNum;
  toggleIndex = this->fields.toggleIndex;
  v13 = v10 > 0.5;
  if ( v8 == INFINITY )
    v14 = -INFINITY;
  else
    v14 = v8;
  v15 = (int)v14 + v13;
  this->fields._firstFreqCount_k__BackingField = v15;
  this->fields.toggleIndex = (toggleIndex + v15) % toggleNum;
}


// attributes: thunk
void __fastcall TimeSyncAlphaSwitcher__Update(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  TimeSyncAlphaSwitcher__UpdateAlpha(this, method);
}


void __fastcall TimeSyncAlphaSwitcher__UpdateAlpha(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  long double v3; // q0
  int32_t firstFreqCount_k__BackingField; // w8
  struct UIWidget_o *v5; // x0
  void (__fastcall *v6)(long double); // x2
  UnityEngine_AnimationCurve_o *alphaCurve; // x20
  float time; // s0
  float v9; // s8
  float v10; // s0
  float v11; // s0
  struct UIWidget_o *widget; // x20
  float v13; // s8
  float v14; // s0
  double v15; // d1
  bool v16; // zf
  int v17; // w8
  float v18; // s0

  if ( this->fields.toggleNum >= 2 )
  {
    *(float *)&v3 = UnityEngine_Time__get_time(0LL);
    firstFreqCount_k__BackingField = this->fields._firstFreqCount_k__BackingField;
    if ( *(float *)&v3 >= (float)((float)((float)firstFreqCount_k__BackingField + 0.5)
                                * (float)(this->fields.toggleFreqRate * 3.1416)) )
    {
      alphaCurve = this->fields.alphaCurve;
      time = UnityEngine_Time__get_time(0LL);
      if ( alphaCurve )
      {
        v9 = this->fields.toggleFreqRate * 3.1416;
        v10 = fmodf(time, v9);
        v11 = UnityEngine_AnimationCurve__Evaluate(alphaCurve, v10 / v9, 0LL);
        widget = this->fields.widget;
        v13 = v11;
        *(float *)&v3 = UnityEngine_Time__get_time(0LL);
        if ( widget )
        {
          v14 = *(float *)&v3 / (float)(this->fields.toggleFreqRate * 3.1416);
          v15 = v14;
          v16 = v14 == INFINITY;
          *(double *)&v3 = -v14;
          if ( !v16 )
            *(double *)&v3 = v15;
          v17 = (int)*(double *)&v3 % this->fields.toggleNum;
          v6 = (void (__fastcall *)(long double))widget->klass->vtable._8_set_alpha.method;
          v18 = 0.0;
          if ( v17 == this->fields.toggleIndex )
            v18 = 1.0;
          *(float *)&v3 = v13 * v18;
          goto LABEL_15;
        }
      }
    }
    else
    {
      v5 = this->fields.widget;
      if ( v5 )
      {
        LODWORD(v3) = 0;
        v6 = (void (__fastcall *)(long double))v5->klass->vtable._8_set_alpha.method;
        if ( this->fields.toggleIndex == firstFreqCount_k__BackingField % this->fields.toggleNum )
          *(float *)&v3 = 1.0;
LABEL_15:
        v6(v3);
        return;
      }
    }
    sub_B0D97C(v5);
  }
}


bool __fastcall TimeSyncAlphaSwitcher__get_IsAlphaBlink(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields.toggleNum > 1;
}


int32_t __fastcall TimeSyncAlphaSwitcher__get_Remainder(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  float v3; // s0
  double v4; // d0

  v3 = UnityEngine_Time__get_time(0LL) / (float)(this->fields.toggleFreqRate * 3.1416);
  if ( v3 == INFINITY )
    v4 = -v3;
  else
    v4 = v3;
  return (int)v4 % this->fields.toggleNum;
}


float __fastcall TimeSyncAlphaSwitcher__get_SyncReferenceTime(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields._SyncReferenceTime_k__BackingField;
}


float __fastcall TimeSyncAlphaSwitcher__get_TimePerFreq(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields.toggleFreqRate * 3.1416;
}


int32_t __fastcall TimeSyncAlphaSwitcher__get_firstFreqCount(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields._firstFreqCount_k__BackingField;
}


void __fastcall TimeSyncAlphaSwitcher__set_SyncReferenceTime(
        TimeSyncAlphaSwitcher_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._SyncReferenceTime_k__BackingField = value;
}


void __fastcall TimeSyncAlphaSwitcher__set_firstFreqCount(
        TimeSyncAlphaSwitcher_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._firstFreqCount_k__BackingField = value;
}