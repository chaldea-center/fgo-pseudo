void ScriptBackLog___ctor(ScriptBackLog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB8232 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    byte_4CB8232 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.logData = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.logData, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ScriptBackLog__AddLog(ScriptBackLog_o *this, ScriptMessageLabel_o *label, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *logData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8
  float LogRangeY; // s0

  if ( (byte_4CB822F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    byte_4CB822F = 1;
  }
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    goto LABEL_12;
  items = logData->fields._items;
  v8 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++logData->fields._version;
  if ( !items )
    goto LABEL_12;
  size = logData->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      logData,
      (Il2CppObject *)label,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    logData->fields._size = size + 1;
    v10[4] = (Il2CppClass *)label;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)label, (int32_t)method, v3);
  }
  if ( !label )
LABEL_12:
    sub_1C6BC60(logData, label);
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
  if ( (byte_4CB822D & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    byte_4CB822D = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_1C6BC60(this, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ScriptBackLog_o *v4; // x19
  struct ScriptBackLogListViewManager_o *listViewManager; // x20

  v4 = this;
  if ( (byte_4CB822B & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB822B = 1;
  }
  if ( v4->fields._IsReplayingVoice_k__BackingField )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
  }
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager
    || (listViewManager->fields.clickFunc = 0,
        sub_1C6B9AC((CGThumbnailListItem_o *)&listViewManager->fields.clickFunc, 0, v2, v3),
        ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0),
        (this = (ScriptBackLog_o *)v4->fields.rootObject) == 0) )
  {
    sub_1C6BC60(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLog__EraseLog(ScriptBackLog_o *this, int32_t startIndex, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *logData; // x0
  int32_t size; // w8

  if ( (byte_4CB822E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__RemoveRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_4CB822E = 1;
  }
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    sub_1C6BC60(0, *(_QWORD *)&startIndex);
  size = logData->fields._size;
  if ( size >= startIndex )
    System_Collections_Generic_List_object___RemoveRange(
      logData,
      startIndex,
      size - startIndex,
      (const MethodInfo_38021E0 *)Method_System_Collections_Generic_List_ScriptMessageLabel__RemoveRange__);
}


int32_t ScriptBackLog__GetCount(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8

  v2 = this;
  if ( (byte_4CB8231 & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_4CB8231 = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_1C6BC60(this, method);
  return logData->fields._size;
}


bool ScriptBackLog__IsEmptyLog(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8

  v2 = this;
  if ( (byte_4CB822C & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_4CB822C = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_1C6BC60(this, method);
  return logData->fields._size < 1;
}


bool ScriptBackLog__IsOpen(ScriptBackLog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    sub_1C6BC60(0, method);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScriptBackLogListViewManager_o *listViewManager; // x20
  System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x21
  float maxRangeY; // s8
  ScriptBackLogListViewManager_ClickDelegate_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4CB822A & 1) == 0 )
  {
    sub_1C6BA08(&ScriptBackLogListViewManager_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_ScriptBackLog_OnClickEnd__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB822A = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.clickFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v6, v7);
  v8 = StringLiteral_1/*""*/;
  this->fields._ReplayingAssetName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ReplayingAssetName_k__BackingField, v8, v9, v10);
  v11 = StringLiteral_1/*""*/;
  this->fields._ReplayingObjectName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ReplayingObjectName_k__BackingField, v11, v12, v13);
  this->fields._IsReplayingVoice_k__BackingField = 0;
  listViewManager = this->fields.listViewManager;
  logData = this->fields.logData;
  maxRangeY = this->fields.maxRangeY;
  v17 = (ScriptBackLogListViewManager_ClickDelegate_o *)sub_1C6BC54(ScriptBackLogListViewManager_ClickDelegate_TypeInfo);
  ScriptBackLogListViewManager_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_ScriptBackLog_OnClickEnd__, v18);
  if ( !listViewManager
    || (ScriptBackLogListViewManager__CreateList(listViewManager, logData, maxRangeY, v17, v19),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_7:
    sub_1C6BC60(rootObject, func);
  }
  ScriptBackLogListViewManager__SetMode_45027928((ScriptBackLogListViewManager_o *)rootObject, 1, 0, v20);
}


void ScriptBackLog__Open_45024696(ScriptBackLog_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB8230 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4CB8230 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    logData,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    if ( !v4 )
      break;
    current = v7.fields._current;
    if ( !v7.fields._current )
      sub_1C6BC60(v4, v5);
    if ( !System_String__op_Equality(
            *(System_String_o **)((char *)&v7.fields._current->klass + (unsigned __int64)&qword_90),
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
    &v7,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
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
  const MethodInfo *v3; // x3

  this->fields._ReplayingAssetName_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ReplayingAssetName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScriptBackLog__set_ReplayingObjectName(ScriptBackLog_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ReplayingObjectName_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ReplayingObjectName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ScriptBackLog_ClickDelegate___ctor(
        ScriptBackLog_ClickDelegate_o *this,
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
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA3638;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA35F8;
}


System_IAsyncResult_o *ScriptBackLog_ClickDelegate__BeginInvoke(
        ScriptBackLog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void ScriptBackLog_ClickDelegate__EndInvoke(
        ScriptBackLog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void ScriptBackLog_ClickDelegate__Invoke(ScriptBackLog_ClickDelegate_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}