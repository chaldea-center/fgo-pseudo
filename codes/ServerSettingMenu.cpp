void ServerSettingMenu___ctor(ServerSettingMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void ServerSettingMenu__Callback(ServerSettingMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServerSettingMenu_CallbackFunc_o *v5; // x20
  struct ServerSettingMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


System_Collections_IEnumerator_o *ServerSettingMenu__CheckURL(ServerSettingMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB3908 & 1) == 0 )
  {
    sub_1C6BA08(&ServerSettingMenu__CheckURL_d__37_TypeInfo);
    byte_4CB3908 = 1;
  }
  v3 = sub_1C6BC54(ServerSettingMenu__CheckURL_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void ServerSettingMenu__Close(ServerSettingMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ServerSettingMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1C6BC60(0, v3);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0);
}


void ServerSettingMenu__EndInput(ServerSettingMenu_o *this, const MethodInfo *method)
{
  UIInput_o *gameServerAddressInput; // x0

  if ( (byte_4CB3904 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3904 = 1;
  }
  if ( this->fields.state )
  {
    gameServerAddressInput = this->fields.gameServerAddressInput;
    if ( !gameServerAddressInput
      || (UIInput__set_value(gameServerAddressInput, (System_String_o *)StringLiteral_1/*""*/, 0),
          (gameServerAddressInput = this->fields.dataServerAddressInput) == 0)
      || (UIInput__set_value(gameServerAddressInput, (System_String_o *)StringLiteral_1/*""*/, 0),
          (gameServerAddressInput = this->fields.webServerAddressInput) == 0)
      || (UIInput__set_value(gameServerAddressInput, (System_String_o *)StringLiteral_1/*""*/, 0),
          (gameServerAddressInput = (UIInput_o *)this->fields.serverSettingRootObject) == 0) )
    {
      sub_1C6BC60(gameServerAddressInput, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameServerAddressInput, 0, 0);
  }
}


bool ServerSettingMenu__GetIsDecidable(ServerSettingMenu_o *this, const MethodInfo *method)
{
  UILabel_o *warningLabel; // x0
  struct UIPopupList_o *serverSelectInput; // x8
  struct UIPopupList_o *v5; // x8
  System_String_o *value; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct UIPopupList_o *v12; // x8
  int32_t v13; // w20
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB3906 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6108/*"Error : \nServer is not Exists"*/);
    sub_1C6BA08(&StringLiteral_3930/*"CUSTOM"*/);
    sub_1C6BA08(&StringLiteral_7479/*"IPADDRESS"*/);
    sub_1C6BA08(&StringLiteral_15597/*"Warning : \nServer Number is not registered."*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3906 = 1;
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_25;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  serverSelectInput = this->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_25;
  warningLabel = (UILabel_o *)System_String__op_Equality(
                                serverSelectInput->fields.mSelectedItem,
                                (System_String_o *)StringLiteral_3930/*"CUSTOM"*/,
                                0);
  if ( ((unsigned __int8)warningLabel & 1) != 0 )
    return 1;
  v5 = this->fields.serverSelectInput;
  if ( !v5 )
    goto LABEL_25;
  if ( System_String__op_Equality(v5->fields.mSelectedItem, (System_String_o *)StringLiteral_7479/*"IPADDRESS"*/, 0) )
    return 1;
  warningLabel = (UILabel_o *)this->fields.gameServerAddressInput;
  if ( !warningLabel )
LABEL_25:
    sub_1C6BC60(warningLabel, method);
  value = UIInput__get_value((UIInput_o *)warningLabel, 0);
  if ( !System_String__op_Equality(value, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    warningLabel = (UILabel_o *)this->fields.dataServerAddressInput;
    if ( !warningLabel )
      goto LABEL_25;
    v8 = UIInput__get_value((UIInput_o *)warningLabel, 0);
    if ( !System_String__op_Equality(v8, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      warningLabel = (UILabel_o *)this->fields.webServerAddressInput;
      if ( !warningLabel )
        goto LABEL_25;
      v9 = UIInput__get_value((UIInput_o *)warningLabel, 0);
      if ( !System_String__op_Equality(v9, (System_String_o *)StringLiteral_1/*""*/, 0) )
      {
        result = 0;
        warningLabel = (UILabel_o *)this->fields.serverNumberInput;
        if ( warningLabel )
        {
          v10 = UIInput__get_value((UIInput_o *)warningLabel, 0);
          warningLabel = (UILabel_o *)System_Int32__TryParse(v10, &result, 0);
          if ( ((unsigned __int8)warningLabel & 1) == 0 )
            return 1;
          v12 = this->fields.serverSelectInput;
          if ( v12 )
          {
            v13 = result;
            if ( v13 <= ServerSettingMenu__GetServerNumberLimit(
                          (ServerSettingMenu_o *)warningLabel,
                          v12->fields.mSelectedItem,
                          v11) )
              return 1;
            warningLabel = this->fields.warningLabel;
            if ( warningLabel )
            {
              v16.fields.g = 0.92157;
              v16.fields.b = 0.015686;
              v16.fields.r = 1.0;
              v16.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)warningLabel, v16, 0);
              warningLabel = this->fields.warningLabel;
              if ( warningLabel )
              {
                UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_15597/*"Warning : \nServer Number is not registered."*/, 0);
                return 1;
              }
            }
          }
        }
        goto LABEL_25;
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_25;
  v15.fields.r = 1.0;
  v15.fields.g = 0.0;
  v15.fields.b = 0.0;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)warningLabel, v15, 0);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_25;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_6108/*"Error : \nServer is not Exists"*/, 0);
  return 0;
}


int32_t ServerSettingMenu__GetServerNumberLimit(
        ServerSettingMenu_o *this,
        System_String_o *serverType,
        const MethodInfo *method)
{
  uint32_t v4; // w0
  __int64 *v6; // x8
  __int64 *v7; // x8

  if ( (byte_4CB3907 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4975/*"DEV"*/);
    sub_1C6BA08(&StringLiteral_12363/*"STG"*/);
    sub_1C6BA08(&StringLiteral_15239/*"VERUP"*/);
    sub_1C6BA08(&StringLiteral_4973/*"DESIGN"*/);
    sub_1C6BA08(&StringLiteral_10808/*"QA"*/);
    sub_1C6BA08(&StringLiteral_10381/*"PLAN"*/);
    sub_1C6BA08(&StringLiteral_8261/*"LIMIT"*/);
    sub_1C6BA08(&StringLiteral_2046/*"AUTOTEST"*/);
    sub_1C6BA08(&StringLiteral_10382/*"PLAY"*/);
    byte_4CB3907 = 1;
  }
  v4 = PrivateImplementationDetails___ComputeStringHash(serverType, 0);
  if ( v4 <= 0x8B41AC8F )
  {
    if ( v4 > 0x5A0F18DC )
    {
      if ( v4 != -1958630257 )
      {
        if ( v4 == 1945490846 && System_String__op_Equality(serverType, (System_String_o *)StringLiteral_2046/*"AUTOTEST"*/, 0) )
          return 2;
        return 0;
      }
      v6 = &StringLiteral_4973/*"DESIGN"*/;
    }
    else
    {
      if ( v4 != 741848159 )
      {
        if ( v4 == 1510938844 && System_String__op_Equality(serverType, (System_String_o *)StringLiteral_4975/*"DEV"*/, 0) )
          return 20;
        return 0;
      }
      v6 = &StringLiteral_15239/*"VERUP"*/;
    }
    goto LABEL_28;
  }
  if ( v4 > 0x9AA4B214 )
  {
    if ( v4 != -1585063406 )
    {
      if ( v4 == -1400509597 )
      {
        v6 = &StringLiteral_10382/*"PLAY"*/;
      }
      else
      {
        if ( v4 != -98183329 )
          return 0;
        v6 = &StringLiteral_12363/*"STG"*/;
      }
      goto LABEL_28;
    }
    v7 = &StringLiteral_10381/*"PLAN"*/;
LABEL_25:
    if ( System_String__op_Equality(serverType, (System_String_o *)*v7, 0) )
      return 99;
    return 0;
  }
  if ( v4 == -1946368377 )
  {
    v7 = &StringLiteral_10808/*"QA"*/;
    goto LABEL_25;
  }
  if ( v4 != -1700482540 )
    return 0;
  v6 = &StringLiteral_8261/*"LIMIT"*/;
LABEL_28:
  if ( System_String__op_Equality(serverType, (System_String_o *)*v6, 0) )
    return 10;
  return 0;
}


bool ServerSettingMenu__OnChangeAnyServerAddress(
        ServerSettingMenu_o *this,
        System_String_o *before,
        System_String_o *after,
        const MethodInfo *method)
{
  ServerSettingMenu_o *v6; // x19
  struct UIPopupList_o *serverSelectInput; // x8
  struct UIPopupList_o *v8; // x8
  ServerSettingMenu_o *v9; // x21
  System_String_o *v10; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4CB3902 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_25521/*"サーバアドレスが手動で変更されたので、\nCUSTOM に変更しました"*/);
    sub_1C6BA08(&StringLiteral_3930/*"CUSTOM"*/);
    this = (ServerSettingMenu_o *)sub_1C6BA08(&StringLiteral_7479/*"IPADDRESS"*/);
    byte_4CB3902 = 1;
  }
  serverSelectInput = v6->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_15;
  this = (ServerSettingMenu_o *)System_String__op_Equality(
                                  serverSelectInput->fields.mSelectedItem,
                                  (System_String_o *)StringLiteral_3930/*"CUSTOM"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = v6->fields.serverSelectInput;
    if ( !v8 )
      goto LABEL_15;
    this = (ServerSettingMenu_o *)System_String__op_Equality(
                                    v8->fields.mSelectedItem,
                                    (System_String_o *)StringLiteral_7479/*"IPADDRESS"*/,
                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !before )
        goto LABEL_15;
      this = (ServerSettingMenu_o *)System_String__Trim(before, 0);
      if ( !after )
        goto LABEL_15;
      v9 = this;
      v10 = System_String__Trim(after, 0);
      if ( System_String__op_Inequality((System_String_o *)v9, v10, 0) )
      {
        this = (ServerSettingMenu_o *)v6->fields.serverSelectInput;
        v6->fields.dontRefreshServerInfoFlag = 1;
        if ( this )
        {
          UIPopupList__set_value((UIPopupList_o *)this, (System_String_o *)StringLiteral_3930/*"CUSTOM"*/, 0);
          this = (ServerSettingMenu_o *)v6->fields.warningLabel;
          if ( this )
          {
            v12.fields.r = 0.0;
            v12.fields.g = 0.0;
            v12.fields.b = 0.0;
            v12.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)this, v12, 0);
            this = (ServerSettingMenu_o *)v6->fields.warningLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_25521/*"サーバアドレスが手動で変更されたので、\nCUSTOM に変更しました"*/, 0);
              return 1;
            }
          }
        }
