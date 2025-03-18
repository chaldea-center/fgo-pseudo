void __fastcall BattleMultiMessageDisplay___ctor(
        BattleMultiMessageDisplay_o *this,
        BattlePerformance_o *inputPerf,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.perf = inputPerf;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)inputPerf, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage(
        BattleMultiMessageDisplay_o *this,
        BattleActionData_DisplayMessageData_o *message,
        int32_t index,
        float startDelayTime,
        const MethodInfo *method)
{
  __int64 v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C24FDB & 1) == 0 )
  {
    sub_1C3B764(&BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_TypeInfo, message);
    byte_4C24FDB = 1;
  }
  v9 = sub_1C3B9B0(BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = message;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)message, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = index;
  *(float *)(v9 + 32) = startDelayTime;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleMultiMessageDisplay__CoroutineWaitEndMessage(
        BattleMultiMessageDisplay_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C24FDC & 1) == 0 )
  {
    sub_1C3B764(&BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_TypeInfo, callBack);
    byte_4C24FDC = 1;
  }
  v5 = sub_1C3B9B0(BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callBack;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callBack, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleMultiMessageDisplay__DestroyMessageObject(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_messageObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *messageObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C24FDD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C24FDD = 1;
  }
  messageObject = this->fields.messageObject;
  p_messageObject = (PartyOrganizationUtility_o *)&this->fields.messageObject;
  v4 = (UnityEngine_Object_o *)messageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_messageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(klass, 0LL);
    p_messageObject->klass = 0LL;
    sub_1C3B708(p_messageObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMultiMessageDisplay__DisplayMessage(
        BattleMultiMessageDisplay_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleMultiMessageDisplay_Argument_o *arg; // x0
  BattleActionData_DisplayMessageData_o *Message; // x0
  BattleActionData_DisplayMessageData_o *v7; // x21
  float MessageStartDelayTime_k__BackingField; // s8
  struct BattleMultiMessageDisplay_Argument_o *v9; // x8
  UnityEngine_MonoBehaviour_o *perf; // x22
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *v12; // x0
  __int64 v13; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  arg = this->fields.arg;
  if ( arg && (Message = BattleMultiMessageDisplay_Argument__GetMessage(arg, index, method)) != 0LL )
  {
    v7 = Message;
    MessageStartDelayTime_k__BackingField = 0.0;
    if ( !index )
    {
      v9 = this->fields.arg;
      if ( v9 )
        MessageStartDelayTime_k__BackingField = v9->fields._MessageStartDelayTime_k__BackingField;
    }
    BattleMultiMessageDisplay__StopMessageCoroutine(this, *(const MethodInfo **)&index);
    perf = (UnityEngine_MonoBehaviour_o *)this->fields.perf;
    v12 = BattleMultiMessageDisplay__CoroutineDisplayMessage(
            this,
            v7,
            index,
            MessageStartDelayTime_k__BackingField,
            v11);
    if ( !perf )
      sub_1C3B9C0(v12, v13);
    started = UnityEngine_MonoBehaviour__StartCoroutine_71108020(perf, v12, 0LL);
    this->fields.corDisplayMessage = started;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.corDisplayMessage,
      (int64_t)started,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  else
  {
    BattleMultiMessageDisplay__ReleaseMessage_45445616(this, *(const MethodInfo **)&index);
  }
}


void __fastcall BattleMultiMessageDisplay__DisplayStart(
        BattleMultiMessageDisplay_o *this,
        BattleMultiMessageDisplay_Argument_o *inputArg,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleMultiMessageDisplay_o *v4; // x19
  struct BattlePerformance_o *v6; // x8
  ParseBattleMessage_o *ParseBattleMsg; // x0
  const MethodInfo *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( inputArg )
  {
    perf = this->fields.perf;
    v4 = this;
    if ( !perf
      || (this = (BattleMultiMessageDisplay_o *)perf->fields.infoComp) == 0LL
      || (BattleInformationComponent__DestroyDisplayingMessage((BattleInformationComponent_o *)this, 1, method),
          (v6 = v4->fields.perf) == 0LL)
      || (this = (BattleMultiMessageDisplay_o *)v6->fields.logic) == 0LL )
    {
      sub_1C3B9C0(this, inputArg);
    }
    ParseBattleMsg = BattleLogic__get_ParseBattleMsg((BattleLogic_o *)this, 0LL);
    BattleMultiMessageDisplay_Argument__InitPreDisplayMessage(inputArg, ParseBattleMsg, v8);
    v4->fields.arg = inputArg;
    sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.arg, (int64_t)inputArg, v9, v10, v11, v12, v13, v14);
    BattleMultiMessageDisplay__DisplayMessage(v4, 0, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMultiMessageDisplay__ReleaseMessage(
        BattleMultiMessageDisplay_o *this,
        bool isDisplayNextMessage,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  if ( isDisplayNextMessage || (arg = this->fields.arg) == 0LL || !arg->fields._IsContinueDisplayMessage_k__BackingField )
    BattleMultiMessageDisplay__ReleaseMessage_45445616(this, (const MethodInfo *)isDisplayNextMessage);
}


void __fastcall BattleMultiMessageDisplay__ReleaseMessage_45445616(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  BattleMultiMessageDisplay__StopMessageCoroutine(this, method);
  BattleMultiMessageDisplay__DestroyMessageObject(this, v3);
  this->fields.arg = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.arg, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleMultiMessageDisplay__StopMessageCoroutine(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *corDisplayMessage; // x1
  PartyOrganizationUtility_o *p_corDisplayMessage; // x19
  UnityEngine_MonoBehaviour_o *perf; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_corDisplayMessage = (PartyOrganizationUtility_o *)&this->fields.corDisplayMessage;
  corDisplayMessage = this->fields.corDisplayMessage;
  if ( corDisplayMessage )
  {
    perf = (UnityEngine_MonoBehaviour_o *)this->fields.perf;
    if ( !perf )
      sub_1C3B9C0(0LL, corDisplayMessage);
    UnityEngine_MonoBehaviour__StopCoroutine_71108640(perf, corDisplayMessage, 0LL);
    p_corDisplayMessage->klass = 0LL;
    sub_1C3B708(p_corDisplayMessage, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall BattleMultiMessageDisplay__WaitEndMessage(
        BattleMultiMessageDisplay_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8
  UnityEngine_MonoBehaviour_o *perf; // x19
  System_Collections_IEnumerator_o *v5; // x0
  __int64 v6; // x1

  arg = this->fields.arg;
  if ( arg && arg->fields._IsWaitMessageEnd_k__BackingField )
  {
    perf = (UnityEngine_MonoBehaviour_o *)this->fields.perf;
    v5 = BattleMultiMessageDisplay__CoroutineWaitEndMessage(this, callBack, method);
    if ( !perf )
      sub_1C3B9C0(v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020(perf, v5, 0LL);
  }
  else
  {
    ActionExtensions__Call(callBack, 0LL);
  }
}


bool __fastcall BattleMultiMessageDisplay__get_ExistMessage(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  arg = this->fields.arg;
  if ( arg )
    LOBYTE(arg) = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)arg->fields.messageArray, 0LL);
  return (unsigned __int8)arg & 1;
}


BattleInformationComponent_o *__fastcall BattleMultiMessageDisplay__get_InfoComp(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1C3B9C0(this, method);
  return perf->fields.infoComp;
}


bool __fastcall BattleMultiMessageDisplay__get_IsContinueDisplayMessage(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  arg = this->fields.arg;
  return arg && arg->fields._IsContinueDisplayMessage_k__BackingField;
}


bool __fastcall BattleMultiMessageDisplay__get_IsWaitEndMessage(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  arg = this->fields.arg;
  return arg && arg->fields._IsWaitMessageEnd_k__BackingField;
}


void __fastcall BattleMultiMessageDisplay_Argument___ctor(
        BattleMultiMessageDisplay_Argument_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dataVal )
    sub_1C3B9C0(v5, v6);
  this->fields._MessageId_k__BackingField = DataVals__GetValue(dataVal, 0LL);
  this->fields._IsWaitMessageEnd_k__BackingField = DataVals__GetParam(dataVal, 204, 0, 0LL) > 0;
  this->fields._IsContinueDisplayMessage_k__BackingField = DataVals__GetParam(dataVal, 205, 0, 0LL) > 0;
  this->fields._MessageStartDelayTime_k__BackingField = (float)DataVals__GetParam(dataVal, 206, 0, 0LL) / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_DisplayMessageData_o *__fastcall BattleMultiMessageDisplay_Argument__GetMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4C24FDF & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_IndexValue_BattleActionData_DisplayMessageData___, *(_QWORD *)&index);
    byte_4C24FDF = 1;
  }
  return (BattleActionData_DisplayMessageData_o *)BasicHelper__IndexValue_object_(
                                                    (System_Object_array *)this->fields.messageArray,
                                                    index,
                                                    0LL,
                                                    (const MethodInfo_2FDEADC *)Method_BasicHelper_IndexValue_BattleActionData_DisplayMessageData___);
}


BattleMultiMessageDisplay_Argument_o *__fastcall BattleMultiMessageDisplay_Argument__InitPreDisplayMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        ParseBattleMessage_o *parse,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct BattleActionData_DisplayMessageData_array *DisplayMessageArray; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24FDE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_BattleMessageMaster___, parse);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C24FDE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v7);
  DisplayMessageArray = BattleMessageMaster__GetDisplayMessageArray(
                          (BattleMessageMaster_o *)Master_object,
                          this->fields._MessageId_k__BackingField,
                          parse,
                          0LL);
  this->fields.messageArray = DisplayMessageArray;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.messageArray,
    (int64_t)DisplayMessageArray,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  return this;
}


bool __fastcall BattleMultiMessageDisplay_Argument__get_ExistMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.messageArray, 0LL);
}


