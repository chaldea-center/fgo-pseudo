void DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E0E & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C42E0E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E09 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18174/*"commonReleaseId"*/);
    byte_4C42E09 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18174/*"commonReleaseId"*/, 0, 0);
}


int32_t DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C42E0B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21690/*"msgFontSize"*/);
    byte_4C42E0B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21690/*"msgFontSize"*/, defaultValue, 0);
}


System_Nullable_float__o DialogMessageEntity__GetMsgPosY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  float FloatValue; // s0
  System_Nullable_float__o v4; // x0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42E0C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&StringLiteral_21691/*"msgPosY"*/);
    byte_4C42E0C = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21691/*"msgPosY"*/, 0) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_21691/*"msgPosY"*/, 0.0, 0);
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(v4, FloatValue, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E0D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21692/*"msgSpacingY"*/);
    byte_4C42E0D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21692/*"msgSpacingY"*/, 0, 0);
}


int32_t DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


System_Int32_array_array *DialogMessageEntity__GetTargets(DialogMessageEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  struct System_String_array *v5; // x8
  System_String_o *v6; // x20
  __int64 v7; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v10; // x0
  DialogMessageEntity___c_c *v11; // x8
  System_Object_array *v12; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v14; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C42E02 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_ConvertAll_string__int___);
    sub_1C37058(&System_Converter_string__int__TypeInfo);
    sub_1C37058(&int_____TypeInfo);
    sub_1C37058(&Method_DialogMessageEntity___c__GetTargets_b__14_0__);
    sub_1C37058(&DialogMessageEntity___c_TypeInfo);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C42E02 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C37100(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_1C37100(int_____TypeInfo, LODWORD(targetIds->max_length));
  v5 = this->fields.targetIds;
  if ( !v5 )
LABEL_20:
    sub_1C372B4(v4);
  v6 = v4;
  v7 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v5->max_length;
    if ( (int)v7 >= max_length )
      return (System_Int32_array_array *)v6;
    if ( (unsigned int)v7 >= max_length )
      goto LABEL_23;
    v4 = v5->m_Items[v7];
    if ( v4 )
    {
      v4 = System_String__Replace_63608204(
             v4,
             (System_String_o *)StringLiteral_15804/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63608204(
               v4,
               (System_String_o *)StringLiteral_16058/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v10 = System_String__Split(v4, 0x2Cu, 0, 0);
          v11 = DialogMessageEntity___c_TypeInfo;
          v12 = (System_Object_array *)v10;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
            v11 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v11->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v11->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v11);
              v11 = DialogMessageEntity___c_TypeInfo;
            }
            v14 = (Il2CppObject *)v11->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__14_0, v14, Method_DialogMessageEntity___c__GetTargets_b__14_0__, 0);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v16, v17);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v12,
                                    (System_Converter_TInput__TOutput__o *)_9__14_0,
                                    (const MethodInfo_31EB2DC *)Method_System_Array_ConvertAll_string__int___);
          if ( v6 )
          {
            if ( (unsigned int)v7 >= LODWORD(v6[1].klass) )
LABEL_23:
              sub_1C372BC(v4);
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C36FFC(p_monitor, (int32_t)v4, v18, v19);
            v5 = this->fields.targetIds;
            ++v7;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v5 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


int32_t DialogMessageEntity__GetTitleFontSize(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E0A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24100/*"titleFontSize"*/);
    byte_4C42E0A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24100/*"titleFontSize"*/, 0, 0);
}


System_String_array *DialogMessageEntity__GetTransitionParam(DialogMessageEntity_o *this, const MethodInfo *method)
{
  System_String_o *StringValue; // x0

  if ( (byte_4C42E08 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_24185/*"transitionParam"*/);
    byte_4C42E08 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_24185/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0);
  if ( !StringValue )
    sub_1C372B4(0);
  return System_String__Split(StringValue, 0x2Fu, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DialogMessageEntity__IsOpenCondition(
        DialogMessageEntity_o *this,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  unsigned int v7; // w21
  const MethodInfo *v8; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v10; // x1
  __int64 CommonReleaseId; // x0
  const MethodInfo *v12; // x4

  if ( (byte_4C42E05 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C42E05 = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v7 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v8) )
    return v7 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v10);
  if ( !Master_object )
    sub_1C372B4(CommonReleaseId);
  return (v7 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0, 0, v12);
}


bool DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  v5 = this;
  if ( (byte_4C42E03 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (DialogMessageEntity_o *)sub_1C37058(&DataManager_TypeInfo);
    byte_4C42E03 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v9);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v10)) == 0 )
  {
    sub_1C372B4(this);
  }
  if ( !*(_QWORD *)&this->fields.dialogOpenType )
  {
    openedAt = v5->fields.openedAt;
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  }
  return 1;
}