LABEL_15:
        sub_1C6BC60(this, before);
      }
    }
  }
  return 0;
}


void ServerSettingMenu__OnChangeDataServerAddress(ServerSettingMenu_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *v2; // x19
  struct UIPopupList_o *serverSelectInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *value; // x0
  System_String_o *methods; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4CB3900 & 1) == 0 )
  {
    this = (ServerSettingMenu_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3900 = 1;
  }
  serverSelectInput = v2->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_13;
  this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
  if ( !this )
    goto LABEL_13;
  mSelectedItem = serverSelectInput->fields.mSelectedItem;
  value = UIInput__get_value((UIInput_o *)this, 0);
  System_String__Concat_63966792(mSelectedItem, value, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3926 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB3926 = 1;
  }
  this = (ServerSettingMenu_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    this = (ServerSettingMenu_o *)ManagerConfig_TypeInfo;
  }
  if ( !v2->fields.dataServerAddressInput )
LABEL_13:
    sub_1C6BC60(this, method);
  methods = (System_String_o *)this[1].klass->_1.methods;
  v7 = UIInput__get_value(v2->fields.dataServerAddressInput, 0);
  ServerSettingMenu__OnChangeAnyServerAddress(v2, methods, v7, v8);
}


void ServerSettingMenu__OnChangeGameServerAddress(ServerSettingMenu_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *v2; // x19
  struct UIPopupList_o *serverSelectInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *value; // x0
  System_String_o *properties; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4CB38FF & 1) == 0 )
  {
    this = (ServerSettingMenu_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB38FF = 1;
  }
  serverSelectInput = v2->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_13;
  this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
  if ( !this )
    goto LABEL_13;
  mSelectedItem = serverSelectInput->fields.mSelectedItem;
  value = UIInput__get_value((UIInput_o *)this, 0);
  System_String__Concat_63966792(mSelectedItem, value, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3925 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB3925 = 1;
  }
  this = (ServerSettingMenu_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    this = (ServerSettingMenu_o *)ManagerConfig_TypeInfo;
  }
  if ( !v2->fields.gameServerAddressInput )
LABEL_13:
    sub_1C6BC60(this, method);
  properties = (System_String_o *)this[1].klass->_1.properties;
  v7 = UIInput__get_value(v2->fields.gameServerAddressInput, 0);
  ServerSettingMenu__OnChangeAnyServerAddress(v2, properties, v7, v8);
}