bool __fastcall BattleMultiMessageDisplay_Argument__get_IsContinueDisplayMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._IsContinueDisplayMessage_k__BackingField;
}


bool __fastcall BattleMultiMessageDisplay_Argument__get_IsWaitMessageEnd(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._IsWaitMessageEnd_k__BackingField;
}


int32_t __fastcall BattleMultiMessageDisplay_Argument__get_MessageId(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageId_k__BackingField;
}


float __fastcall BattleMultiMessageDisplay_Argument__get_MessageStartDelayTime(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageStartDelayTime_k__BackingField;
}


void __fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17___ctor(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__MoveNext(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *v8; // x19
  __int64 v9; // x1
  struct BattleMultiMessageDisplay_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x9
  struct BattleActionData_DisplayMessageData_o *message; // x8
  UnityEngine_GameObject_o *BattleMessage; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  float DispTime; // s8
  UnityEngine_WaitForSecondsRealtime_o *v21; // x20
  PartyOrganizationUtility_o *v22; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int v29; // w8
  float startDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v31; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  float Interval; // s8
  UnityEngine_WaitForSecondsRealtime_o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  v8 = this;
  if ( (byte_4C24FE0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method);
    this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)sub_1C3B764(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v9);
    byte_4C24FE0 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      startDelayTime = v8->fields.startDelayTime;
      v8->fields.__1__state = -1;
      if ( startDelayTime > 0.0 )
      {
        v31 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v31, startDelayTime, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v31;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C3B708(p__2__current, (int64_t)v31, v33, v34, v35, v36, v37, v38);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      v8->fields.__2__current = 0LL;
      v22 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C3B708(v22, 0LL, (int64_t)v2, (int32_t)v3, v4, v5, v6, v7);
      v29 = 2;
      goto LABEL_23;
    case 1:
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_24;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_24;
      message = v8->fields.message;
      if ( !message )
        goto LABEL_24;
      this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)perf->fields.infoComp;
      if ( !this )
        goto LABEL_24;
      BattleMessage = BattleInformationComponent__CreateBattleMessage(
                        (BattleInformationComponent_o *)this,
                        message->fields._Messages_k__BackingField,
                        message->fields._MessageType_k__BackingField,
                        v3);
      _4__this->fields.messageObject = BattleMessage;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&_4__this->fields.messageObject,
        (int64_t)BattleMessage,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v8->fields.message;
      if ( !this )
        goto LABEL_24;
      if ( BattleActionData_DisplayMessageData__get_DispTime((BattleActionData_DisplayMessageData_o *)this, 0LL) > 0.0 )
      {
        this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v8->fields.message;
        if ( this )
        {
          DispTime = BattleActionData_DisplayMessageData__get_DispTime(
                       (BattleActionData_DisplayMessageData_o *)this,
                       0LL);
          v21 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1C3B9B0(UnityEngine_WaitForSecondsRealtime_TypeInfo);
          UnityEngine_WaitForSecondsRealtime___ctor(v21, DispTime, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v21;
          v22 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C3B708(v22, (int64_t)v21, v23, v24, v25, v26, v27, v28);
          v29 = 3;
LABEL_23:
          *(_DWORD *)&v22[-1].fields._IsQuestStartMenuMode_k__BackingField = v29;
          return 1;
        }
        goto LABEL_24;
      }
LABEL_15:
      BattleMultiMessageDisplay__DestroyMessageObject(_4__this, method);
      this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v8->fields.message;
      if ( !this )
        goto LABEL_24;
      if ( BattleActionData_DisplayMessageData__get_Interval((BattleActionData_DisplayMessageData_o *)this, 0LL) > 0.0 )
      {
        this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v8->fields.message;
        if ( this )
        {
          Interval = BattleActionData_DisplayMessageData__get_Interval(
                       (BattleActionData_DisplayMessageData_o *)this,
                       0LL);
          v41 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1C3B9B0(UnityEngine_WaitForSecondsRealtime_TypeInfo);
          UnityEngine_WaitForSecondsRealtime___ctor(v41, Interval, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v41;
          v22 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C3B708(v22, (int64_t)v41, v42, v43, v44, v45, v46, v47);
          v29 = 4;
          goto LABEL_23;
        }
LABEL_24:
        sub_1C3B9C0(this, method);
      }
LABEL_20:
      BattleMultiMessageDisplay__DisplayMessage(_4__this, v8->fields.index + 1, v2);
      return 0;
    case 3:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_24;
    case 4:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_20;
      goto LABEL_24;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_Collections_IEnumerator_Reset(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_Collections_IEnumerator_get_Current(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_IDisposable_Dispose(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19___ctor(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__MoveNext(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_o *_4__this; // x8
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C3B9C0(this, method);
  arg = _4__this->fields.arg;
  if ( !arg || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)arg->fields.messageArray, 0LL) )
  {
    ActionExtensions__Call(this->fields.callBack, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_Collections_IEnumerator_Reset(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_Collections_IEnumerator_get_Current(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_IDisposable_Dispose(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  ;
}