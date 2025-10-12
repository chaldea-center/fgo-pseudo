void DebugUserServerTimeMenu___ctor(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void DebugUserServerTimeMenu__SetupUserServerTimeWin(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  ;
}


void DebugUserServerTimeMenu__StartMenu(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C34ED0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DebugUserServerTimeMenu__StartMenu_b__7_0__);
    byte_4C34ED0 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_DebugUserServerTimeMenu__StartMenu_b__7_0__, 0);
  DebugUserServerTimeMenu__open(this, v3, v4);
}


void DebugUserServerTimeMenu__close(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(rootObject, 0, 0);
}


void DebugUserServerTimeMenu__endCallback(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallbackFunc; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *endCallbackFunc; // t1

  endCallbackFunc = this->fields.endCallbackFunc;
  p_endCallbackFunc = (CGThumbnailListItem_o *)&this->fields.endCallbackFunc;
  v5 = endCallbackFunc;
  if ( endCallbackFunc )
  {
    p_endCallbackFunc->klass = 0;
    sub_1C32BC4(p_endCallbackFunc, 0, v2, v3);
    ActionExtensions__Call(v5, 0);
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
  UnityEngine_Component_o *inputYear; // x0
  Il2CppObject *Component_object; // x21
  System_DateTime_o v8; // x0
  Il2CppObject *v9; // x21
  System_DateTime_o v10; // x0
  Il2CppObject *v11; // x21
  System_DateTime_o v12; // x0
  Il2CppObject *v13; // x21
  System_DateTime_o v14; // x0
  Il2CppObject *v15; // x21
  System_DateTime_o v16; // x0
  struct System_Action_o **p_endCallbackFunc; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  uint64_t dateData; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4C34ED1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_21631/*"mm"*/);
    sub_1C32C20(&StringLiteral_8720/*"MM"*/);
    sub_1C32C20(&StringLiteral_7218/*"HH"*/);
    sub_1C32C20(&StringLiteral_25431/*"ユーザーIDが存在しないため設定できません"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_24975/*"yyyy"*/);
    sub_1C32C20(&StringLiteral_18496/*"dd"*/);
    byte_4C34ED1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->userIdNumber != -1 )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    inputYear = (UnityEngine_Component_o *)this->fields.inputYear;
    if ( inputYear )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           inputYear,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v8.fields._dateData = (uint64_t)&dateData;
      inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_64918340(
                                               v8,
                                               (System_String_o *)StringLiteral_24975/*"yyyy"*/,
                                               0);
      if ( Component_object )
      {
        UIInput__set_value((UIInput_o *)Component_object, (System_String_o *)inputYear, 0);
        inputYear = (UnityEngine_Component_o *)this->fields.inputMonth;
        if ( inputYear )
        {
          v9 = UnityEngine_Component__GetComponent_object_(
                 inputYear,
                 (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
          v10.fields._dateData = (uint64_t)&dateData;
          inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_64918340(
                                                   v10,
                                                   (System_String_o *)StringLiteral_8720/*"MM"*/,
                                                   0);
          if ( v9 )
          {
            UIInput__set_value((UIInput_o *)v9, (System_String_o *)inputYear, 0);
            inputYear = (UnityEngine_Component_o *)this->fields.inputDay;
            if ( inputYear )
            {
              v11 = UnityEngine_Component__GetComponent_object_(
                      inputYear,
                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
              v12.fields._dateData = (uint64_t)&dateData;
              inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_64918340(
                                                       v12,
                                                       (System_String_o *)StringLiteral_18496/*"dd"*/,
                                                       0);
              if ( v11 )
              {
                UIInput__set_value((UIInput_o *)v11, (System_String_o *)inputYear, 0);
                inputYear = (UnityEngine_Component_o *)this->fields.inputHour;
                if ( inputYear )
                {
                  v13 = UnityEngine_Component__GetComponent_object_(
                          inputYear,
                          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
                  v14.fields._dateData = (uint64_t)&dateData;
                  inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_64918340(
                                                           v14,
                                                           (System_String_o *)StringLiteral_7218/*"HH"*/,
                                                           0);
                  if ( v13 )
                  {
                    UIInput__set_value((UIInput_o *)v13, (System_String_o *)inputYear, 0);
                    inputYear = (UnityEngine_Component_o *)this->fields.inputMinute;
                    if ( inputYear )
                    {
                      v15 = UnityEngine_Component__GetComponent_object_(
                              inputYear,
                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
                      v16.fields._dateData = (uint64_t)&dateData;
                      inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_64918340(
                                                               v16,
                                                               (System_String_o *)StringLiteral_21631/*"mm"*/,
                                                               0);
                      if ( v15 )
                      {
                        UIInput__set_value((UIInput_o *)v15, (System_String_o *)inputYear, 0);
                        this->fields.endCallbackFunc = endCallback;
                        p_endCallbackFunc = &this->fields.endCallbackFunc;
                        sub_1C32BC4((CGThumbnailListItem_o *)p_endCallbackFunc, (int32_t)endCallback, v18, v19);
                        inputYear = (UnityEngine_Component_o *)*(p_endCallbackFunc - 6);
                        if ( inputYear )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inputYear, 1, 0);
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
    sub_1C32E7C(inputYear);
  }
  inputYear = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !inputYear )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)inputYear,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_25431/*"ユーザーIDが存在しないため設定できません"*/,
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