bool DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
        DialogMessageEntity_o *this,
        int64_t start,
        int64_t end,
        int64_t now,
        const MethodInfo *method)
{
  if ( (byte_4C42E04 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42E04 = 1;
  }
  if ( !now )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    now = NetworkManager__getTime(0);
  }
  return now >= start && now < end;
}


bool DialogMessageEntity__IsRemindOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
           this,
           this->fields.remindAt,
           this->fields.closedAt,
           now,
           v3);
}


void DialogMessageEntity__Open(DialogMessageEntity_o *this, System_Action_o *callback, const MethodInfo *method)
{
  struct System_Int32_array *imageIds; // x9
  Il2CppObject *Instance; // x0
  System_Int32_array *v7; // x19
  CommonUI_o *v8; // x20
  System_Action_o *v9; // x21
  System_Nullable_float__o messagePosY; // x0
  Il2CppObject *v11; // x0
  System_String_o *title; // x20
  System_String_o *message; // x21
  CommonUI_o *v14; // x23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x1
  int32_t TitleFontSize; // w22
  const MethodInfo *v18; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v20; // x1
  int32_t spacingY; // w26
  const MethodInfo *v22; // x1

  if ( (byte_4C42E06 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Action_Invoke__);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C42E06 = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.imageIds;
    v8 = (CommonUI_o *)Instance;
    v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
    if ( v8 )
    {
      CommonUI__OpenTutorialImageDialog_31234712(v8, v7, -1, 0, v9, 0, 0, 0);
      return;
    }
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C372B4)(messagePosY);
  }
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v14 = (CommonUI_o *)v11;
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
  TitleFontSize = DialogMessageEntity__GetTitleFontSize(this, v16);
  messageFontSize = DialogMessageEntity__GetMsgFontSize(this, 0, v18);
  spacingY = DialogMessageEntity__GetMsgSpacingY(this, v20);
  messagePosY = DialogMessageEntity__GetMsgPosY(this, v22);
  if ( !v14 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(
    v14,
    title,
    message,
    v15,
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
    0);
}


void DialogMessageEntity__OpenConfirmDecideDialog(
        DialogMessageEntity_o *this,
        System_String_o *decideTxt,
        System_Action_o *callback,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v9; // x26
  __int64 titleFontSize; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v18; // x23
  System_String_o *v19; // x24
  CommonConfirmDialog_ClickDelegate_o *v20; // x25
  const MethodInfo *v21; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v23; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v25; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v27; // x1
  float value; // s1

  if ( (byte_4C42E07 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__);
    sub_1C37058(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C42E07 = 1;
  }
  v9 = sub_1C372A4(DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = decideCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)decideCallback, v11, v12);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)callback, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v18 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v21);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v23);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v25);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v27);
  if ( !v18 )
LABEL_10:
    sub_1C372B4(titleFontSize);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v18,
    title,
    message,
    decideTxt,
    v19,
    v20,
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
    0);
}


void DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42E0F & 1) == 0 )
  {
    sub_1C37058(&DialogMessageEntity___c_TypeInfo);
    byte_4C42E0F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)DialogMessageEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void DialogMessageEntity___c___ctor(DialogMessageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DialogMessageEntity___c___GetTargets_b__14_0(
        DialogMessageEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( System_Int32__TryParse(input, &result, 0) )
    return result;
  else
    return 0;
}


void DialogMessageEntity___c__DisplayClass22_0___ctor(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DialogMessageEntity___c__DisplayClass22_0___OpenConfirmDecideDialog_b__0(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C42E10 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__);
    sub_1C37058(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
    byte_4C42E10 = 1;
  }
  v5 = sub_1C372A4(DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C372B4(v6);
  }
  CommonUI__CloseConfirmDialog_31208544((CommonUI_o *)Instance, v10, 0);
}


void DialogMessageEntity___c__DisplayClass22_1___ctor(
        DialogMessageEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DialogMessageEntity___c__DisplayClass22_1___OpenConfirmDecideDialog_b__1(
        DialogMessageEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  struct DialogMessageEntity___c__DisplayClass22_0_o *CS___8__locals1; // x8
  __int64 v3; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C372B4(this);
  v3 = 24;
  if ( this->fields.isDecide )
    v3 = 16;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0);
}