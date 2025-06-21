void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C377 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C377 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C372 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18022/*"commonReleaseId"*/, method);
    byte_4B1C372 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18022/*"commonReleaseId"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1C374 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21493/*"msgFontSize"*/, *(_QWORD *)&defaultValue);
    byte_4B1C374 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21493/*"msgFontSize"*/, defaultValue, 0LL);
}


System_Nullable_float__o __fastcall DialogMessageEntity__GetMsgPosY(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float FloatValue; // s0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v7; // 0:x0.8

  if ( (byte_4B1C375 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, method);
    sub_1BCAFF8(&StringLiteral_21494/*"msgPosY"*/, v3);
    byte_4B1C375 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21494/*"msgPosY"*/, 0LL) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_21494/*"msgPosY"*/, 0.0, 0LL);
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, FloatValue, (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t __fastcall DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C376 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21495/*"msgSpacingY"*/, method);
    byte_4B1C376 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21495/*"msgSpacingY"*/, 0, 0LL);
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


System_Int32_array_array *__fastcall DialogMessageEntity__GetTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_array *targetIds; // x8
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_String_array *v14; // x8
  System_Int32_array_array *v15; // x20
  __int64 v16; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v19; // x0
  DialogMessageEntity___c_c *v20; // x8
  System_Object_array *v21; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v23; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3

  if ( (byte_4B1C36B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1BCAFF8(&System_Converter_string__int__TypeInfo, v3);
    sub_1BCAFF8(&int_____TypeInfo, v4);
    sub_1BCAFF8(&Method_DialogMessageEntity___c__GetTargets_b__14_0__, v5);
    sub_1BCAFF8(&DialogMessageEntity___c_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v9);
    byte_4B1C36B = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1BCB0A0(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1BCB0A0(int_____TypeInfo, targetIds->max_length);
  v14 = this->fields.targetIds;
  if ( !v14 )
LABEL_20:
    sub_1BCB254(v11, v12);
  v15 = (System_Int32_array_array *)v11;
  v16 = 0LL;
  p_monitor = (CGThumbnailListItem_o *)&v11[1].monitor;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v16 >= max_length )
      return v15;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_23;
    v11 = v14->m_Items[v16];
    if ( v11 )
    {
      v11 = System_String__Replace_62496972(
              v11,
              (System_String_o *)StringLiteral_15670/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_62496972(
                v11,
                (System_String_o *)StringLiteral_15923/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v11 )
        {
          v19 = System_String__Split(v11, 0x2Cu, 0, 0LL);
          v20 = DialogMessageEntity___c_TypeInfo;
          v21 = (System_Object_array *)v19;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
            v20 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v20->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v20 = DialogMessageEntity___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v20->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__14_0,
              v23,
              Method_DialogMessageEntity___c__GetTargets_b__14_0__,
              0LL);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v25, v26);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v21,
                                     (System_Converter_TInput__TOutput__o *)_9__14_0,
                                     (const MethodInfo_311563C *)Method_System_Array_ConvertAll_string__int___);
          if ( v15 )
          {
            if ( (unsigned int)v16 >= v15->max_length )
LABEL_23:
              sub_1BCB25C(v11, v12, v13);
            p_monitor->klass = (CGThumbnailListItem_c *)v11;
            sub_1BCAF9C(p_monitor, (int32_t)v11, v13, v27);
            v14 = this->fields.targetIds;
            ++v16;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v14 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


int32_t __fastcall DialogMessageEntity__GetTitleFontSize(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C373 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23884/*"titleFontSize"*/, method);
    byte_4B1C373 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23884/*"titleFontSize"*/, 0, 0LL);
}


System_String_array *__fastcall DialogMessageEntity__GetTransitionParam(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *StringValue; // x0
  __int64 v5; // x1

  if ( (byte_4B1C371 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_23969/*"transitionParam"*/, v3);
    byte_4B1C371 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_23969/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1BCB254(0LL, v5);
  return System_String__Split(StringValue, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DialogMessageEntity__IsOpenCondition(
        DialogMessageEntity_o *this,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  __int64 v7; // x1
  unsigned int v8; // w21
  const MethodInfo *v9; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v11; // x1
  __int64 CommonReleaseId; // x0
  __int64 v13; // x1

  if ( (byte_4B1C36E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&ex1);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    byte_4B1C36E = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v8 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v9) )
    return v8 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v11);
  if ( !Master_object )
    sub_1BCB254(CommonReleaseId, v13);
  return (v8 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0LL, 0, 0LL);
}


bool __fastcall DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  __int64 v6; // x1
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x1

  v5 = this;
  if ( (byte_4B1C36C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, now);
    this = (DialogMessageEntity_o *)sub_1BCAFF8(&DataManager_TypeInfo, v6);
    byte_4B1C36C = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v10);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          0LL)) == 0LL )
  {
    sub_1BCB254(this, v11);
  }
  if ( !*(_QWORD *)&this->fields.dialogOpenType )
  {
    openedAt = v5->fields.openedAt;
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  }
  return 1;
}


