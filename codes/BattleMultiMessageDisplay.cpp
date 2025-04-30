void __fastcall BattleMultiMessageDisplay___ctor(
        BattleMultiMessageDisplay_o *this,
        BattlePerformance_o *inputPerf,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.perf = inputPerf;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)inputPerf, v5, v6);
}


System_Collections_IEnumerator_o *__fastcall BattleMultiMessageDisplay__CoroutineDisplayMessage(
        BattleMultiMessageDisplay_o *this,
        BattleActionData_DisplayMessageData_o *message,
        int32_t index,
        float startDelayTime,
        const MethodInfo *method)
{
  __int64 v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A51610 & 1) == 0 )
  {
    sub_1B863B8(&BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_TypeInfo, message);
    byte_4A51610 = 1;
  }
  v9 = sub_1B86604(BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = message;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 48), (int32_t)message, v12, v13);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A51611 & 1) == 0 )
  {
    sub_1B863B8(&BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_TypeInfo, callBack);
    byte_4A51611 = 1;
  }
  v5 = sub_1B86604(BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callBack;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callBack, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleMultiMessageDisplay__DestroyMessageObject(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_messageObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *messageObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A51612 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A51612 = 1;
  }
  messageObject = this->fields.messageObject;
  p_messageObject = (CGThumbnailListItem_o *)&this->fields.messageObject;
  v4 = (UnityEngine_Object_o *)messageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_messageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(klass, 0LL);
    p_messageObject->klass = 0LL;
    sub_1B8635C(p_messageObject, 0, v7, v8);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3

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
      sub_1B86614(v12, v13);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69341456(perf, v12, 0LL);
    this->fields.corDisplayMessage = started;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.corDisplayMessage, (int32_t)started, v15, v16);
  }
  else
  {
    BattleMultiMessageDisplay__ReleaseMessage_45071792(this, *(const MethodInfo **)&index);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

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
      sub_1B86614(this, inputArg);
    }
    ParseBattleMsg = BattleLogic__get_ParseBattleMsg((BattleLogic_o *)this, 0LL);
    BattleMultiMessageDisplay_Argument__InitPreDisplayMessage(inputArg, ParseBattleMsg, v8);
    v4->fields.arg = inputArg;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.arg, (int32_t)inputArg, v9, v10);
    BattleMultiMessageDisplay__DisplayMessage(v4, 0, v11);
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
    BattleMultiMessageDisplay__ReleaseMessage_45071792(this, (const MethodInfo *)isDisplayNextMessage);
}


void __fastcall BattleMultiMessageDisplay__ReleaseMessage_45071792(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  BattleMultiMessageDisplay__StopMessageCoroutine(this, method);
  BattleMultiMessageDisplay__DestroyMessageObject(this, v3);
  this->fields.arg = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.arg, 0, v4, v5);
}


