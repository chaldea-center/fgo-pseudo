void ScriptLoop___ctor(ScriptLoop_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D32965 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D32965 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.switchCaseIndex = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.switchCaseIndex, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.switchCaseMessage = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchCaseMessage,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isAddLog = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptLoop__ExecuteLoop(ScriptLoop_o *this, const MethodInfo *method)
{
  int32_t v3; // w9
  bool v4; // nf
  int32_t v5; // w0
  int32_t switchCaseCount; // w8

  if ( (byte_4D32962 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_LastOrDefault_int___);
    byte_4D32962 = 1;
  }
  v3 = this->fields.count + 1;
  v4 = this->fields.count - 1 < 0;
  this->fields.count = v3;
  if ( v4 == __OFSUB__(v3, 2) )
    this->fields.isForceStopAdd = 1;
  v5 = System_Linq_Enumerable__LastOrDefault_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.switchCaseIndex,
         (const MethodInfo_31D0128 *)Method_System_Linq_Enumerable_LastOrDefault_int___);
  switchCaseCount = this->fields.switchCaseCount;
  this->fields.lastSelectedIndex = v5;
  this->fields.lastLoopSwitchCaseCount = switchCaseCount;
}


bool ScriptLoop__IsExecuteLogErase(ScriptLoop_o *this, const MethodInfo *method)
{
  int32_t lastLoopSwitchCaseCount; // w8
  int v4; // w23
  int32_t v5; // w21
  int32_t v6; // w20
  System_Collections_Generic_List_int__o *switchCaseIndex; // x0
  System_String_o *v8; // x22
  Il2CppObject *Item; // x0

  if ( (byte_4D32963 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__RemoveRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D32963 = 1;
  }
  if ( !this->fields.isEnableLoopLogLaterErase )
    return 0;
  lastLoopSwitchCaseCount = this->fields.lastLoopSwitchCaseCount;
  if ( lastLoopSwitchCaseCount <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  v6 = this->fields.switchCaseCount - lastLoopSwitchCaseCount;
  while ( 1 )
  {
    switchCaseIndex = this->fields.switchCaseIndex;
    if ( !switchCaseIndex )
      goto LABEL_20;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  switchCaseIndex,
                                                                  v5,
                                                                  (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.switchCaseIndex )
      goto LABEL_20;
    if ( (_DWORD)switchCaseIndex != System_Collections_Generic_List_int___get_Item(
                                      this->fields.switchCaseIndex,
                                      this->fields.lastLoopSwitchCaseCount + v4,
                                      (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__) )
      goto LABEL_14;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
    if ( !switchCaseIndex )
      goto LABEL_20;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)switchCaseIndex,
                                                                  v5,
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !this->fields.switchCaseMessage )
      goto LABEL_20;
    v8 = (System_String_o *)switchCaseIndex;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this->fields.switchCaseMessage,
             this->fields.lastLoopSwitchCaseCount + v4,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !System_String__op_Equality(v8, (System_String_o *)Item, 0) )
    {
LABEL_14:
      v4 &= v4 >> 31;
      goto LABEL_15;
    }
    if ( ++v4 == v6 )
      break;
LABEL_15:
    if ( ++v5 >= this->fields.lastLoopSwitchCaseCount )
      return 0;
  }
  switchCaseIndex = this->fields.switchCaseIndex;
  if ( !switchCaseIndex
    || (System_Collections_Generic_List_int___RemoveRange(
          switchCaseIndex,
          this->fields.lastLoopSwitchCaseCount,
          v6,
          (const MethodInfo_385E160 *)Method_System_Collections_Generic_List_int__RemoveRange__),
        (switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage) == 0) )
  {
LABEL_20:
    sub_1C93D2C(switchCaseIndex, method);
  }
  System_Collections_Generic_List_object___RemoveRange(
    (System_Collections_Generic_List_object__o *)switchCaseIndex,
    this->fields.lastLoopSwitchCaseCount,
    v6,
    (const MethodInfo_387B208 *)Method_System_Collections_Generic_List_string__RemoveRange__);
  this->fields.switchCaseCount = this->fields.lastLoopSwitchCaseCount;
  return 1;
}


