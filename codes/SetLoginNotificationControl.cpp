void SetLoginNotificationControl___ctor(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetLoginNotificationControl__Awake(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  ;
}


int32_t SetLoginNotificationControl__GetLoginNotificationHour(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  float v5; // s9
  double v6; // d8
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  double iptr; // [xsp+8h] [xbp-28h] BYREF

  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v5 = value * 23.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2, v3);
  v6 = v5;
  v7 = modf(v5, &iptr);
  if ( v5 >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(v6 + 0.5);
      goto LABEL_15;
    }
    v9 = 1.0;
    v8 = iptr;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(v6 + -0.5);
      goto LABEL_15;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_15:
  if ( v8 == INFINITY )
    return 0x80000000;
  else
    return (int)v8;
}


void SetLoginNotificationControl__Init(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  float LoginNotificationHourSetting; // s0
  UIProgressBar_o *hourSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596B58D & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B58D = 1;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  this->fields.isFlag = OptionManager__GetLoginNotificationSetting(0);
  LoginNotificationHourSetting = OptionManager__GetLoginNotificationHourSetting(0);
  hourSlider = (UIProgressBar_o *)this->fields.hourSlider;
  this->fields.hourValue = LoginNotificationHourSetting;
  if ( !hourSlider )
    sub_2213CDC(0, v4);
  hourSlider->fields.numberOfSteps = 24;
  UIProgressBar__set_value(hourSlider, LoginNotificationHourSetting, 0);
  SetLoginNotificationControl__RefreshDisplay(this, v7);
}


bool SetLoginNotificationControl__IsAvailable(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  return ConstantMaster__IsFlag20260802(0);
}


void SetLoginNotificationControl__OnClickButton(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppMethodPointer methodPtr; // x10
  _QWORD *v5; // x0
  _BOOL4 isFlag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_596B590 & 1) == 0 )
  {
    sub_2213A60(&Method_SetLoginNotificationControl_OnClickButton__);
    byte_596B590 = 1;
  }
  methodPtr = this->klass->vtable._5_Reflection.methodPtr;
  v3 = this->klass->vtable._5_Reflection.method;
  this->fields.isFlag ^= 1u;
  ((void (__fastcall *)(SetLoginNotificationControl_o *, const MethodInfo *))methodPtr)(this, v3);
  v5 = Method_SetLoginNotificationControl_OnClickButton__;
  isFlag = this->fields.isFlag;
  if ( (*((_BYTE *)Method_SetLoginNotificationControl_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_SetLoginNotificationControl_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !isFlag, 0, 0);
  SetLoginNotificationControl__RefreshDisplay(this, v8);
}


void SetLoginNotificationControl__Reflection(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isFlag; // w20

  if ( (byte_596B58E & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B58E = 1;
  }
  isFlag = this->fields.isFlag;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetLoginNotificationSetting(isFlag, 0);
  OptionManager__SetLoginNotificationSetting_48397920(this->fields.hourValue, 0);
}


void SetLoginNotificationControl__RefreshDisplay(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_596B58F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B58F = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    goto LABEL_8;
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.isFlag )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0);
  switchButton = (UIButton_o *)this->fields.sliderMask;
  if ( !switchButton )
LABEL_8:
    sub_2213CDC(switchButton, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchButton, !this->fields.isFlag, 0);
}


void SetLoginNotificationControl__SliderValueChange(SetLoginNotificationControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *hourSlider; // x0
  float hourValue; // s9
  float value; // s8
  float v6; // s0
  float v7; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v9; // s0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_596B591 & 1) == 0 )
  {
    sub_2213A60(&Method_SetLoginNotificationControl_SliderValueChange__);
    byte_596B591 = 1;
  }
  hourSlider = (UIProgressBar_o *)this->fields.hourSlider;
  if ( !hourSlider )
    goto LABEL_16;
  hourValue = this->fields.hourValue;
  value = UIProgressBar__get_value(hourSlider, 0);
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v6 = fabsf(hourValue);
  v7 = fabsf(value);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v6 <= v7 )
    v6 = v7;
  v9 = v6 * 0.000001;
  if ( v9 <= (float)(static_fields->Epsilon * 8.0) )
    v9 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(value, hourValue) >= v9 )
  {
    v10 = Method_SetLoginNotificationControl_SliderValueChange__;
    if ( (*((_BYTE *)Method_SetLoginNotificationControl_SliderValueChange__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_2213A78(Method_SetLoginNotificationControl_SliderValueChange__);
    v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
  }
  hourSlider = (UIProgressBar_o *)this->fields.hourSlider;
  if ( !hourSlider )
LABEL_16:
    sub_2213CDC(hourSlider, method);
  this->fields.hourValue = UIProgressBar__get_value(hourSlider, 0);
}