void __fastcall BattleMultiMessageDisplay__StopMessageCoroutine(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *corDisplayMessage; // x1
  CGThumbnailListItem_o *p_corDisplayMessage; // x19
  UnityEngine_MonoBehaviour_o *perf; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_corDisplayMessage = (CGThumbnailListItem_o *)&this->fields.corDisplayMessage;
  corDisplayMessage = this->fields.corDisplayMessage;
  if ( corDisplayMessage )
  {
    perf = (UnityEngine_MonoBehaviour_o *)this->fields.perf;
    if ( !perf )
      sub_1B86614(0LL, corDisplayMessage);
    UnityEngine_MonoBehaviour__StopCoroutine_69342076(perf, corDisplayMessage, 0LL);
    p_corDisplayMessage->klass = 0LL;
    sub_1B8635C(p_corDisplayMessage, 0, v5, v6);
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
      sub_1B86614(v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69341456(perf, v5, 0LL);
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
    sub_1B86614(this, method);
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
    sub_1B86614(v5, v6);
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
  if ( (byte_4A51614 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_BattleActionData_DisplayMessageData___, *(_QWORD *)&index);
    byte_4A51614 = 1;
  }
  return (BattleActionData_DisplayMessageData_o *)BasicHelper__IndexValue_object_(
                                                    (System_Object_array *)this->fields.messageArray,
                                                    index,
                                                    0LL,
                                                    (const MethodInfo_2F5C590 *)Method_BasicHelper_IndexValue_BattleActionData_DisplayMessageData___);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A51613 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_BattleMessageMaster___, parse);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    byte_4A51613 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !Master_object )
    sub_1B86614(0LL, v7);
  DisplayMessageArray = BattleMessageMaster__GetDisplayMessageArray(
                          (BattleMessageMaster_o *)Master_object,
                          this->fields._MessageId_k__BackingField,
                          parse,
                          0LL);
  this->fields.messageArray = DisplayMessageArray;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.messageArray, (int32_t)DisplayMessageArray, v9, v10);
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
  BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *v4; // x19
  __int64 v5; // x1
  struct BattleMultiMessageDisplay_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x9
  struct BattleActionData_DisplayMessageData_o *message; // x8
  UnityEngine_GameObject_o *BattleMessage; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  float DispTime; // s8
  UnityEngine_WaitForSecondsRealtime_o *v13; // x20
  CGThumbnailListItem_o *v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w8
  float startDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool result; // w0
  float Interval; // s8
  UnityEngine_WaitForSecondsRealtime_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  v4 = this;
  if ( (byte_4A51615 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_WaitForSecondsRealtime_TypeInfo, method);
    this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)sub_1B863B8(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v5);
    byte_4A51615 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      startDelayTime = v4->fields.startDelayTime;
      v4->fields.__1__state = -1;
      if ( startDelayTime > 0.0 )
      {
        v19 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v19, startDelayTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v19;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)v19, v21, v22);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      v4->fields.__2__current = 0LL;
      v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v14, 0, (int32_t)v2, v3);
      v17 = 2;
      goto LABEL_23;
    case 1:
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_24;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_24;
      message = v4->fields.message;
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
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.messageObject, (int32_t)BattleMessage, v10, v11);
      this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v4->fields.message;
      if ( !this )
        goto LABEL_24;
      if ( BattleActionData_DisplayMessageData__get_DispTime((BattleActionData_DisplayMessageData_o *)this, 0LL) > 0.0 )
      {
        this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v4->fields.message;
        if ( this )
        {
          DispTime = BattleActionData_DisplayMessageData__get_DispTime(
                       (BattleActionData_DisplayMessageData_o *)this,
                       0LL);
          v13 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1B86604(UnityEngine_WaitForSecondsRealtime_TypeInfo);
          UnityEngine_WaitForSecondsRealtime___ctor(v13, DispTime, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v13;
          v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(v14, (int32_t)v13, v15, v16);
          v17 = 3;
LABEL_23:
          LODWORD(v14[-1].fields._ThumbnailSpritePath_k__BackingField) = v17;
          return 1;
        }
        goto LABEL_24;
      }
LABEL_15:
      BattleMultiMessageDisplay__DestroyMessageObject(_4__this, method);
      this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v4->fields.message;
      if ( !this )
        goto LABEL_24;
      if ( BattleActionData_DisplayMessageData__get_Interval((BattleActionData_DisplayMessageData_o *)this, 0LL) > 0.0 )
      {
        this = (BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *)v4->fields.message;
        if ( this )
        {
          Interval = BattleActionData_DisplayMessageData__get_Interval(
                       (BattleActionData_DisplayMessageData_o *)this,
                       0LL);
          v25 = (UnityEngine_WaitForSecondsRealtime_o *)sub_1B86604(UnityEngine_WaitForSecondsRealtime_TypeInfo);
          UnityEngine_WaitForSecondsRealtime___ctor(v25, Interval, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v25;
          v14 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(v14, (int32_t)v25, v26, v27);
          v17 = 4;
          goto LABEL_23;
        }
LABEL_24:
        sub_1B86614(this, method);
      }
LABEL_20:
      BattleMultiMessageDisplay__DisplayMessage(_4__this, v4->fields.index + 1, v2);
      return 0;
    case 3:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_24;
    case 4:
      v4->fields.__1__state = -1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B86614(this, method);
  arg = _4__this->fields.arg;
  if ( !arg || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)arg->fields.messageArray, 0LL) )
  {
    ActionExtensions__Call(this->fields.callBack, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C((CGThumbnailListItem_o *)p__2__current, 0, v5, v6);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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