bool __fastcall DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
        DialogMessageEntity_o *this,
        int64_t start,
        int64_t end,
        int64_t now,
        const MethodInfo *method)
{
  if ( (byte_4B1C36D & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, start);
    byte_4B1C36D = 1;
  }
  if ( !now )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    now = NetworkManager__getTime(0LL);
  }
  return now >= start && now < end;
}


bool __fastcall DialogMessageEntity__IsRemindOpenTime(
        DialogMessageEntity_o *this,
        int64_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
           this,
           this->fields.remindAt,
           this->fields.closedAt,
           now,
           v3);
}


void __fastcall DialogMessageEntity__Open(
        DialogMessageEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *imageIds; // x9
  Il2CppObject *Instance; // x0
  System_Int32_array *v9; // x19
  CommonUI_o *v10; // x20
  System_Action_o *v11; // x21
  System_Nullable_float__o messagePosY; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  System_String_o *title; // x20
  System_String_o *message; // x21
  CommonUI_o *v17; // x23
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x1
  int32_t TitleFontSize; // w22
  const MethodInfo *v21; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v23; // x1
  int32_t spacingY; // w26
  const MethodInfo *v25; // x1

  if ( (byte_4B1C36F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Action_Invoke__, callback);
    sub_1BCAFF8(&System_Action_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B1C36F = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = this->fields.imageIds;
    v10 = (CommonUI_o *)Instance;
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
    if ( v10 )
    {
      CommonUI__OpenTutorialImageDialog_30790248(v10, v9, -1, 0, v11, 0LL, 0LL, 0LL);
      return;
    }
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BCB254)(messagePosY, v13);
  }
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v17 = (CommonUI_o *)v14;
  v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  TitleFontSize = DialogMessageEntity__GetTitleFontSize(this, v19);
  messageFontSize = DialogMessageEntity__GetMsgFontSize(this, 0, v21);
  spacingY = DialogMessageEntity__GetMsgSpacingY(this, v23);
  messagePosY = DialogMessageEntity__GetMsgPosY(this, v25);
  if ( !v17 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(
    v17,
    title,
    message,
    v18,
    -1,
    0,
    TitleFontSize,
    0,
    1,
    messageFontSize,
    0,
    spacingY,
    messagePosY,
    0.0,
    0,
    0LL);
}


void __fastcall DialogMessageEntity__OpenConfirmDecideDialog(
        DialogMessageEntity_o *this,
        System_String_o *decideTxt,
        System_Action_o *callback,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x26
  __int64 titleFontSize; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Instance; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v26; // x23
  System_String_o *v27; // x24
  CommonConfirmDialog_ClickDelegate_o *v28; // x25
  const MethodInfo *v29; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v31; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v33; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v35; // x1
  float value; // s1

  if ( (byte_4B1C370 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, decideTxt);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Nullable_float__GetValueOrDefault__, v10);
    sub_1BCAFF8(&Method_System_Nullable_float__get_HasValue__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BCAFF8(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__, v13);
    sub_1BCAFF8(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_4B1C370 = 1;
  }
  v16 = sub_1BCB244(DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = decideCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)decideCallback, v19, v20);
  *(_QWORD *)(v16 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)callback, v21, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v26 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v16,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0LL);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v29);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v31);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v33);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v35);
  if ( !v26 )
LABEL_10:
    sub_1BCB254(titleFontSize, v18);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v26,
    title,
    message,
    decideTxt,
    v27,
    v28,
    MsgFontSize,
    0.0,
    value,
    MsgSpacingY,
    1,
    0,
    240,
    0,
    1,
    0,
    titleFontSize,
    0LL);
}


void __fastcall DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C378 & 1) == 0 )
  {
    sub_1BCAFF8(&DialogMessageEntity___c_TypeInfo, v1);
    byte_4B1C378 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)DialogMessageEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall DialogMessageEntity___c___ctor(DialogMessageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageEntity___c___GetTargets_b__14_0(
        DialogMessageEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( System_Int32__TryParse(input, &result, 0LL) )
    return result;
  else
    return 0;
}


void __fastcall DialogMessageEntity___c__DisplayClass22_0___ctor(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DialogMessageEntity___c__DisplayClass22_0___OpenConfirmDecideDialog_b__0(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4B1C379 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__, v6);
    sub_1BCAFF8(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo, v7);
    byte_4B1C379 = 1;
  }
  v8 = sub_1BCB244(DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass22_1___ctor(
        DialogMessageEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass22_1___OpenConfirmDecideDialog_b__1(
        DialogMessageEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  struct DialogMessageEntity___c__DisplayClass22_0_o *CS___8__locals1; // x8
  __int64 v3; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1BCB254(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}