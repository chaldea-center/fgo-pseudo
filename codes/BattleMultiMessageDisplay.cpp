void BattleMultiMessageDisplay___ctor(
        BattleMultiMessageDisplay_o *this,
        BattlePerformance_o *inputPerf,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.perf = inputPerf;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)inputPerf, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *BattleMultiMessageDisplay__CoroutineDisplayMessage(
        BattleMultiMessageDisplay_o *this,
        BattleActionData_DisplayMessageData_o *message,
        int32_t index,
        float startDelayTime,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5973F88 & 1) == 0 )
  {
    sub_2213A60(&BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_TypeInfo);
    byte_5973F88 = 1;
  }
  v9 = sub_2213CCC(BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = message;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)message, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = index;
  *(float *)(v9 + 32) = startDelayTime;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *BattleMultiMessageDisplay__CoroutineWaitEndMessage(
        BattleMultiMessageDisplay_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5973F89 & 1) == 0 )
  {
    sub_2213A60(&BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_TypeInfo);
    byte_5973F89 = 1;
  }
  v5 = sub_2213CCC(BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callBack, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleMultiMessageDisplay__DestroyMessageObject(BattleMultiMessageDisplay_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_messageObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *messageObject; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973F8A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F8A = 1;
  }
  messageObject = this->fields.messageObject;
  p_messageObject = (MissionNaviTransitionBoardItem_o *)&this->fields.messageObject;
  v4 = (UnityEngine_Object_o *)messageObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_messageObject->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_messageObject->klass = 0;
    sub_2213A04(p_messageObject, 0, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleMultiMessageDisplay__DisplayMessage(
        BattleMultiMessageDisplay_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleMultiMessageDisplay_Argument_o *arg; // x0
  BattleActionData_DisplayMessageData_o *Message; // x0
  float MessageStartDelayTime_k__BackingField; // s8
  BattleActionData_DisplayMessageData_o *v8; // x21
  struct BattleMultiMessageDisplay_Argument_o *v9; // x8
  UnityEngine_MonoBehaviour_o *perf; // x22
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *v12; // x0
  __int64 v13; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  arg = this->fields.arg;
  if ( arg && (Message = BattleMultiMessageDisplay_Argument__GetMessage(arg, index, method)) != 0 )
  {
    MessageStartDelayTime_k__BackingField = 0.0;
    v8 = Message;
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
            v8,
            index,
            MessageStartDelayTime_k__BackingField,
            v11);
    if ( !perf )
      sub_2213CDC(v12, v13);
    started = UnityEngine_MonoBehaviour__StartCoroutine_83444756(perf, v12, 0);
    this->fields.corDisplayMessage = started;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.corDisplayMessage,
      (int32_t)started,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  else
  {
    BattleMultiMessageDisplay__ReleaseMessage_54555192(this, *(const MethodInfo **)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleMultiMessageDisplay__DisplayStart(
        BattleMultiMessageDisplay_o *this,
        BattleMultiMessageDisplay_Argument_o *inputArg,
        int32_t actorId,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleMultiMessageDisplay_o *v5; // x19
  struct BattlePerformance_o *v8; // x8
  ParseBattleMessage_o *ParseBattleMsg; // x0
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2

  if ( inputArg )
  {
    perf = this->fields.perf;
    v5 = this;
    if ( !perf
      || (this = (BattleMultiMessageDisplay_o *)perf->fields.infoComp) == 0
      || (BattleInformationComponent__DestroyDisplayingMessage(
            (BattleInformationComponent_o *)this,
            1,
            *(const MethodInfo **)&actorId),
          (v8 = v5->fields.perf) == 0)
      || (this = (BattleMultiMessageDisplay_o *)v8->fields.logic) == 0 )
    {
      sub_2213CDC(this, inputArg);
    }
    ParseBattleMsg = BattleLogic__get_ParseBattleMsg((BattleLogic_o *)this, 0);
    BattleMultiMessageDisplay_Argument__InitPreDisplayMessage(inputArg, ParseBattleMsg, actorId, v10);
    v5->fields.arg = inputArg;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.arg, (int32_t)inputArg, v11, v12, v13, v14, v15, v16);
    BattleMultiMessageDisplay__DisplayMessage(v5, 0, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleMultiMessageDisplay__ReleaseMessage(
        BattleMultiMessageDisplay_o *this,
        bool isDisplayNextMessage,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  if ( isDisplayNextMessage || (arg = this->fields.arg) == 0 || !arg->fields._IsContinueDisplayMessage_k__BackingField )
    BattleMultiMessageDisplay__ReleaseMessage_54555192(this, (const MethodInfo *)isDisplayNextMessage);
}


void BattleMultiMessageDisplay__ReleaseMessage_54555192(BattleMultiMessageDisplay_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  BattleMultiMessageDisplay__StopMessageCoroutine(this, method);
  BattleMultiMessageDisplay__DestroyMessageObject(this, v3);
  this->fields.arg = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.arg, 0, v4, v5, v6, v7, v8, v9);
}


void BattleMultiMessageDisplay__StopMessageCoroutine(BattleMultiMessageDisplay_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *corDisplayMessage; // x1
  MissionNaviTransitionBoardItem_o *p_corDisplayMessage; // x19
  UnityEngine_MonoBehaviour_o *perf; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_corDisplayMessage = (MissionNaviTransitionBoardItem_o *)&this->fields.corDisplayMessage;
  corDisplayMessage = this->fields.corDisplayMessage;
  if ( corDisplayMessage )
  {
    perf = (UnityEngine_MonoBehaviour_o *)this->fields.perf;
    if ( !perf )
      sub_2213CDC(0, corDisplayMessage);
    UnityEngine_MonoBehaviour__StopCoroutine_83445360(perf, corDisplayMessage, 0);
    p_corDisplayMessage->klass = 0;
    sub_2213A04(p_corDisplayMessage, 0, v5, v6, v7, v8, v9, v10);
  }
}


void BattleMultiMessageDisplay__WaitEndMessage(
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
      sub_2213CDC(v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756(perf, v5, 0);
  }
  else
  {
    ActionExtensions__Call(callBack, 0);
  }
}


bool BattleMultiMessageDisplay__get_ExistMessage(BattleMultiMessageDisplay_o *this, const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  arg = this->fields.arg;
  if ( arg )
    LOBYTE(arg) = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)arg->fields.messageArray, 0);
  return (unsigned __int8)arg & 1;
}


BattleInformationComponent_o *BattleMultiMessageDisplay__get_InfoComp(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_2213CDC(this, method);
  return perf->fields.infoComp;
}


bool BattleMultiMessageDisplay__get_IsContinueDisplayMessage(
        BattleMultiMessageDisplay_o *this,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  arg = this->fields.arg;
  return arg && arg->fields._IsContinueDisplayMessage_k__BackingField;
}


bool BattleMultiMessageDisplay__get_IsWaitEndMessage(BattleMultiMessageDisplay_o *this, const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8

  arg = this->fields.arg;
  return arg && arg->fields._IsWaitMessageEnd_k__BackingField;
}


void BattleMultiMessageDisplay_Argument___ctor(
        BattleMultiMessageDisplay_Argument_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_2213CDC(v5, v6);
  this->fields._MessageId_k__BackingField = DataVals__GetValue(dataVal, 0);
  this->fields._IsWaitMessageEnd_k__BackingField = DataVals__GetParam(dataVal, 207, 0, 0) > 0;
  this->fields._IsContinueDisplayMessage_k__BackingField = DataVals__GetParam(dataVal, 208, 0, 0) > 0;
  this->fields._MessageStartDelayTime_k__BackingField = (float)DataVals__GetParam(dataVal, 209, 0, 0) / 1000.0;
}


BattleActionData_DisplayMessageData_o *BattleMultiMessageDisplay_Argument__GetMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_5973F8C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleActionData_DisplayMessageData___);
    byte_5973F8C = 1;
  }
  return (BattleActionData_DisplayMessageData_o *)BasicHelper__IndexValue_object_(
                                                    (System_Object_array *)this->fields.messageArray,
                                                    index,
                                                    0,
                                                    (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleActionData_DisplayMessageData___);
}


BattleMultiMessageDisplay_Argument_o *BattleMultiMessageDisplay_Argument__InitPreDisplayMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        ParseBattleMessage_o *parse,
        int32_t actorId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct BattleActionData_DisplayMessageData_array *DisplayMessageArray; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5973F8B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BattleMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973F8B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, parse);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v8);
  DisplayMessageArray = BattleMessageMaster__GetDisplayMessageArray(
                          (BattleMessageMaster_o *)Master_object,
                          this->fields._MessageId_k__BackingField,
                          parse,
                          actorId,
                          0);
  this->fields.messageArray = DisplayMessageArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.messageArray,
    (int32_t)DisplayMessageArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  return this;
}


