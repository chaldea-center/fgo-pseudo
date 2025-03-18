// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInterruptionRequest__beginRequest(
        BattleInterruptionRequest_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restartWave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4C23832 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22978/*"shortcut_board_icon_war_9999"*/, *(_QWORD *)&questId);
    sub_1C3B764(&StringLiteral_23160/*"start2"*/, v9);
    sub_1C3B764(&StringLiteral_23378/*"svtProfileLimit"*/, v10);
    byte_4C23832 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23160/*"start2"*/,
    questId,
    *(const MethodInfo **)&restartWave);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22978/*"shortcut_board_icon_war_9999"*/, phase, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23378/*"svtProfileLimit"*/, restartWave, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall BattleInterruptionRequest__getURL(
        BattleInterruptionRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23831 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17422/*"card_bg_np{0}"*/, v2);
    byte_4C23831 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_17422/*"card_bg_np{0}"*/, 0LL);
}


void __fastcall BattleInterruptionRequest__requestCompleted(
        BattleInterruptionRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4C23833 & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C23833 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(128, responseList, 0LL);
  if ( v7 && ResponseData__checkError_42712632(v7, 0LL) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}