void ServerSettingMenu__OnChangeServerInputType(ServerSettingMenu_o *this, const MethodInfo *method)
{
  UIInput_o *serverNumberInput; // x0
  const MethodInfo *v4; // x1
  struct UIPopupList_o *serverSelectInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *value; // x0
  UnityEngine_Behaviour_o *serverSecurityDispSprite; // x20
  UnityEngine_Behaviour_o *serverSecuritySprite; // x20
  UIInput_o *gameServerAddressInput; // x20
  UIInput_o *dataServerAddressInput; // x20
  UIInput_o *webServerAddressInput; // x20
  struct UIButton_o *serverDecideButton; // x20

  if ( (byte_4CB38FD & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB38FD = 1;
  }
  ServerSettingMenu__SetDefaultServerNumber(this, method);
  if ( !this->fields.dontRefreshServerInfoFlag )
  {
    serverSelectInput = this->fields.serverSelectInput;
    if ( !serverSelectInput )
      goto LABEL_36;
    serverNumberInput = this->fields.serverNumberInput;
    if ( !serverNumberInput )
      goto LABEL_36;
    mSelectedItem = serverSelectInput->fields.mSelectedItem;
    value = UIInput__get_value(serverNumberInput, 0);
    System_String__Concat_63966792(mSelectedItem, value, 0);
    serverSecurityDispSprite = (UnityEngine_Behaviour_o *)this->fields.serverSecurityDispSprite;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB3924 )
    {
      sub_1C6BA08(&ManagerConfig_TypeInfo);
      byte_4CB3924 = 1;
    }
    serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    }
    if ( !serverSecurityDispSprite )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(
      serverSecurityDispSprite,
      *(_BYTE *)(*(_QWORD *)&serverNumberInput->fields.mPosition + 136LL),
      0);
    serverSecuritySprite = (UnityEngine_Behaviour_o *)this->fields.serverSecuritySprite;
    if ( !byte_4CB3924 )
    {
      sub_1C6BA08(&ManagerConfig_TypeInfo);
      byte_4CB3924 = 1;
    }
    serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    }
    if ( !serverSecuritySprite )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(
      serverSecuritySprite,
      *(_BYTE *)(*(_QWORD *)&serverNumberInput->fields.mPosition + 136LL),
      0);
    gameServerAddressInput = this->fields.gameServerAddressInput;
    if ( !byte_4CB3925 )
    {
      sub_1C6BA08(&ManagerConfig_TypeInfo);
      byte_4CB3925 = 1;
    }
    serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    }
    if ( !gameServerAddressInput )
      goto LABEL_36;
    UIInput__set_value(
      gameServerAddressInput,
      *(System_String_o **)(*(_QWORD *)&serverNumberInput->fields.mPosition + 144LL),
      0);
    dataServerAddressInput = this->fields.dataServerAddressInput;
    if ( !byte_4CB3926 )
    {
      sub_1C6BA08(&ManagerConfig_TypeInfo);
      byte_4CB3926 = 1;
    }
    serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    }
    if ( !dataServerAddressInput )
      goto LABEL_36;
    UIInput__set_value(
      dataServerAddressInput,
      *(System_String_o **)(*(_QWORD *)&serverNumberInput->fields.mPosition + 152LL),
      0);
    webServerAddressInput = this->fields.webServerAddressInput;
    if ( !byte_4CB3927 )
    {
      sub_1C6BA08(&ManagerConfig_TypeInfo);
      byte_4CB3927 = 1;
    }
    serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      serverNumberInput = (UIInput_o *)ManagerConfig_TypeInfo;
    }
    if ( !webServerAddressInput )
