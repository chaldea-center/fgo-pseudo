void TimeSyncAlphaSwitcher___ctor(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  this->fields.toggleNum = 1;
  this->fields.toggleFreqRate = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TimeSyncAlphaSwitcher__Clear(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x0

  widget = this->fields.widget;
  *(_QWORD *)&this->fields.toggleNum = 1;
  if ( !widget )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))widget->klass->vtable._8_set_alpha.methodPtr)(
    widget,
    widget->klass->vtable._8_set_alpha.method,
    1.0);
  *(_QWORD *)&this->fields._firstFreqCount_k__BackingField = 0;
}


void TimeSyncAlphaSwitcher__SetAlphaBlink(
        TimeSyncAlphaSwitcher_o *this,
        int32_t num,
        int32_t index,
        float time,
        const MethodInfo *method)
{
  float toggleFreqRate; // s1
  float delay; // s3
  float v8; // s8
  float v11; // s0
  int v12; // w8
  int32_t v13; // w8

  toggleFreqRate = this->fields.toggleFreqRate;
  delay = this->fields.delay;
  this->fields._SyncReferenceTime_k__BackingField = time;
  v8 = (float)(delay + time) / (float)(toggleFreqRate * 3.1416);
  this->fields.toggleNum = num;
  v11 = fmodf(v8, 1.0);
  v12 = (int)v8;
  if ( v8 == INFINITY )
    v12 = 0x80000000;
  v13 = v12 + (v11 > 0.5);
  this->fields._firstFreqCount_k__BackingField = v13;
  this->fields.toggleIndex = (v13 + index) % num;
}


// attributes: thunk
void TimeSyncAlphaSwitcher__Update(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  TimeSyncAlphaSwitcher__UpdateAlpha(this, method);
}


void TimeSyncAlphaSwitcher__UpdateAlpha(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  long double v3; // q0
  int32_t firstFreqCount_k__BackingField; // w8
  struct UIWidget_o *v5; // x0
  void (__fastcall *methodPtr)(long double); // x2
  UnityEngine_AnimationCurve_o *alphaCurve; // x20
  float time; // s0
  float v9; // s8
  float v10; // s0
  float v11; // s0
  struct UIWidget_o *widget; // x20
  float v13; // s8
  float v14; // s0
  int v15; // w8
  float v16; // s0

  if ( this->fields.toggleNum >= 2 )
  {
    *(float *)&v3 = UnityEngine_Time__get_time(0);
    firstFreqCount_k__BackingField = this->fields._firstFreqCount_k__BackingField;
    if ( *(float *)&v3 >= (float)((float)((float)firstFreqCount_k__BackingField + 0.5)
                                * (float)(this->fields.toggleFreqRate * 3.1416)) )
    {
      alphaCurve = this->fields.alphaCurve;
      time = UnityEngine_Time__get_time(0);
      if ( alphaCurve )
      {
        v9 = this->fields.toggleFreqRate * 3.1416;
        v10 = fmodf(time, v9);
        v11 = UnityEngine_AnimationCurve__Evaluate(alphaCurve, v10 / v9, 0);
        widget = this->fields.widget;
        v13 = v11;
        *(float *)&v3 = UnityEngine_Time__get_time(0);
        if ( widget )
        {
          v14 = *(float *)&v3 / (float)(this->fields.toggleFreqRate * 3.1416);
          v15 = (int)v14;
          if ( v14 == INFINITY )
            v15 = 0x80000000;
          methodPtr = (void (__fastcall *)(long double))widget->klass->vtable._8_set_alpha.methodPtr;
          v16 = 0.0;
          if ( v15 % this->fields.toggleNum == this->fields.toggleIndex )
            v16 = 1.0;
          *(float *)&v3 = v13 * v16;
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
        methodPtr = (void (__fastcall *)(long double))v5->klass->vtable._8_set_alpha.methodPtr;
        if ( this->fields.toggleIndex == firstFreqCount_k__BackingField % this->fields.toggleNum )
          *(float *)&v3 = 1.0;
LABEL_15:
        methodPtr(v3);
        return;
      }
    }
    sub_1C372B4(v5);
  }
}


bool TimeSyncAlphaSwitcher__get_IsAlphaBlink(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields.toggleNum > 1;
}


int32_t TimeSyncAlphaSwitcher__get_Remainder(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  float v3; // s0
  int v4; // w9

  v3 = UnityEngine_Time__get_time(0) / (float)(this->fields.toggleFreqRate * 3.1416);
  v4 = (int)v3;
  if ( v3 == INFINITY )
    v4 = 0x80000000;
  return v4 % this->fields.toggleNum;
}


float TimeSyncAlphaSwitcher__get_SyncReferenceTime(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields._SyncReferenceTime_k__BackingField;
}


float TimeSyncAlphaSwitcher__get_TimePerFreq(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields.toggleFreqRate * 3.1416;
}


int32_t TimeSyncAlphaSwitcher__get_firstFreqCount(TimeSyncAlphaSwitcher_o *this, const MethodInfo *method)
{
  return this->fields._firstFreqCount_k__BackingField;
}


void TimeSyncAlphaSwitcher__set_SyncReferenceTime(TimeSyncAlphaSwitcher_o *this, float value, const MethodInfo *method)
{
  this->fields._SyncReferenceTime_k__BackingField = value;
}


void TimeSyncAlphaSwitcher__set_firstFreqCount(TimeSyncAlphaSwitcher_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._firstFreqCount_k__BackingField = value;
}