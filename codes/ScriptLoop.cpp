void ScriptLoop___ctor(ScriptLoop_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C44F44 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C44F44 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.switchCaseIndex = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.switchCaseIndex, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.switchCaseMessage = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.switchCaseMessage, (int32_t)v6, v7, v8);
  this->fields.isAddLog = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptLoop__ExecuteLoop(ScriptLoop_o *this, const MethodInfo *method)
{
  int32_t v3; // w9
  bool v4; // nf
  int32_t v5; // w0
  int32_t switchCaseCount; // w8

  if ( (byte_4C44F41 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_LastOrDefault_int___);
    byte_4C44F41 = 1;
  }
  v3 = this->fields.count + 1;
  v4 = this->fields.count - 1 < 0;
  this->fields.count = v3;
  if ( v4 == __OFSUB__(v3, 2) )
    this->fields.isForceStopAdd = 1;
  v5 = System_Linq_Enumerable__LastOrDefault_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.switchCaseIndex,
         (const MethodInfo_311410C *)Method_System_Linq_Enumerable_LastOrDefault_int___);
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

  if ( (byte_4C44F42 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__RemoveRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C44F42 = 1;
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
                                                                  (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !this->fields.switchCaseIndex )
      goto LABEL_20;
    if ( (_DWORD)switchCaseIndex != System_Collections_Generic_List_int___get_Item(
                                      this->fields.switchCaseIndex,
                                      this->fields.lastLoopSwitchCaseCount + v4,
                                      (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) )
      goto LABEL_14;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
    if ( !switchCaseIndex )
      goto LABEL_20;
    switchCaseIndex = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)switchCaseIndex,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !this->fields.switchCaseMessage )
      goto LABEL_20;
    v8 = (System_String_o *)switchCaseIndex;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this->fields.switchCaseMessage,
             this->fields.lastLoopSwitchCaseCount + v4,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
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
          (const MethodInfo_37877E8 *)Method_System_Collections_Generic_List_int__RemoveRange__),
        (switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage) == 0) )
  {
LABEL_20:
    sub_1C372B4(switchCaseIndex);
  }
  System_Collections_Generic_List_object___RemoveRange(
    (System_Collections_Generic_List_object__o *)switchCaseIndex,
    this->fields.lastLoopSwitchCaseCount,
    v6,
    (const MethodInfo_37A4890 *)Method_System_Collections_Generic_List_string__RemoveRange__);
  result = 1;
  this->fields.switchCaseCount = this->fields.lastLoopSwitchCaseCount;
  return result;
}


void ScriptLoop__SetLogEraseFlag(ScriptLoop_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isEnableLoopLogLaterErase = isEnable;
}


void ScriptLoop__SetSwitchCase(ScriptLoop_o *this, int32_t index, System_String_o *message, const MethodInfo *method)
{
  _BOOL4 isEnableLoopLogLaterErase; // w8
  System_Collections_Generic_List_int__o *switchCaseIndex; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  struct System_Int32_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x8
  int32_t v16; // w22
  Il2CppObject *Item; // x0

  if ( (byte_4C44F43 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C44F43 = 1;
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
    v10 = Method_System_Collections_Generic_List_int__Add__;
    ++switchCaseIndex->fields._version;
    if ( !items )
      goto LABEL_24;
    size = switchCaseIndex->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        switchCaseIndex,
        index,
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      switchCaseIndex->fields._size = size + 1;
      items->m_Items[size] = index;
    }
    switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
    if ( !switchCaseIndex
      || (v12 = switchCaseIndex->fields._items,
          v13 = Method_System_Collections_Generic_List_string__Add__,
          ++switchCaseIndex->fields._version,
          !v12) )
    {
LABEL_24:
      sub_1C372B4(switchCaseIndex);
    }
    v14 = switchCaseIndex->fields._size;
    if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)switchCaseIndex,
        (Il2CppObject *)message,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &v12->obj.klass + v14;
      switchCaseIndex->fields._size = v14 + 1;
      v15[4] = (Il2CppClass *)message;
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)message, (int32_t)message, method);
    }
  }
  else
  {
    v16 = 0;
    do
    {
      switchCaseIndex = this->fields.switchCaseIndex;
      if ( !switchCaseIndex )
        goto LABEL_24;
      if ( System_Collections_Generic_List_int___get_Item(
             switchCaseIndex,
             v16,
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == index )
      {
        switchCaseIndex = (System_Collections_Generic_List_int__o *)this->fields.switchCaseMessage;
        if ( !switchCaseIndex )
          goto LABEL_24;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)switchCaseIndex,
                 v16,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( System_String__op_Equality((System_String_o *)Item, message, 0) )
        {
          this->fields.isAddLog = 0;
          return;
        }
      }
      ++v16;
    }
    while ( v16 < this->fields.switchCaseCount );
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