LABEL_36:
      sub_1C6BC60(serverNumberInput, v4);
    UIInput__set_value(
      webServerAddressInput,
      *(System_String_o **)(*(_QWORD *)&serverNumberInput->fields.mPosition + 160LL),
      0);
  }
  serverDecideButton = this->fields.serverDecideButton;
  this->fields.dontRefreshServerInfoFlag = 0;
  serverNumberInput = (UIInput_o *)ServerSettingMenu__GetIsDecidable(this, v4);
  if ( !serverDecideButton )
    goto LABEL_36;
  ((void (__fastcall *)(struct UIButton_o *, _QWORD, const MethodInfo *))serverDecideButton->klass->vtable._5_set_isEnabled.methodPtr)(
    serverDecideButton,
    (unsigned __int8)serverNumberInput & 1,
    serverDecideButton->klass->vtable._5_set_isEnabled.method);
}


void ServerSettingMenu__OnChangeWebServerAddress(ServerSettingMenu_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *v2; // x19
  struct UIPopupList_o *serverSelectInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *value; // x0
  Il2CppClass **nestedTypes; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4CB3901 & 1) == 0 )
  {
    this = (ServerSettingMenu_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3901 = 1;
  }
  serverSelectInput = v2->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_13;
  this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
  if ( !this )
    goto LABEL_13;
  mSelectedItem = serverSelectInput->fields.mSelectedItem;
  value = UIInput__get_value((UIInput_o *)this, 0);
  System_String__Concat_63966792(mSelectedItem, value, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3927 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB3927 = 1;
  }
  this = (ServerSettingMenu_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    this = (ServerSettingMenu_o *)ManagerConfig_TypeInfo;
  }
  if ( !v2->fields.webServerAddressInput )
LABEL_13:
    sub_1C6BC60(this, method);
  nestedTypes = this[1].klass->_1.nestedTypes;
  v7 = UIInput__get_value(v2->fields.webServerAddressInput, 0);
  ServerSettingMenu__OnChangeAnyServerAddress(v2, (System_String_o *)nestedTypes, v7, v8);
}


void ServerSettingMenu__OnClickCancel(ServerSettingMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    ServerSettingMenu__EndInput(this, method);
    this->fields.state = 2;
    ServerSettingMenu__Callback(this, 0, v3);
  }
}


void ServerSettingMenu__OnClickDecide(ServerSettingMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields.state == 1 )
  {
    v3 = ServerSettingMenu__CheckURL(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  }
}


void ServerSettingMenu__OnClickServerInputSecurity(ServerSettingMenu_o *this, const MethodInfo *method)
{
  struct UIButton_o *serverDecideButton; // x20
  UIWidget_o *IsDecidable; // x0
  __int64 v5; // x1
  struct UIPopupList_o *serverSelectInput; // x8
  UnityEngine_Behaviour_o *serverSecuritySprite; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB38FE & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7479/*"IPADDRESS"*/);
    sub_1C6BA08(&StringLiteral_15596/*"Warning : \nSecurity設定は変更できません(常にHTTPS通信)"*/);
    byte_4CB38FE = 1;
  }
  serverDecideButton = this->fields.serverDecideButton;
  IsDecidable = (UIWidget_o *)ServerSettingMenu__GetIsDecidable(this, method);
  if ( !serverDecideButton )
    goto LABEL_17;
  IsDecidable = (UIWidget_o *)((__int64 (__fastcall *)(struct UIButton_o *, _QWORD, const MethodInfo *))serverDecideButton->klass->vtable._5_set_isEnabled.methodPtr)(
                                serverDecideButton,
                                (unsigned __int8)IsDecidable & 1,
                                serverDecideButton->klass->vtable._5_set_isEnabled.method);
  serverSelectInput = this->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_17;
  if ( System_String__op_Equality(serverSelectInput->fields.mSelectedItem, (System_String_o *)StringLiteral_7479/*"IPADDRESS"*/, 0) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB3928 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3928 = 1;
    }
    IsDecidable = (UIWidget_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsDecidable = (UIWidget_o *)NetworkManager_TypeInfo;
    }
    serverSecuritySprite = (UnityEngine_Behaviour_o *)this->fields.serverSecuritySprite;
    if ( serverSecuritySprite )
    {
      UnityEngine_Behaviour__set_enabled(
        serverSecuritySprite,
        LOBYTE(IsDecidable->fields.onChange[1].fields.extra_arg) == 0,
        0);
      return;
    }
LABEL_17:
    sub_1C6BC60(IsDecidable, v5);
  }
  IsDecidable = (UIWidget_o *)this->fields.warningLabel;
  if ( !IsDecidable )
    goto LABEL_17;
  v8.fields.g = 0.92157;
  v8.fields.b = 0.015686;
  v8.fields.r = 1.0;
  v8.fields.a = 1.0;
  UIWidget__set_color(IsDecidable, v8, 0);
  IsDecidable = (UIWidget_o *)this->fields.warningLabel;
  if ( !IsDecidable )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)IsDecidable, (System_String_o *)StringLiteral_15596/*"Warning : \nSecurity設定は変更できません(常にHTTPS通信)"*/, 0);
}


