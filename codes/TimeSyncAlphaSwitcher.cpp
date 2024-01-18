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
    sub_B2C434(0LL, method);
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
  __int64 v10; // x1
  float v11; // s0
  int32_t toggleNum; // w8
  int32_t toggleIndex; // w9
  _BOOL4 v14; // w10
  double v15; // d0
  int32_t v16; // w10

  toggleFreqRate = this->fields.toggleFreqRate;
  delay = this->fields.delay;
  this->fields._SyncReferenceTime_k__BackingField = time;
  v8 = (float)(delay + time) / (float)(toggleFreqRate * 3.1416);
  this->fields.toggleNum = num;
  this->fields.toggleIndex = index;
  v11 = fmodf(v8, 1.0);
  if ( !this )
    sub_B2C434(v9, v10);
  toggleNum = this->fields.toggleNum;
  toggleIndex = this->fields.toggleIndex;
  v14 = v11 > 0.5;
  if ( v8 == INFINITY )
    v15 = -INFINITY;
  else
    v15 = v8;
  v16 = (int)v15 + v14;
  this->fields._firstFreqCount_k__BackingField = v16;
  this->fields.toggleIndex = (toggleIndex + v16) % toggleNum;
}


// attributes: thunk
void __fastcall TimeSyncAlphaSwitcher__Update(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  TimeSyncAlphaSwitcher__UpdateAlpha(this, method);
}


void __fastcall TimeSyncAlphaSwitcher__UpdateAlpha(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  long double v4; // q0
  int32_t firstFreqCount_k__BackingField; // w8
  struct UIWidget_o *v6; // x0
  void (__fastcall *v7)(long double); // x2
  UnityEngine_AnimationCurve_o *alphaCurve; // x20
  float time; // s0
  float v10; // s8
  float v11; // s0
  float v12; // s0
  struct UIWidget_o *widget; // x20
  float v14; // s8
  float v15; // s0
  double v16; // d1
  bool v17; // zf
  int v18; // w8
  float v19; // s0

  if ( this->fields.toggleNum >= 2 )
  {
    *(float *)&v4 = UnityEngine_Time__get_time(0LL);
    firstFreqCount_k__BackingField = this->fields._firstFreqCount_k__BackingField;
    if ( *(float *)&v4 >= (float)((float)((float)firstFreqCount_k__BackingField + 0.5)
                                * (float)(this->fields.toggleFreqRate * 3.1416)) )
    {
      alphaCurve = this->fields.alphaCurve;
      time = UnityEngine_Time__get_time(0LL);
      if ( alphaCurve )
      {
        v10 = this->fields.toggleFreqRate * 3.1416;
        v11 = fmodf(time, v10);
        v12 = UnityEngine_AnimationCurve__Evaluate(alphaCurve, v11 / v10, 0LL);
        widget = this->fields.widget;
        v14 = v12;
        *(float *)&v4 = UnityEngine_Time__get_time(0LL);
        if ( widget )
        {
          v15 = *(float *)&v4 / (float)(this->fields.toggleFreqRate * 3.1416);
          v16 = v15;
          v17 = v15 == INFINITY;
          *(double *)&v4 = -v15;
          if ( !v17 )
            *(double *)&v4 = v16;
          v18 = (int)*(double *)&v4 % this->fields.toggleNum;
          v7 = (void (__fastcall *)(long double))widget->klass->vtable._8_set_alpha.method;
          v19 = 0.0;
          if ( v18 == this->fields.toggleIndex )
            v19 = 1.0;
          *(float *)&v4 = v14 * v19;
          goto LABEL_15;
        }
      }
    }
    else
    {
      v6 = this->fields.widget;
      if ( v6 )
      {
        LODWORD(v4) = 0;
        v7 = (void (__fastcall *)(long double))v6->klass->vtable._8_set_alpha.method;
        if ( this->fields.toggleIndex == firstFreqCount_k__BackingField % this->fields.toggleNum )
          *(float *)&v4 = 1.0;
LABEL_15:
        v7(v4);
        return;
      }
    }
    sub_B2C434(v6, v3);
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