void ScriptLoop__SetLogEraseFlag(ScriptLoop_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isEnableLoopLogLaterErase = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void ScriptLoop__SetSwitchCase(ScriptLoop_o *this, int32_t index, System_String_o *message, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  _BOOL4 isEnableLoopLogLaterErase; // w8
  System_Collections_Generic_List_int__o *switchCaseIndex; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x8
  int32_t v20; // w22
  Il2CppObject *Item; // x0

  if ( (byte_4D32964 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D32964 = 1;
  }
  isEnableLoopLogLaterErase = this->fields.isEnableLoopLogLaterErase;
  this->fields.isForceStopAdd = 0;
  this->fields.isAddLog = 1;
  if ( isEnableLoopLogLaterErase || this->fields.switchCaseCount < 1 )
  {
LABEL_4:
    switchCaseIndex = this->fields.switchCaseIndex;
    ++this->fields.switchCaseCount;
    if ( !switchCaseIndex )
      goto LABEL_24;
    items = switchCaseIndex->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++switchCaseIndex->fields._version;
    if ( !items )
      goto LABEL_24;
    size = switchCaseIndex->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        switchCaseIndex,
        index,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      switchCaseIndex->fields._size = size + 1;
      items->m_Items[size] = index;
    }
    switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
    if ( !switchCaseIndex
      || (v16 = switchCaseIndex->fields._items,
          v17 = Method_System_Collections_Generic_List_string__Add__,
          ++switchCaseIndex->fields._version,
          !v16) )
    {
LABEL_24:
      sub_1C93D2C(switchCaseIndex, *(_QWORD *)&index);
    }
    v18 = switchCaseIndex->fields._size;
    if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)switchCaseIndex,
        (Il2CppObject *)message,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &v16->obj.klass + v18;
      switchCaseIndex->fields._size = v18 + 1;
      v19[4] = (Il2CppClass *)message;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)(v19 + 4),
        (int32_t)message,
        (int32_t)message,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
    }
  }
  else
  {
    v20 = 0;
    do
    {
      switchCaseIndex = this->fields.switchCaseIndex;
      if ( !switchCaseIndex )
        goto LABEL_24;
      if ( System_Collections_Generic_List_int___get_Item(
             switchCaseIndex,
             v20,
             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__) == index )
      {
        switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
        if ( !switchCaseIndex )
          goto LABEL_24;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)switchCaseIndex,
                 v20,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( System_String__op_Equality((System_String_o *)Item, message, 0) )
        {
          this->fields.isAddLog = 0;
          return;
        }
      }
      ++v20;
    }
    while ( v20 < this->fields.switchCaseCount );
    if ( this->fields.isAddLog )
      goto LABEL_4;
  }
}


bool ScriptLoop__ShouldAddLogMessage(ScriptLoop_o *this, const MethodInfo *method)
{
  if ( this->fields.isEnableLoopLogLaterErase )
    return 1;
  if ( this->fields.isForceStopAdd )
    return 0;
  if ( this->fields.count < 2 )
    return 1;
  return this->fields.isAddLog;
}


bool ScriptLoop__ShouldAddLogSwitchCase(ScriptLoop_o *this, int32_t index, const MethodInfo *method)
{
  bool v3; // w8
  int32_t count; // w9

  if ( this->fields.isEnableLoopLogLaterErase )
    return 1;
  count = this->fields.count;
  if ( !count )
    return 1;
  if ( count != 1 )
    return this->fields.isAddLog;
  if ( this->fields.isAddLog )
    return 1;
  v3 = 1;
  if ( this->fields.lastSelectedIndex == index )
  {
    this->fields.isForceStopAdd = 1;
    return 0;
  }
  return v3;
}