void ServerSettingMenu__Open(
        ServerSettingMenu_o *this,
        ServerSettingMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0
  const MethodInfo *v8; // x2
  UIPopupList_o *serverSelectInput; // x20
  NetworkManager_c *v10; // x0
  UIInput_o *serverNumberInput; // x20
  NetworkManager_c *v12; // x0
  UIInput_o *gameServerAddressInput; // x20
  UIInput_o *dataServerAddressInput; // x20
  UIInput_o *webServerAddressInput; // x20
  struct UIInput_o *v16; // x8
  System_Collections_Generic_List_EventDelegate__o *onSubmit; // x20
  EventDelegate_Callback_o *v18; // x21
  struct UIInput_o *v19; // x8
  System_Collections_Generic_List_EventDelegate__o *v20; // x20
  EventDelegate_Callback_o *v21; // x21
  struct UIInput_o *v22; // x8
  System_Collections_Generic_List_EventDelegate__o *v23; // x20
  EventDelegate_Callback_o *v24; // x21
  struct UIButton_o *serverDecideButton; // x20
  const MethodInfo *v26; // x1

  if ( (byte_4CB38FC & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ServerSettingMenu_OnChangeDataServerAddress__);
    sub_1C6BA08(&Method_ServerSettingMenu_OnChangeGameServerAddress__);
    sub_1C6BA08(&Method_ServerSettingMenu_OnChangeWebServerAddress__);
    byte_4CB38FC = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    serverSettingRootObject = this->fields.serverSettingRootObject;
    if ( !serverSettingRootObject )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(serverSettingRootObject, 1, 0);
    ServerSettingMenu__SetInputIsEnabled(this, 1, v8);
    serverSelectInput = this->fields.serverSelectInput;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB3920 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3920 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager__GetServerType(
                                                            v10->static_fields->serverSettingType,
                                                            0);
    if ( !serverSelectInput )
      goto LABEL_41;
    UIPopupList__set_value(serverSelectInput, (System_String_o *)serverSettingRootObject, 0);
    serverNumberInput = this->fields.serverNumberInput;
    if ( !byte_4CB3920 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3920 = 1;
    }
    v12 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v12 = NetworkManager_TypeInfo;
    }
    serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager__GetServerNumber(
                                                            v12->static_fields->serverSettingType,
                                                            0);
    if ( !serverNumberInput )
      goto LABEL_41;
    UIInput__set_value(serverNumberInput, (System_String_o *)serverSettingRootObject, 0);
    serverSettingRootObject = (UnityEngine_GameObject_o *)this->fields.serverSecuritySprite;
    if ( !serverSettingRootObject )
      goto LABEL_41;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)serverSettingRootObject, 1, 0);
    gameServerAddressInput = this->fields.gameServerAddressInput;
    if ( !byte_4CB3921 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3921 = 1;
    }
    serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    }
    if ( !gameServerAddressInput )
      goto LABEL_41;
    UIInput__set_value(
      gameServerAddressInput,
      *(System_String_o **)(serverSettingRootObject[7].fields.m_CachedPtr + 192),
      0);
    dataServerAddressInput = this->fields.dataServerAddressInput;
    if ( !byte_4CB3922 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3922 = 1;
    }
    serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    }
    if ( !dataServerAddressInput )
      goto LABEL_41;
    UIInput__set_value(
      dataServerAddressInput,
      *(System_String_o **)(serverSettingRootObject[7].fields.m_CachedPtr + 200),
      0);
    webServerAddressInput = this->fields.webServerAddressInput;
    if ( !byte_4CB3923 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3923 = 1;
    }
    serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      serverSettingRootObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    }
    if ( !webServerAddressInput )
      goto LABEL_41;
    UIInput__set_value(
      webServerAddressInput,
      *(System_String_o **)(serverSettingRootObject[7].fields.m_CachedPtr + 208),
      0);
    v16 = this->fields.gameServerAddressInput;
    if ( !v16 )
      goto LABEL_41;
    onSubmit = v16->fields.onSubmit;
    v18 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v18, (Il2CppObject *)this, Method_ServerSettingMenu_OnChangeGameServerAddress__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    serverSettingRootObject = (UnityEngine_GameObject_o *)EventDelegate__Add(onSubmit, v18, 0);
    v19 = this->fields.dataServerAddressInput;
    if ( !v19 )
      goto LABEL_41;
    v20 = v19->fields.onSubmit;
    v21 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v21, (Il2CppObject *)this, Method_ServerSettingMenu_OnChangeDataServerAddress__, 0);
    serverSettingRootObject = (UnityEngine_GameObject_o *)EventDelegate__Add(v20, v21, 0);
    v22 = this->fields.webServerAddressInput;
    if ( !v22
      || (v23 = v22->fields.onSubmit,
          v24 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo),
          EventDelegate_Callback___ctor(
            v24,
            (Il2CppObject *)this,
            Method_ServerSettingMenu_OnChangeWebServerAddress__,
            0),
          EventDelegate__Add(v23, v24, 0),
          serverDecideButton = this->fields.serverDecideButton,
          serverSettingRootObject = (UnityEngine_GameObject_o *)ServerSettingMenu__GetIsDecidable(this, v26),
          !serverDecideButton) )
    {
LABEL_41:
      sub_1C6BC60(serverSettingRootObject, v6);
    }
    ((void (__fastcall *)(struct UIButton_o *, _QWORD, const MethodInfo *))serverDecideButton->klass->vtable._5_set_isEnabled.methodPtr)(
      serverDecideButton,
      (unsigned __int8)serverSettingRootObject & 1,
      serverDecideButton->klass->vtable._5_set_isEnabled.method);
    this->fields.state = 1;
  }
}


