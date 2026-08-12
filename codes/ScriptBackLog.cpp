void ScriptBackLog___ctor(ScriptBackLog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972804 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    byte_5972804 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.logData = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.logData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ScriptBackLog__AddLog(ScriptBackLog_o *this, ScriptMessageLabel_o *label, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *logData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  float LogRangeY; // s0

  if ( (byte_5972801 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    byte_5972801 = 1;
  }
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    goto LABEL_12;
  items = logData->fields._items;
  v12 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++logData->fields._version;
  if ( !items )
    goto LABEL_12;
  size = logData->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      logData,
      (Il2CppObject *)label,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    logData->fields._size = size + 1;
    v14[4] = (Il2CppClass *)label;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)label,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  if ( !label )
LABEL_12:
    sub_2213CDC(logData, label);
  LogRangeY = ScriptMessageLabel__GetLogRangeY(label, 0);
  if ( LogRangeY < this->fields.maxRangeY )
    this->fields.maxRangeY = LogRangeY;
}


void ScriptBackLog__ClearLog(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_59727FF & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    byte_59727FF = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_2213CDC(this, method);
  size = logData->fields._size;
  v5 = logData->fields._version + 1;
  logData->fields._size = 0;
  logData->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)logData->fields._items, 0, size, 0);
  v2->fields.maxRangeY = 0.0;
}


void ScriptBackLog__Close(ScriptBackLog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ScriptBackLog_o *v8; // x19
  struct ScriptBackLogListViewManager_o *listViewManager; // x20

  v8 = this;
  if ( (byte_59727FD & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_59727FD = 1;
  }
  if ( v8->fields._IsReplayingVoice_k__BackingField )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopVoiceAll(0.0, 0);
  }
  listViewManager = v8->fields.listViewManager;
  if ( !listViewManager
    || (listViewManager->fields.clickFunc = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&listViewManager->fields.clickFunc, 0, v2, v3, v4, v5, v6, v7),
        ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0),
        (this = (ScriptBackLog_o *)v8->fields.rootObject) == 0) )
  {
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLog__EraseLog(ScriptBackLog_o *this, int32_t startIndex, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *logData; // x0
  int32_t size; // w8

  if ( (byte_5972800 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__RemoveRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_5972800 = 1;
  }
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    sub_2213CDC(0, *(_QWORD *)&startIndex);
  size = logData->fields._size;
  if ( size >= startIndex )
    System_Collections_Generic_List_object___RemoveRange(
      logData,
      startIndex,
      size - startIndex,
      (const MethodInfo_4485494 *)Method_System_Collections_Generic_List_ScriptMessageLabel__RemoveRange__);
}


int32_t ScriptBackLog__GetCount(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8

  v2 = this;
  if ( (byte_5972803 & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_5972803 = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_2213CDC(this, method);
  return logData->fields._size;
}


bool ScriptBackLog__IsEmptyLog(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8

  v2 = this;
  if ( (byte_59727FE & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_59727FE = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_2213CDC(this, method);
  return logData->fields._size < 1;
}


bool ScriptBackLog__IsOpen(ScriptBackLog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    sub_2213CDC(0, method);
  return UnityEngine_GameObject__get_activeSelf(rootObject, 0);
}


void ScriptBackLog__OnClickEnd(ScriptBackLog_o *this, int32_t index, const MethodInfo *method)
{
  struct ScriptBackLog_ClickDelegate_o *clickFunc; // x8

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      clickFunc->fields.method);
}


void ScriptBackLog__Open(ScriptBackLog_o *this, ScriptBackLog_ClickDelegate_o *func, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  ScriptBackLogListViewManager_ClickDelegate_c *v26; // x0
  ScriptBackLogListViewManager_o *listViewManager; // x20
  System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x21
  float maxRangeY; // s8
  ScriptBackLogListViewManager_ClickDelegate_o *v30; // x22
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  if ( (byte_59727FC & 1) == 0 )
  {
    sub_2213A60(&ScriptBackLogListViewManager_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ScriptBackLog_OnClickEnd__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59727FC = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.clickFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v6, v7, v8, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields._ReplayingAssetName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ReplayingAssetName_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields._ReplayingObjectName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ReplayingObjectName_k__BackingField,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = ScriptBackLogListViewManager_ClickDelegate_TypeInfo;
  listViewManager = this->fields.listViewManager;
  logData = this->fields.logData;
  maxRangeY = this->fields.maxRangeY;
  this->fields._IsReplayingVoice_k__BackingField = 0;
  v30 = (ScriptBackLogListViewManager_ClickDelegate_o *)sub_2213CCC(v26);
  ScriptBackLogListViewManager_ClickDelegate___ctor(v30, (Il2CppObject *)this, Method_ScriptBackLog_OnClickEnd__, v31);
  if ( !listViewManager
    || (ScriptBackLogListViewManager__CreateList(listViewManager, logData, maxRangeY, v30, v32),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_7:
    sub_2213CDC(rootObject, func);
  }
  ScriptBackLogListViewManager__SetMode_51800732((ScriptBackLogListViewManager_o *)rootObject, 1, 0, v33);
}


void ScriptBackLog__Open_51797680(ScriptBackLog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScriptBackLog__Open(this, 0, v2);
}


void ScriptBackLog__StopAllPlayVoiceAnimation(ScriptBackLog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *logData; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v8; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972802 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_5972802 = 1;
  }
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  memset(&v9, 0, sizeof(v9));
  if ( !logData )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    logData,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  v7 = 0;
  v8 = &v9;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_2213CDC(v4, v5);
    if ( !System_String__op_Equality(
            *(System_String_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_90),
            this->fields._ReplayingAssetName_k__BackingField,
            0)
      || !System_String__op_Equality(
            *(System_String_o **)((char *)&qword_98 + (_QWORD)current),
            this->fields._ReplayingObjectName_k__BackingField,
            0) )
    {
      ScriptMessageLabel__StopPlayVoiceAnimation((ScriptMessageLabel_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
}


bool ScriptBackLog__get_IsReplayingVoice(ScriptBackLog_o *this, const MethodInfo *method)
{
  return this->fields._IsReplayingVoice_k__BackingField;
}


System_String_o *ScriptBackLog__get_ReplayingAssetName(ScriptBackLog_o *this, const MethodInfo *method)
{
  return this->fields._ReplayingAssetName_k__BackingField;
}


System_String_o *ScriptBackLog__get_ReplayingObjectName(ScriptBackLog_o *this, const MethodInfo *method)
{
  return this->fields._ReplayingObjectName_k__BackingField;
}


void ScriptBackLog__set_IsReplayingVoice(ScriptBackLog_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsReplayingVoice_k__BackingField = value;
}


void ScriptBackLog__set_ReplayingAssetName(ScriptBackLog_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ReplayingAssetName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ReplayingAssetName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptBackLog__set_ReplayingObjectName(ScriptBackLog_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ReplayingObjectName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ReplayingObjectName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptBackLog_ClickDelegate___ctor(
        ScriptBackLog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200FA08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200F9C8;
}


System_IAsyncResult_o *ScriptBackLog_ClickDelegate__BeginInvoke(
        ScriptBackLog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void ScriptBackLog_ClickDelegate__EndInvoke(
        ScriptBackLog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptBackLog_ClickDelegate__Invoke(ScriptBackLog_ClickDelegate_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}