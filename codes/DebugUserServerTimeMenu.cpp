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

  if ( (byte_4CC48C2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DebugUserServerTimeMenu__StartMenu_b__7_0__);
    byte_4CC48C2 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_DebugUserServerTimeMenu__StartMenu_b__7_0__, 0);
  DebugUserServerTimeMenu__open(this, v3, v4);
}


void DebugUserServerTimeMenu__close(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    sub_1C71608(0, method);
  UnityEngine_GameObject__SetActive(rootObject, 0, 0);
}


void DebugUserServerTimeMenu__endCallback(DebugUserServerTimeMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallbackFunc; // t1

  endCallbackFunc = this->fields.endCallbackFunc;
  p_endCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackFunc;
  v9 = endCallbackFunc;
  if ( endCallbackFunc )
  {
    p_endCallbackFunc->klass = 0;
    sub_1C71354(p_endCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  System_DateTime_o v6; // x1
  UnityEngine_Component_o *inputYear; // x0
  Il2CppObject *Component_object; // x21
  System_DateTime_o v9; // x0
  Il2CppObject *v10; // x21
  System_DateTime_o v11; // x0
  Il2CppObject *v12; // x21
  System_DateTime_o v13; // x0
  Il2CppObject *v14; // x21
  System_DateTime_o v15; // x0
  Il2CppObject *v16; // x21
  System_DateTime_o v17; // x0
  struct System_Action_o **p_endCallbackFunc; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  uint64_t dateData; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4CC48C3 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_21734/*"mm"*/);
    sub_1C713B0(&StringLiteral_8722/*"MM"*/);
    sub_1C713B0(&StringLiteral_7216/*"HH"*/);
    sub_1C713B0(&StringLiteral_25566/*"ユーザーIDが存在しないため設定できません"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_25110/*"yyyy"*/);
    sub_1C713B0(&StringLiteral_18537/*"dd"*/);
    byte_4CC48C3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
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
                           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v9.fields._dateData = (uint64_t)&dateData;
      inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_65429908(
                                               v9,
                                               (System_String_o *)StringLiteral_25110/*"yyyy"*/,
                                               0);
      if ( Component_object )
      {
        UIInput__set_value((UIInput_o *)Component_object, (System_String_o *)inputYear, 0);
        inputYear = (UnityEngine_Component_o *)this->fields.inputMonth;
        if ( inputYear )
        {
          v10 = UnityEngine_Component__GetComponent_object_(
                  inputYear,
                  (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
          v11.fields._dateData = (uint64_t)&dateData;
          inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_65429908(
                                                   v11,
                                                   (System_String_o *)StringLiteral_8722/*"MM"*/,
                                                   0);
          if ( v10 )
          {
            UIInput__set_value((UIInput_o *)v10, (System_String_o *)inputYear, 0);
            inputYear = (UnityEngine_Component_o *)this->fields.inputDay;
            if ( inputYear )
            {
              v12 = UnityEngine_Component__GetComponent_object_(
                      inputYear,
                      (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
              v13.fields._dateData = (uint64_t)&dateData;
              inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_65429908(
                                                       v13,
                                                       (System_String_o *)StringLiteral_18537/*"dd"*/,
                                                       0);
              if ( v12 )
              {
                UIInput__set_value((UIInput_o *)v12, (System_String_o *)inputYear, 0);
                inputYear = (UnityEngine_Component_o *)this->fields.inputHour;
                if ( inputYear )
                {
                  v14 = UnityEngine_Component__GetComponent_object_(
                          inputYear,
                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
                  v15.fields._dateData = (uint64_t)&dateData;
                  inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_65429908(
                                                           v15,
                                                           (System_String_o *)StringLiteral_7216/*"HH"*/,
                                                           0);
                  if ( v14 )
                  {
                    UIInput__set_value((UIInput_o *)v14, (System_String_o *)inputYear, 0);
                    inputYear = (UnityEngine_Component_o *)this->fields.inputMinute;
                    if ( inputYear )
                    {
                      v16 = UnityEngine_Component__GetComponent_object_(
                              inputYear,
                              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
                      v17.fields._dateData = (uint64_t)&dateData;
                      inputYear = (UnityEngine_Component_o *)System_DateTime__ToString_65429908(
                                                               v17,
                                                               (System_String_o *)StringLiteral_21734/*"mm"*/,
                                                               0);
                      if ( v16 )
                      {
                        UIInput__set_value((UIInput_o *)v16, (System_String_o *)inputYear, 0);
                        this->fields.endCallbackFunc = endCallback;
                        p_endCallbackFunc = &this->fields.endCallbackFunc;
                        sub_1C71354(
                          (GrandQuestFolderBoardItem_o *)p_endCallbackFunc,
                          (int32_t)endCallback,
                          v19,
                          v20,
                          v21,
                          v22,
                          v23,
                          v24);
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
    sub_1C71608(inputYear, v6.fields._dateData);
  }
  inputYear = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !inputYear )
    goto LABEL_29;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)inputYear,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_25566/*"ユーザーIDが存在しないため設定できません"*/,
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