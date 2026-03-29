void ScriptBackLog___ctor(ScriptBackLog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D32906 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    byte_4D32906 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.logData = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.logData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ScriptBackLog__AddLog(ScriptBackLog_o *this, ScriptMessageLabel_o *label, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *logData; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  float LogRangeY; // s0

  if ( (byte_4D32903 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    byte_4D32903 = 1;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    logData->fields._size = size + 1;
    v14[4] = (Il2CppClass *)label;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)label, (int32_t)method, v3, v4, v5, v6, v7);
  }
  if ( !label )
LABEL_12:
    sub_1C93D2C(logData, label);
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
  if ( (byte_4D32901 & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    byte_4D32901 = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_1C93D2C(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ScriptBackLog_o *v8; // x19
  struct ScriptBackLogListViewManager_o *listViewManager; // x20

  v8 = this;
  if ( (byte_4D328FF & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D328FF = 1;
  }
  if ( v8->fields._IsReplayingVoice_k__BackingField )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoiceAll(0.0, 0);
  }
  listViewManager = v8->fields.listViewManager;
  if ( !listViewManager
    || (listViewManager->fields.clickFunc = 0,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&listViewManager->fields.clickFunc, 0, v2, v3, v4, v5, v6, v7),
        ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0),
        (this = (ScriptBackLog_o *)v8->fields.rootObject) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBackLog__EraseLog(ScriptBackLog_o *this, int32_t startIndex, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *logData; // x0
  int32_t size; // w8

  if ( (byte_4D32902 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__RemoveRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_4D32902 = 1;
  }
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    sub_1C93D2C(0, *(_QWORD *)&startIndex);
  size = logData->fields._size;
  if ( size >= startIndex )
    System_Collections_Generic_List_object___RemoveRange(
      logData,
      startIndex,
      size - startIndex,
      (const MethodInfo_387B208 *)Method_System_Collections_Generic_List_ScriptMessageLabel__RemoveRange__);
}


int32_t ScriptBackLog__GetCount(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8

  v2 = this;
  if ( (byte_4D32905 & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_4D32905 = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_1C93D2C(this, method);
  return logData->fields._size;
}


bool ScriptBackLog__IsEmptyLog(ScriptBackLog_o *this, const MethodInfo *method)
{
  ScriptBackLog_o *v2; // x19
  struct System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x8

  v2 = this;
  if ( (byte_4D32900 & 1) == 0 )
  {
    this = (ScriptBackLog_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__get_Count__);
    byte_4D32900 = 1;
  }
  logData = v2->fields.logData;
  if ( !logData )
    sub_1C93D2C(this, method);
  return logData->fields._size < 1;
}


bool ScriptBackLog__IsOpen(ScriptBackLog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  rootObject = this->fields.rootObject;
  if ( !rootObject )
    sub_1C93D2C(0, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ScriptBackLogListViewManager_o *listViewManager; // x20
  System_Collections_Generic_List_ScriptMessageLabel__o *logData; // x21
  float maxRangeY; // s8
  ScriptBackLogListViewManager_ClickDelegate_o *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3

  if ( (byte_4D328FE & 1) == 0 )
  {
    sub_1C93AD4(&ScriptBackLogListViewManager_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_ScriptBackLog_OnClickEnd__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D328FE = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.clickFunc = func;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields._ReplayingAssetName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ReplayingAssetName_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_1/*""*/;
  this->fields._ReplayingObjectName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ReplayingObjectName_k__BackingField,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._IsReplayingVoice_k__BackingField = 0;
  listViewManager = this->fields.listViewManager;
  logData = this->fields.logData;
  maxRangeY = this->fields.maxRangeY;
  v29 = (ScriptBackLogListViewManager_ClickDelegate_o *)sub_1C93D20(ScriptBackLogListViewManager_ClickDelegate_TypeInfo);
  ScriptBackLogListViewManager_ClickDelegate___ctor(v29, (Il2CppObject *)this, Method_ScriptBackLog_OnClickEnd__, v30);
  if ( !listViewManager
    || (ScriptBackLogListViewManager__CreateList(listViewManager, logData, maxRangeY, v29, v31),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_7:
    sub_1C93D2C(rootObject, func);
  }
  ScriptBackLogListViewManager__SetMode_45478388((ScriptBackLogListViewManager_o *)rootObject, 1, 0, v32);
}


void ScriptBackLog__Open_45475328(ScriptBackLog_o *this, const MethodInfo *method)
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

  if ( (byte_4D32904 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4D32904 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  logData = (System_Collections_Generic_List_object__o *)this->fields.logData;
  if ( !logData )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    logData,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    if ( !v4 )
      break;
    current = v7.fields._current;
    if ( !v7.fields._current )
      sub_1C93D2C(v4, v5);
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
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ReplayingAssetName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ReplayingAssetName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptBackLog__set_ReplayingObjectName(ScriptBackLog_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ReplayingObjectName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ReplayingObjectName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACA314;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACA2D4;
}


System_IAsyncResult_o *ScriptBackLog_ClickDelegate__BeginInvoke(
        ScriptBackLog_ClickDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void ScriptBackLog_ClickDelegate__EndInvoke(
        ScriptBackLog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void ScriptBackLog_ClickDelegate__Invoke(ScriptBackLog_ClickDelegate_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}