bool BattleMultiMessageDisplay_Argument__get_ExistMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.messageArray, 0);
}


bool BattleMultiMessageDisplay_Argument__get_IsContinueDisplayMessage(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._IsContinueDisplayMessage_k__BackingField;
}


bool BattleMultiMessageDisplay_Argument__get_IsWaitMessageEnd(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._IsWaitMessageEnd_k__BackingField;
}


int32_t BattleMultiMessageDisplay_Argument__get_MessageId(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageId_k__BackingField;
}


float BattleMultiMessageDisplay_Argument__get_MessageStartDelayTime(
        BattleMultiMessageDisplay_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageStartDelayTime_k__BackingField;
}


void BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17___ctor(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__MoveNext(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  MethodInfo *v2; // x2
  MethodInfo *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct BattleMultiMessageDisplay_o *_4__this; // x20
  BattleActionData_DisplayMessageData_o *message; // x0
  struct BattlePerformance_o *perf; // x9
  struct BattleActionData_DisplayMessageData_o *v13; // x8
  UnityEngine_GameObject_o *BattleMessage; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float DispTime; // s8
  UnityEngine_WaitForSecondsRealtime_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int v30; // w8
  float startDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v32; // x20
  Il2CppObject **v33; // x19
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  float Interval; // s8
  UnityEngine_WaitForSecondsRealtime_o *v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  if ( (byte_5973F8D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5973F8D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  message = 0;
  if ( _1__state > 2 )
  {
    if ( _1__state != 3 )
    {
      if ( _1__state != 4 )
        return (char)message;
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_29;
      goto LABEL_25;
    }
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
LABEL_21:
    BattleMultiMessageDisplay__DestroyMessageObject(_4__this, method);
    message = this->fields.message;
    if ( !message )
      goto LABEL_29;
    if ( BattleActionData_DisplayMessageData__get_Interval(message, 0) > 0.0 )
    {
      message = this->fields.message;
      if ( message )
      {
        Interval = BattleActionData_DisplayMessageData__get_Interval(message, 0);
        v41 = (UnityEngine_WaitForSecondsRealtime_o *)sub_2213CCC(UnityEngine_WaitForSecondsRealtime_TypeInfo);
        UnityEngine_WaitForSecondsRealtime___ctor(v41, Interval, 0);
        this->fields.__2__current = (Il2CppObject *)v41;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v41, v42, v43, v44, v45, v46, v47);
        v30 = 4;
        goto LABEL_27;
      }
LABEL_29:
      sub_2213CDC(message, method);
    }
LABEL_25:
    BattleMultiMessageDisplay__DisplayMessage(_4__this, this->fields.index + 1, v2);
    LOBYTE(message) = 0;
    return (char)message;
  }
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    perf = _4__this->fields.perf;
    if ( !perf )
      goto LABEL_29;
    v13 = this->fields.message;
    if ( !v13 )
      goto LABEL_29;
    message = (BattleActionData_DisplayMessageData_o *)perf->fields.infoComp;
    if ( !message )
      goto LABEL_29;
    BattleMessage = BattleInformationComponent__CreateBattleMessage(
                      (BattleInformationComponent_o *)message,
                      v13->fields._Messages_k__BackingField,
                      v13->fields._MessageType_k__BackingField,
                      v3);
    _4__this->fields.messageObject = BattleMessage;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.messageObject,
      (int32_t)BattleMessage,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    message = this->fields.message;
    if ( !message )
      goto LABEL_29;
    if ( BattleActionData_DisplayMessageData__get_DispTime(message, 0) > 0.0 )
    {
      message = this->fields.message;
      if ( message )
      {
        DispTime = BattleActionData_DisplayMessageData__get_DispTime(message, 0);
        v22 = (UnityEngine_WaitForSecondsRealtime_o *)sub_2213CCC(UnityEngine_WaitForSecondsRealtime_TypeInfo);
        UnityEngine_WaitForSecondsRealtime___ctor(v22, DispTime, 0);
        this->fields.__2__current = (Il2CppObject *)v22;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v22, v24, v25, v26, v27, v28, v29);
        v30 = 3;
LABEL_27:
        *((_DWORD *)p__2__current - 2) = v30;
        LOBYTE(message) = 1;
        return (char)message;
      }
      goto LABEL_29;
    }
    goto LABEL_21;
  }
  if ( !_1__state )
  {
    startDelayTime = this->fields.startDelayTime;
    this->fields.__1__state = -1;
    if ( startDelayTime <= 0.0 )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p__2__current,
        0,
        (System_String_o *)v2,
        (System_String_o *)v3,
        v4,
        v5,
        v6,
        v7);
      v30 = 2;
      goto LABEL_27;
    }
    v32 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v32, startDelayTime, 0);
    this->fields.__2__current = (Il2CppObject *)v32;
    v33 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v33, (int32_t)v32, v34, v35, v36, v37, v38, v39);
    *((_DWORD *)v33 - 2) = 1;
    LOBYTE(message) = 1;
  }
  return (char)message;
}


Il2CppObject *BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_Collections_IEnumerator_Reset(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_Collections_IEnumerator_get_Current(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17__System_IDisposable_Dispose(
        BattleMultiMessageDisplay__CoroutineDisplayMessage_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19___ctor(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__MoveNext(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  struct BattleMultiMessageDisplay_o *_4__this; // x8
  struct BattleMultiMessageDisplay_Argument_o *arg; // x8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_2213CDC(this, method);
  arg = _4__this->fields.arg;
  if ( !arg || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)arg->fields.messageArray, 0) )
  {
    ActionExtensions__Call(this->fields.callBack, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v5, v6, v7, v8, v9, v10);
  *((_DWORD *)p__2__current - 2) = 1;
  return 1;
}


Il2CppObject *BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_Collections_IEnumerator_Reset(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_Collections_IEnumerator_get_Current(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19__System_IDisposable_Dispose(
        BattleMultiMessageDisplay__CoroutineWaitEndMessage_d__19_o *this,
        const MethodInfo *method)
{
  ;
}