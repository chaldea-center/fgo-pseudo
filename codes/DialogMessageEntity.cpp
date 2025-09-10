void DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27123 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27123 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2711E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18168/*"commonReleaseId"*/);
    byte_4C2711E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18168/*"commonReleaseId"*/, 0, 0);
}


int32_t DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C27120 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21672/*"msgFontSize"*/);
    byte_4C27120 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21672/*"msgFontSize"*/, defaultValue, 0);
}


System_Nullable_float__o DialogMessageEntity__GetMsgPosY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  float FloatValue; // s0
  System_Nullable_float__o v4; // x0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27121 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&StringLiteral_21673/*"msgPosY"*/);
    byte_4C27121 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21673/*"msgPosY"*/, 0) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_21673/*"msgPosY"*/, 0.0, 0);
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(v4, FloatValue, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27122 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21674/*"msgSpacingY"*/);
    byte_4C27122 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21674/*"msgSpacingY"*/, 0, 0);
}


int32_t DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


System_Int32_array_array *DialogMessageEntity__GetTargets(DialogMessageEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x8
  System_String_o *v8; // x20
  __int64 v9; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v12; // x0
  DialogMessageEntity___c_c *v13; // x8
  System_Object_array *v14; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v16; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4C27117 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_ConvertAll_string__int___);
    sub_1C2D490(&System_Converter_string__int__TypeInfo);
    sub_1C2D490(&int_____TypeInfo);
    sub_1C2D490(&Method_DialogMessageEntity___c__GetTargets_b__14_0__);
    sub_1C2D490(&DialogMessageEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C27117 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C2D538(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_1C2D538(int_____TypeInfo, LODWORD(targetIds->max_length));
  v7 = this->fields.targetIds;
  if ( !v7 )
LABEL_20:
    sub_1C2D6EC(v4, v5);
  v8 = v4;
  v9 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v9 >= max_length )
      return (System_Int32_array_array *)v8;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_23;
    v4 = v7->m_Items[v9];
    if ( v4 )
    {
      v4 = System_String__Replace_63504412(
             v4,
             (System_String_o *)StringLiteral_15801/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63504412(
               v4,
               (System_String_o *)StringLiteral_16055/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v12 = System_String__Split(v4, 0x2Cu, 0, 0);
          v13 = DialogMessageEntity___c_TypeInfo;
          v14 = (System_Object_array *)v12;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
            v13 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v13->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              v13 = DialogMessageEntity___c_TypeInfo;
            }
            v16 = (Il2CppObject *)v13->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__14_0, v16, Method_DialogMessageEntity___c__GetTargets_b__14_0__, 0);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v18, v19);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v14,
                                    (System_Converter_TInput__TOutput__o *)_9__14_0,
                                    (const MethodInfo_31D1FD4 *)Method_System_Array_ConvertAll_string__int___);
          if ( v8 )
          {
            if ( (unsigned int)v9 >= LODWORD(v8[1].klass) )
LABEL_23:
              sub_1C2D6F4(v4, v5, v6);
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C2D434(p_monitor, (int32_t)v4, v6, v20);
            v7 = this->fields.targetIds;
            ++v9;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v7 )
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
  if ( (byte_4C2711F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24078/*"titleFontSize"*/);
    byte_4C2711F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24078/*"titleFontSize"*/, 0, 0);
}


System_String_array *DialogMessageEntity__GetTransitionParam(DialogMessageEntity_o *this, const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  __int64 v4; // x1

  if ( (byte_4C2711D & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_24163/*"transitionParam"*/);
    byte_4C2711D = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_24163/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0);
  if ( !StringValue )
    sub_1C2D6EC(0, v4);
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
  __int64 v12; // x1

  if ( (byte_4C2711A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2711A = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v7 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v8) )
    return v7 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v10);
  if ( !Master_object )
    sub_1C2D6EC(CommonReleaseId, v12);
  return (v7 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0, 0, 0);
}


bool DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x1

  v5 = this;
  if ( (byte_4C27118 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (DialogMessageEntity_o *)sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27118 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v9);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          0)) == 0 )
  {
    sub_1C2D6EC(this, v10);
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
  if ( (byte_4C27119 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27119 = 1;
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
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *title; // x20
  System_String_o *message; // x21
  CommonUI_o *v15; // x23
  System_Action_o *v16; // x24
  const MethodInfo *v17; // x1
  int32_t TitleFontSize; // w22
  const MethodInfo *v19; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v21; // x1
  int32_t spacingY; // w26
  const MethodInfo *v23; // x1

  if ( (byte_4C2711B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Action_Invoke__);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2711B = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.imageIds;
    v8 = (CommonUI_o *)Instance;
    v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
    if ( v8 )
    {
      CommonUI__OpenTutorialImageDialog_31194140(v8, v7, -1, 0, v9, 0, 0, 0);
      return;
    }
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(messagePosY, v11);
  }
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v15 = (CommonUI_o *)v12;
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
  TitleFontSize = DialogMessageEntity__GetTitleFontSize(this, v17);
  messageFontSize = DialogMessageEntity__GetMsgFontSize(this, 0, v19);
  spacingY = DialogMessageEntity__GetMsgSpacingY(this, v21);
  messagePosY = DialogMessageEntity__GetMsgPosY(this, v23);
  if ( !v15 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(
    v15,
    title,
    message,
    v16,
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v19; // x23
  System_String_o *v20; // x24
  CommonConfirmDialog_ClickDelegate_o *v21; // x25
  const MethodInfo *v22; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v24; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v26; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v28; // x1
  float value; // s1

  if ( (byte_4C2711C & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_float__get_HasValue__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__);
    sub_1C2D490(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C2711C = 1;
  }
  v9 = sub_1C2D6DC(DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = decideCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)decideCallback, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v19 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v22);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v24);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v26);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v28);
  if ( !v19 )
LABEL_10:
    sub_1C2D6EC(titleFontSize, v11);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v19,
    title,
    message,
    decideTxt,
    v20,
    v21,
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

  if ( (byte_4C27124 & 1) == 0 )
  {
    sub_1C2D490(&DialogMessageEntity___c_TypeInfo);
    byte_4C27124 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)DialogMessageEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4C27125 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__);
    sub_1C2D490(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
    byte_4C27125 = 1;
  }
  v5 = sub_1C2D6DC(DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v11, 0);
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
    sub_1C2D6EC(this, method);
  v3 = 24;
  if ( this->fields.isDecide )
    v3 = 16;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0);
}