void ServerSettingMenu__SaveServerSettings(ServerSettingMenu_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *v2; // x19
  struct UIPopupList_o *serverSelectInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *value; // x0
  struct UIPopupList_o *v6; // x8
  ServerSettingMenu_o *v7; // x24
  NetworkManager_c *v8; // x0
  char serverSettingSecurity; // w27
  ServerSettingMenu_o *v10; // x22
  ServerSettingMenu_o *v11; // x23
  System_String_o *v12; // x25
  ManagerConfig_c *v13; // x0
  System_String_o *ReleaseGameServerAddress; // x21
  ManagerConfig_c *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2

  v2 = this;
  if ( (byte_4CB3903 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    this = (ServerSettingMenu_o *)sub_1C6BA08(&StringLiteral_7479/*"IPADDRESS"*/);
    byte_4CB3903 = 1;
  }
  serverSelectInput = v2->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_41;
  this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
  if ( !this )
    goto LABEL_41;
  mSelectedItem = serverSelectInput->fields.mSelectedItem;
  value = UIInput__get_value((UIInput_o *)this, 0);
  this = (ServerSettingMenu_o *)System_String__Concat_63966792(mSelectedItem, value, 0);
  v6 = v2->fields.serverSelectInput;
  if ( !v6 )
    goto LABEL_41;
  v7 = this;
  if ( System_String__op_Equality(v6->fields.mSelectedItem, (System_String_o *)StringLiteral_7479/*"IPADDRESS"*/, 0) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB3928 )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB3928 = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    serverSettingSecurity = v8->static_fields->serverSettingSecurity;
  }
  else
  {
    serverSettingSecurity = 1;
  }
  this = (ServerSettingMenu_o *)v2->fields.gameServerAddressInput;
  if ( !this )
    goto LABEL_41;
  this = (ServerSettingMenu_o *)UIInput__get_value((UIInput_o *)this, 0);
  if ( !v2->fields.dataServerAddressInput )
    goto LABEL_41;
  v10 = this;
  this = (ServerSettingMenu_o *)UIInput__get_value(v2->fields.dataServerAddressInput, 0);
  if ( !v2->fields.webServerAddressInput )
    goto LABEL_41;
  v11 = this;
  v12 = UIInput__get_value(v2->fields.webServerAddressInput, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3920 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3920 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3925 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB3925 = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v13 = ManagerConfig_TypeInfo;
  }
  ReleaseGameServerAddress = v13->static_fields->ReleaseGameServerAddress;
  this = (ServerSettingMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !this
    || (NetworkManager__SetServerSetting(
          (NetworkManager_o *)this,
          (System_String_o *)v7,
          serverSettingSecurity,
          (System_String_o *)v10,
          (System_String_o *)v11,
          v12,
          0),
        (this = (ServerSettingMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
  {
LABEL_41:
    sub_1C6BC60(this, method);
  }
  NetworkManager__WriteServerSetting((NetworkManager_o *)this, 0);
  if ( !byte_4CB3920 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3920 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3925 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB3925 = 1;
  }
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( System_String__op_Inequality(v15->static_fields->ReleaseGameServerAddress, ReleaseGameServerAddress, 0) )
    UserSaveData__DeleteSaveData(0, 0);
  ServerSettingMenu__SetInputIsEnabled(v2, 0, v16);
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  ServerSettingMenu__EndInput(v2, v17);
  v2->fields.state = 2;
  ServerSettingMenu__Callback(v2, 1, v18);
}


void ServerSettingMenu__SetDefaultServerNumber(ServerSettingMenu_o *this, const MethodInfo *method)
{
  ServerSettingMenu_o *v2; // x19
  struct UIPopupList_o *serverSelectInput; // x8
  System_String_o *mSelectedItem; // x20
  uint32_t v5; // w0
  __int64 *v6; // x8
  UIInput_o *v7; // x20
  System_String_o *value; // x0
  System_String_o *v9; // x1
  struct UIInput_o *serverNumberInput; // x8
  UILabel_o *v11; // x19

  v2 = this;
  if ( (byte_4CB3905 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C6BA08(&StringLiteral_4975/*"DEV"*/);
    sub_1C6BA08(&StringLiteral_12363/*"STG"*/);
    sub_1C6BA08(&StringLiteral_22324/*"no number"*/);
    sub_1C6BA08(&StringLiteral_15239/*"VERUP"*/);
    sub_1C6BA08(&StringLiteral_4973/*"DESIGN"*/);
    sub_1C6BA08(&StringLiteral_10808/*"QA"*/);
    sub_1C6BA08(&StringLiteral_10381/*"PLAN"*/);
    sub_1C6BA08(&StringLiteral_8261/*"LIMIT"*/);
    sub_1C6BA08(&StringLiteral_2046/*"AUTOTEST"*/);
    sub_1C6BA08(&StringLiteral_10382/*"PLAY"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    this = (ServerSettingMenu_o *)sub_1C6BA08(&StringLiteral_1165/*"1"*/);
    byte_4CB3905 = 1;
  }
  serverSelectInput = v2->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_42;
  mSelectedItem = serverSelectInput->fields.mSelectedItem;
  v5 = PrivateImplementationDetails___ComputeStringHash(mSelectedItem, 0);
  if ( v5 > 0x8B41AC8F )
  {
    if ( v5 > 0x9AA4B214 )
    {
      switch ( v5 )
      {
        case 0xA185DA12:
          v6 = &StringLiteral_10381/*"PLAN"*/;
          break;
        case 0xAC85EB63:
          v6 = &StringLiteral_10382/*"PLAY"*/;
          break;
        case 0xFA25D75F:
          v6 = &StringLiteral_12363/*"STG"*/;
          break;
        default:
          goto LABEL_31;
      }
    }
    else if ( v5 == -1946368377 )
    {
      v6 = &StringLiteral_10808/*"QA"*/;
    }
    else
    {
      if ( v5 != -1700482540 )
        goto LABEL_31;
      v6 = &StringLiteral_8261/*"LIMIT"*/;
    }
  }
  else if ( v5 > 0x5A0F18DC )
  {
    if ( v5 == -1958630257 )
    {
      v6 = &StringLiteral_4973/*"DESIGN"*/;
    }
    else
    {
      if ( v5 != 1945490846 )
        goto LABEL_31;
      v6 = &StringLiteral_2046/*"AUTOTEST"*/;
    }
  }
  else
  {
    if ( v5 != 741848159 )
    {
      if ( v5 == 1510938844 )
      {
        v6 = &StringLiteral_4975/*"DEV"*/;
        goto LABEL_25;
      }
LABEL_31:
      this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
      if ( this )
      {
        this = (ServerSettingMenu_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( this )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
          serverNumberInput = v2->fields.serverNumberInput;
          if ( serverNumberInput )
          {
            this = (ServerSettingMenu_o *)serverNumberInput->fields.label;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_22324/*"no number"*/, 0);
              this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
              if ( this )
              {
                UIInput__set_value((UIInput_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
                return;
              }
            }
          }
        }
      }
      goto LABEL_42;
    }
    v6 = &StringLiteral_15239/*"VERUP"*/;
  }
LABEL_25:
  if ( !System_String__op_Equality(mSelectedItem, (System_String_o *)*v6, 0) )
    goto LABEL_31;
  this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
  if ( !this )
    goto LABEL_42;
  this = (ServerSettingMenu_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !this )
    goto LABEL_42;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 1, 0);
  v7 = v2->fields.serverNumberInput;
  if ( !v7 )
    goto LABEL_42;
  value = UIInput__get_value(v2->fields.serverNumberInput, 0);
  if ( System_String__op_Equality(value, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v9 = (System_String_o *)StringLiteral_1165/*"1"*/;
  }
  else
  {
    this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
    if ( !this )
      goto LABEL_42;
    v9 = UIInput__get_value((UIInput_o *)this, 0);
  }
  UIInput__set_value(v7, v9, 0);
  this = (ServerSettingMenu_o *)v2->fields.serverNumberInput;
  if ( !this
    || (v11 = *(UILabel_o **)&this->fields.group,
        this = (ServerSettingMenu_o *)UIInput__get_value((UIInput_o *)this, 0),
        !v11) )
  {
LABEL_42:
    sub_1C6BC60(this, method);
  }
  UILabel__set_text(v11, (System_String_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServerSettingMenu__SetInputIsEnabled(ServerSettingMenu_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *serverSelectInput; // x0
  bool v5; // w21
  bool v7; // w20

  serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.serverSelectInput;
  if ( !serverSelectInput )
    goto LABEL_10;
  v5 = value;
  UnityEngine_Behaviour__set_enabled(serverSelectInput, value, 0);
  serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.serverNumberInput;
  if ( !serverSelectInput )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled(serverSelectInput, v5, 0);
  serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.serverSecurityButton;
  if ( !serverSelectInput )
    goto LABEL_10;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))serverSelectInput->klass[1]._1.name)(
    serverSelectInput,
    value,
    serverSelectInput->klass[1]._1.namespaze);
  serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.gameServerAddressInput;
  if ( !serverSelectInput )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled(serverSelectInput, value, 0);
  serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.dataServerAddressInput;
  if ( !serverSelectInput
    || (UnityEngine_Behaviour__set_enabled(serverSelectInput, value, 0),
        (serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.webServerAddressInput) == 0)
    || (UnityEngine_Behaviour__set_enabled(serverSelectInput, value, 0),
        (serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.serverDecideButton) == 0)
    || (v7 = value,
        UnityEngine_Behaviour__set_enabled(serverSelectInput, v7, 0),
        (serverSelectInput = (UnityEngine_Behaviour_o *)this->fields.serverCancelButton) == 0) )
  {
LABEL_10:
    sub_1C6BC60(serverSelectInput, value);
  }
  UnityEngine_Behaviour__set_enabled(serverSelectInput, v7, 0);
}


void ServerSettingMenu__StartMenu(ServerSettingMenu_o *this, const MethodInfo *method)
{
  ServerSettingMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4CB38FB & 1) == 0 )
  {
    sub_1C6BA08(&ServerSettingMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ServerSettingMenu__StartMenu_b__19_0__);
    byte_4CB38FB = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (ServerSettingMenu_CallbackFunc_o *)sub_1C6BC54(ServerSettingMenu_CallbackFunc_TypeInfo);
  ServerSettingMenu_CallbackFunc___ctor(v3, (Il2CppObject *)this, Method_ServerSettingMenu__StartMenu_b__19_0__, v4);
  ServerSettingMenu__Open(this, v3, v5);
}


void ServerSettingMenu__add_callbackFunc(
        ServerSettingMenu_o *this,
        ServerSettingMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServerSettingMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServerSettingMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServerSettingMenu_o *v11; // x0
  ServerSettingMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB38F9 & 1) == 0 )
  {
    sub_1C6BA08(&ServerSettingMenu_CallbackFunc_TypeInfo);
    byte_4CB38F9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServerSettingMenu_CallbackFunc_c *)v8->klass != ServerSettingMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  ServerSettingMenu__remove_callbackFunc(v11, v12, v13);
}


void ServerSettingMenu__remove_callbackFunc(
        ServerSettingMenu_o *this,
        ServerSettingMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServerSettingMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServerSettingMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServerSettingMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB38FA & 1) == 0 )
  {
    sub_1C6BA08(&ServerSettingMenu_CallbackFunc_TypeInfo);
    byte_4CB38FA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServerSettingMenu_CallbackFunc_c *)v8->klass != ServerSettingMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  ServerSettingMenu__StartMenu(v11, v12);
}


