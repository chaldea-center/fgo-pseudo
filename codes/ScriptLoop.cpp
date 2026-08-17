void ScriptLoop___ctor(ScriptLoop_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5972862 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_5972862 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.switchCaseIndex = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.switchCaseIndex, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.switchCaseMessage = (struct System_Collections_Generic_List_string__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.switchCaseMessage,
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

  if ( (byte_597285F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_LastOrDefault_int___);
    byte_597285F = 1;
  }
  v3 = this->fields.count + 1;
  v4 = this->fields.count - 1 < 0;
  this->fields.count = v3;
  if ( v4 == __OFSUB__(v3, 2) )
    this->fields.isForceStopAdd = 1;
  v5 = System_Linq_Enumerable__LastOrDefault_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.switchCaseIndex,
         (const MethodInfo_38852C8 *)Method_System_Linq_Enumerable_LastOrDefault_int___);
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
  bool result; // w0

  if ( (byte_5972860 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5972860 = 1;
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
                                                                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.switchCaseIndex )
      goto LABEL_20;
    if ( (_DWORD)switchCaseIndex != System_Collections_Generic_List_int___get_Item(
                                      this->fields.switchCaseIndex,
                                      this->fields.lastLoopSwitchCaseCount + v4,
                                      (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) )
      goto LABEL_14;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
    if ( !switchCaseIndex )
      goto LABEL_20;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)switchCaseIndex,
                                                                  v5,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !this->fields.switchCaseMessage )
      goto LABEL_20;
    v8 = (System_String_o *)switchCaseIndex;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this->fields.switchCaseMessage,
             this->fields.lastLoopSwitchCaseCount + v4,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
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
          (const MethodInfo_4468A1C *)Method_System_Collections_Generic_List_int__RemoveRange__),
        (switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage) == 0) )
  {
LABEL_20:
    sub_2213CDC(switchCaseIndex, method);
  }
  System_Collections_Generic_List_object___RemoveRange(
    (System_Collections_Generic_List_object__o *)switchCaseIndex,
    this->fields.lastLoopSwitchCaseCount,
    v6,
    (const MethodInfo_4485494 *)Method_System_Collections_Generic_List_string__RemoveRange__);
  result = 1;
  this->fields.switchCaseCount = this->fields.lastLoopSwitchCaseCount;
  return result;
}


void ScriptLoop__SetLogEraseFlag(ScriptLoop_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isEnableLoopLogLaterErase = isEnable;
}


// local variable allocation has failed, the output may be wrong!
void ScriptLoop__SetSwitchCase(ScriptLoop_o *this, int32_t index, System_String_o *message, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  _BOOL4 isEnableLoopLogLaterErase; // w8
  System_Collections_Generic_List_int__o *switchCaseIndex; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *switchCaseMessage; // x8
  struct System_Object_array *v17; // x9
  _QWORD *v18; // x10
  __int64 v19; // x11
  Il2CppClass **v20; // x0
  int32_t v21; // w22
  Il2CppObject *Item; // x0

  if ( (byte_5972861 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5972861 = 1;
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
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      switchCaseIndex->fields._size = size + 1;
      items->m_Items[size] = index;
    }
    switchCaseMessage = (System_Collections_Generic_List_object__o *)this->fields.switchCaseMessage;
    if ( !switchCaseMessage
      || (v17 = switchCaseMessage->fields._items,
          v18 = Method_System_Collections_Generic_List_string__Add__,
          ++switchCaseMessage->fields._version,
          !v17) )
    {
LABEL_24:
      sub_2213CDC(switchCaseIndex, *(_QWORD *)&index);
    }
    v19 = switchCaseMessage->fields._size;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        switchCaseMessage,
        (Il2CppObject *)message,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &v17->obj.klass + v19;
      switchCaseMessage->fields._size = v19 + 1;
      v20[4] = (Il2CppClass *)message;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v20 + 4),
        (int32_t)message,
        message,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
    }
  }
  else
  {
    v21 = 0;
    do
    {
      switchCaseIndex = this->fields.switchCaseIndex;
      if ( !switchCaseIndex )
        goto LABEL_24;
      if ( System_Collections_Generic_List_int___get_Item(
             switchCaseIndex,
             v21,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) == index )
      {
        switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
        if ( !switchCaseIndex )
          goto LABEL_24;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)switchCaseIndex,
                 v21,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( System_String__op_Equality((System_String_o *)Item, message, 0) )
        {
          this->fields.isAddLog = 0;
          return;
        }
      }
      ++v21;
    }
    while ( v21 < this->fields.switchCaseCount );
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
  int32_t count; // w8

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