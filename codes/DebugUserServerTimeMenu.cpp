void DebugUserServerTimeMenu___ctor(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


// attributes: thunk
void DebugUserServerTimeMenu__OnClickNowButton(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  DebugUserServerTimeMenu__SetupUserServerTimeNow(this, method);
}


void DebugUserServerTimeMenu__SetupUserServerTimeNow(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_DateTime_o v4; // x0
  System_DateTime_o v5; // x1
  UnityEngine_Component_o *inputYear; // x8
  Il2CppObject *Component_object; // x20
  System_DateTime_o v8; // x0
  Il2CppObject *v9; // x20
  System_DateTime_o v10; // x0
  Il2CppObject *v11; // x20
  System_DateTime_o v12; // x0
  Il2CppObject *v13; // x20
  System_DateTime_o v14; // x0
  Il2CppObject *v15; // x19
  System_DateTime_o v16; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DC21 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&StringLiteral_22736/*"mm"*/);
    sub_2213A60(&StringLiteral_9084/*"MM"*/);
    sub_2213A60(&StringLiteral_7518/*"HH"*/);
    sub_2213A60(&StringLiteral_26358/*"yyyy"*/);
    sub_2213A60(&StringLiteral_19333/*"dd"*/);
    byte_596DC21 = 1;
  }
  dateData = 0;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, method, v2);
  v4.fields._dateData = System_DateTime__get_Now(0).fields._dateData;
  inputYear = (UnityEngine_Component_o *)this->fields.inputYear;
  dateData = v4.fields._dateData;
  if ( !inputYear )
    goto LABEL_16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       inputYear,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  v8.fields._dateData = (uint64_t)&dateData;
  v4.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(v8, (System_String_o *)StringLiteral_26358/*"yyyy"*/, 0);
  if ( !Component_object )
    goto LABEL_16;
  UIInput__set_value((UIInput_o *)Component_object, (System_String_o *)v4.fields._dateData, 0);
  v4.fields._dateData = (uint64_t)this->fields.inputMonth;
  if ( !v4.fields._dateData )
    goto LABEL_16;
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)v4.fields._dateData,
         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  v10.fields._dateData = (uint64_t)&dateData;
  v4.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(v10, (System_String_o *)StringLiteral_9084/*"MM"*/, 0);
  if ( !v9 )
    goto LABEL_16;
  UIInput__set_value((UIInput_o *)v9, (System_String_o *)v4.fields._dateData, 0);
  v4.fields._dateData = (uint64_t)this->fields.inputDay;
  if ( !v4.fields._dateData )
    goto LABEL_16;
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)v4.fields._dateData,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  v12.fields._dateData = (uint64_t)&dateData;
  v4.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(v12, (System_String_o *)StringLiteral_19333/*"dd"*/, 0);
  if ( !v11 )
    goto LABEL_16;
  UIInput__set_value((UIInput_o *)v11, (System_String_o *)v4.fields._dateData, 0);
  v4.fields._dateData = (uint64_t)this->fields.inputHour;
  if ( !v4.fields._dateData )
    goto LABEL_16;
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)v4.fields._dateData,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  v14.fields._dateData = (uint64_t)&dateData;
  v4.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(v14, (System_String_o *)StringLiteral_7518/*"HH"*/, 0);
  if ( !v13
    || (UIInput__set_value((UIInput_o *)v13, (System_String_o *)v4.fields._dateData, 0),
        (v4.fields._dateData = (uint64_t)this->fields.inputMinute) == 0)
    || (v15 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v4.fields._dateData,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        v16.fields._dateData = (uint64_t)&dateData,
        v4.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(
                                          v16,
                                          (System_String_o *)StringLiteral_22736/*"mm"*/,
                                          0),
        !v15) )
  {
LABEL_16:
    sub_2213CDC(v4.fields._dateData, v5.fields._dateData);
  }
  UIInput__set_value((UIInput_o *)v15, (System_String_o *)v4.fields._dateData, 0);
}


void DebugUserServerTimeMenu__SetupUserServerTimeWin(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  ;
}


void DebugUserServerTimeMenu__StartMenu(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_596DC1F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DebugUserServerTimeMenu__StartMenu_b__7_0__);
    byte_596DC1F = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_DebugUserServerTimeMenu__StartMenu_b__7_0__, 0);
  DebugUserServerTimeMenu__open(this, v3, v4);
}


void DebugUserServerTimeMenu__close(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(rootObject, 0, 0);
}