void ServerSettingMenu_CallbackFunc___ctor(
        ServerSettingMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9F1E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F198;
}


System_IAsyncResult_o *ServerSettingMenu_CallbackFunc__BeginInvoke(
        ServerSettingMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB3909 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB3909 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ServerSettingMenu_CallbackFunc__EndInvoke(
        ServerSettingMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void ServerSettingMenu_CallbackFunc__Invoke(
        ServerSettingMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ServerSettingMenu__CheckURL_d__37___ctor(
        ServerSettingMenu__CheckURL_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServerSettingMenu__CheckURL_d__37__MoveNext(ServerSettingMenu__CheckURL_d__37_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ServerSettingMenu_o *_4__this; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  UIInput_o *gameServerAddressInput; // x0
  System_String_o *v10; // x19
  System_String_o *value; // x1
  System_String_o *v12; // x0
  struct UnityEngine_Networking_UnityWebRequest_o *v13; // x1
  ServerSettingMenu__CheckURL_d__37_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  UnityEngine_Networking_UnityWebRequest_o *v18; // x0
  Il2CppObject *v19; // x1
  ServerSettingMenu__CheckURL_d__37_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_Networking_UnityWebRequest_o *www_5__2; // x0
  System_String_o *error; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Networking_UnityWebRequest_o *v31; // x0
  UIWidget_o *warningLabel; // x0
  __int64 v33; // x1
  UILabel_o *v34; // x0
  const MethodInfo *v35; // x1
  ServerSettingMenu__CheckURL_d__37_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  ServerSettingMenu__CheckURL_d__37_o **v39; // [xsp+8h] [xbp-28h]
  ServerSettingMenu__CheckURL_d__37_o *v40; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v40 = this;
  if ( (byte_4CB390A & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_6108/*"Error : \nServer is not Exists"*/);
    sub_1C6BA08(&StringLiteral_1096/*"/gamedata/top"*/);
    sub_1C6BA08(&StringLiteral_20142/*"https://"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB390A = 1;
  }
  v39 = &v40;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -3;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v25);
    CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
    www_5__2 = v40->fields._www_5__2;
    if ( !www_5__2 )
      sub_1C6BC60(0, v26);
    error = UnityEngine_Networking_UnityWebRequest__get_error(www_5__2, 0);
    v29 = (System_String_o *)System_String__op_Equality(error, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( ((unsigned __int8)v29 & 1) != 0 )
      goto LABEL_19;
    v31 = v40->fields._www_5__2;
    if ( !v31 )
      sub_1C6BC60(0, v30);
    v29 = UnityEngine_Networking_UnityWebRequest__get_error(v31, 0);
    if ( !v29 )
    {
LABEL_19:
      if ( !_4__this )
        sub_1C6BC60(v29, v30);
      ServerSettingMenu__SaveServerSettings(_4__this, v30);
    }
    else
    {
      if ( !_4__this )
        sub_1C6BC60(v29, v30);
      warningLabel = (UIWidget_o *)_4__this->fields.warningLabel;
      if ( !warningLabel )
        sub_1C6BC60(0, v30);
      v41.fields.r = 1.0;
      v41.fields.g = 0.0;
      v41.fields.b = 0.0;
      v41.fields.a = 1.0;
      UIWidget__set_color(warningLabel, v41, 0);
      v34 = _4__this->fields.warningLabel;
      if ( !v34 )
        sub_1C6BC60(0, v33);
      UILabel__set_text(v34, (System_String_o *)StringLiteral_6108/*"Error : \nServer is not Exists"*/, 0);
    }
    ServerSettingMenu__CheckURL_d__37____m__Finally1(v40, v35);
    v36 = v40;
    v40->fields._www_5__2 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v36->fields._www_5__2, 0, v37, v38);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    sub_1C6BC60(0, v6);
  CommonUI__SetConnect((CommonUI_o *)v5, 1, 0);
  if ( !_4__this )
    sub_1C6BC60(v7, v8);
  gameServerAddressInput = _4__this->fields.gameServerAddressInput;
  if ( !gameServerAddressInput )
    sub_1C6BC60(0, v8);
  v10 = (System_String_o *)StringLiteral_20142/*"https://"*/;
  value = UIInput__get_value(gameServerAddressInput, 0);
  v12 = System_String__Concat_64005056(v10, value, (System_String_o *)StringLiteral_1096/*"/gamedata/top"*/, 0);
  v13 = UnityEngine_Networking_UnityWebRequest__Get(v12, 0);
  v14 = v40;
  v40->fields._www_5__2 = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->fields._www_5__2, (int32_t)v13, v15, v16);
  v18 = v40->fields._www_5__2;
  v40->fields.__1__state = -3;
  if ( !v18 )
    sub_1C6BC60(0, v17);
  v19 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v18, 0);
  v20 = v40;
  v40->fields.__2__current = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.__2__current, (int32_t)v19, v21, v22);
  result = 1;
  v40->fields.__1__state = 1;
  return result;
}


Il2CppObject *ServerSettingMenu__CheckURL_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServerSettingMenu__CheckURL_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServerSettingMenu__CheckURL_d__37__System_Collections_IEnumerator_Reset(
        ServerSettingMenu__CheckURL_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ServerSettingMenu__CheckURL_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ServerSettingMenu__CheckURL_d__37__System_Collections_IEnumerator_get_Current(
        ServerSettingMenu__CheckURL_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServerSettingMenu__CheckURL_d__37__System_IDisposable_Dispose(
        ServerSettingMenu__CheckURL_d__37_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServerSettingMenu__CheckURL_d__37____m__Finally1(this, method);
}


void ServerSettingMenu__CheckURL_d__37____m__Finally1(
        ServerSettingMenu__CheckURL_d__37_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *www_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CB390B & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    byte_4CB390B = 1;
  }
  www_5__2 = this->fields._www_5__2;
  this->fields.__1__state = -1;
  if ( www_5__2 )
  {
    klass = www_5__2->klass;
    v5 = *(unsigned __int16 *)&www_5__2->klass->_2.rank;
    if ( *(_WORD *)&www_5__2->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v7 = sub_1C41D90(www_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      www_5__2,
      *(_QWORD *)(v7 + 8));
  }
}