void DebugUserServerTimeMenu__endCallback(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallbackFunc; // t1

  endCallbackFunc = this->fields.endCallbackFunc;
  p_endCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackFunc;
  v9 = endCallbackFunc;
  if ( endCallbackFunc )
  {
    p_endCallbackFunc->klass = 0;
    sub_2213A04(p_endCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(v9, 0);
  }
}


void DebugUserServerTimeMenu__onClickApplyButton(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void DebugUserServerTimeMenu__onClickCancelButton(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  DebugUserServerTimeMenu__endCallback(this, method);
}


void DebugUserServerTimeMenu__open(
        DebugUserServerTimeMenu_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  NetworkManager_c *v5; // x0
  System_DateTime_o v6; // x0
  System_DateTime_o v7; // x1
  UnityEngine_Component_o *inputYear; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x21
  System_DateTime_o v12; // x0
  Il2CppObject *v13; // x21
  System_DateTime_o v14; // x0
  Il2CppObject *v15; // x21
  System_DateTime_o v16; // x0
  Il2CppObject *v17; // x21
  System_DateTime_o v18; // x0
  Il2CppObject *v19; // x21
  System_DateTime_o v20; // x0
  struct System_Action_o **p_endCallbackFunc; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  uint64_t dateData; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_596DC20 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_22736/*"mm"*/);
    sub_2213A60(&StringLiteral_9084/*"MM"*/);
    sub_2213A60(&StringLiteral_7518/*"HH"*/);
    sub_2213A60(&StringLiteral_26836/*"ユーザーIDが存在しないため設定できません"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_26358/*"yyyy"*/);
    sub_2213A60(&StringLiteral_19333/*"dd"*/);
    byte_596DC20 = 1;
  }
  dateData = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, endCallback, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, endCallback, method);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->userIdNumber != -1 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, endCallback, method);
    v6.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    inputYear = (UnityEngine_Component_o *)this->fields.inputYear;
    dateData = v6.fields._dateData;
    if ( inputYear )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           inputYear,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9, v10);
      v12.fields._dateData = (uint64_t)&dateData;
      v6.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(v12, (System_String_o *)StringLiteral_26358/*"yyyy"*/, 0);
      if ( Component_object )
      {
        UIInput__set_value((UIInput_o *)Component_object, (System_String_o *)v6.fields._dateData, 0);
        v6.fields._dateData = (uint64_t)this->fields.inputMonth;
        if ( v6.fields._dateData )
        {
          v13 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v6.fields._dateData,
                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
          v14.fields._dateData = (uint64_t)&dateData;
          v6.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(
                                            v14,
                                            (System_String_o *)StringLiteral_9084/*"MM"*/,
                                            0);
          if ( v13 )
          {
            UIInput__set_value((UIInput_o *)v13, (System_String_o *)v6.fields._dateData, 0);
            v6.fields._dateData = (uint64_t)this->fields.inputDay;
            if ( v6.fields._dateData )
            {
              v15 = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)v6.fields._dateData,
                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
              v16.fields._dateData = (uint64_t)&dateData;
              v6.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(
                                                v16,
                                                (System_String_o *)StringLiteral_19333/*"dd"*/,
                                                0);
              if ( v15 )
              {
                UIInput__set_value((UIInput_o *)v15, (System_String_o *)v6.fields._dateData, 0);
                v6.fields._dateData = (uint64_t)this->fields.inputHour;
                if ( v6.fields._dateData )
                {
                  v17 = UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)v6.fields._dateData,
                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
                  v18.fields._dateData = (uint64_t)&dateData;
                  v6.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(
                                                    v18,
                                                    (System_String_o *)StringLiteral_7518/*"HH"*/,
                                                    0);
                  if ( v17 )
                  {
                    UIInput__set_value((UIInput_o *)v17, (System_String_o *)v6.fields._dateData, 0);
                    v6.fields._dateData = (uint64_t)this->fields.inputMinute;
                    if ( v6.fields._dateData )
                    {
                      v19 = UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)v6.fields._dateData,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
                      v20.fields._dateData = (uint64_t)&dateData;
                      v6.fields._dateData = (uint64_t)System_DateTime__ToString_77027772(
                                                        v20,
                                                        (System_String_o *)StringLiteral_22736/*"mm"*/,
                                                        0);
                      if ( v19 )
                      {
                        UIInput__set_value((UIInput_o *)v19, (System_String_o *)v6.fields._dateData, 0);
                        this->fields.endCallbackFunc = endCallback;
                        p_endCallbackFunc = &this->fields.endCallbackFunc;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)p_endCallbackFunc,
                          (int32_t)endCallback,
                          v22,
                          v23,
                          v24,
                          v25,
                          v26,
                          v27);
                        v6.fields._dateData = (uint64_t)*(p_endCallbackFunc - 6);
                        if ( v6.fields._dateData )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6.fields._dateData, 1, 0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(v6.fields._dateData, v7.fields._dateData);
  }
  v6.fields._dateData = (uint64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v6.fields._dateData )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v6.fields._dateData,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_26836/*"ユーザーIDが存在しないため設定できません"*/,
    endCallback,
    -1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0.0,
    0,
    0);
}