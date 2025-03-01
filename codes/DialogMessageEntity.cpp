void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD5AE & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFD5AE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD5A9 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_18491/*"commonReleaseId"*/, method);
    byte_4BFD5A9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18491/*"commonReleaseId"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4BFD5AB & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21944/*"msgFontSize"*/, *(_QWORD *)&defaultValue);
    byte_4BFD5AB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21944/*"msgFontSize"*/, defaultValue, 0LL);
}


System_Nullable_float__o __fastcall DialogMessageEntity__GetMsgPosY(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float FloatValue; // s0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v7; // 0:x0.8

  if ( (byte_4BFD5AC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Nullable_float___ctor__, method);
    sub_1C2E12C(&StringLiteral_21945/*"msgPosY"*/, v3);
    byte_4BFD5AC = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21945/*"msgPosY"*/, 0LL) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_21945/*"msgPosY"*/, 0.0, 0LL);
    v7 = (System_Nullable_float__o)&v6;
    v6 = 0LL;
    System_Nullable_float____ctor(v7, FloatValue, (const MethodInfo_378A18C *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t __fastcall DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD5AD & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21946/*"msgSpacingY"*/, method);
    byte_4BFD5AD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21946/*"msgSpacingY"*/, 0, 0LL);
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
  struct System_String_array *v13; // x8
  System_Int32_array_array *v14; // x20
  __int64 v15; // x25
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v18; // x0
  DialogMessageEntity___c_c *v19; // x8
  System_Object_array *v20; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v22; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BFD5A2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1C2E12C(&System_Converter_string__int__TypeInfo, v3);
    sub_1C2E12C(&int_____TypeInfo, v4);
    sub_1C2E12C(&Method_DialogMessageEntity___c__GetTargets_b__14_0__, v5);
    sub_1C2E12C(&DialogMessageEntity___c_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_16099/*"["*/, v7);
    sub_1C2E12C(&StringLiteral_1/*""*/, v8);
    sub_1C2E12C(&StringLiteral_16358/*"]"*/, v9);
    byte_4BFD5A2 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C2E1D4(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1C2E1D4(int_____TypeInfo, targetIds->max_length);
  v13 = this->fields.targetIds;
  if ( !v13 )
LABEL_20:
    sub_1C2E388(v11, v12);
  v14 = (System_Int32_array_array *)v11;
  v15 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v11[1].monitor;
  while ( 1 )
  {
    max_length = v13->max_length;
    if ( (int)v15 >= max_length )
      return v14;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_23;
    v11 = v13->m_Items[v15];
    if ( v11 )
    {
      v11 = System_String__Replace_63255212(
              v11,
              (System_String_o *)StringLiteral_16099/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_63255212(
                v11,
                (System_String_o *)StringLiteral_16358/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v11 )
        {
          v18 = System_String__Split(v11, 0x2Cu, 0, 0LL);
          v19 = DialogMessageEntity___c_TypeInfo;
          v20 = (System_Object_array *)v18;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
            v19 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v19->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v19->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v19);
              v19 = DialogMessageEntity___c_TypeInfo;
            }
            v22 = (Il2CppObject *)v19->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1C2E378(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__14_0,
              v22,
              Method_DialogMessageEntity___c__GetTargets_b__14_0__,
              0LL);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
              (int64_t)_9__14_0,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v20,
                                     (System_Converter_TInput__TOutput__o *)_9__14_0,
                                     (const MethodInfo_30CBA68 *)Method_System_Array_ConvertAll_string__int___);
          if ( v14 )
          {
            if ( (unsigned int)v15 >= v14->max_length )
LABEL_23:
              sub_1C2E390(v11, v12);
            p_monitor->klass = (PartyOrganizationUtility_c *)v11;
            sub_1C2E0D0(p_monitor, (int64_t)v11, v30, v31, v32, v33, v34, v35);
            v13 = this->fields.targetIds;
            ++v15;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
            if ( v13 )
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
  if ( (byte_4BFD5AA & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24415/*"titleFontSize"*/, method);
    byte_4BFD5AA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24415/*"titleFontSize"*/, 0, 0LL);
}


System_String_array *__fastcall DialogMessageEntity__GetTransitionParam(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *StringValue; // x0
  __int64 v5; // x1

  if ( (byte_4BFD5A8 & 1) == 0 )
  {
    sub_1C2E12C(&string_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_24505/*"transitionParam"*/, v3);
    byte_4BFD5A8 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_24505/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1C2E388(0LL, v5);
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
  const MethodInfo *v14; // x4

  if ( (byte_4BFD5A5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&ex1);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    byte_4BFD5A5 = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v8 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v9) )
    return v8 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v11);
  if ( !Master_object )
    sub_1C2E388(CommonReleaseId, v13);
  return (v8 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0LL, 0, v14);
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
  const MethodInfo *v12; // x2

  v5 = this;
  if ( (byte_4BFD5A3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_CommonReleaseMaster___, now);
    this = (DialogMessageEntity_o *)sub_1C2E12C(&DataManager_TypeInfo, v6);
    byte_4BFD5A3 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v10);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v12)) == 0LL )
  {
    sub_1C2E388(this, v11);
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
  if ( (byte_4BFD5A4 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, start);
    byte_4BFD5A4 = 1;
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
  CommonUI_o *v10; // x21
  System_Action_o *v11; // x22
  System_Nullable_float__o messagePosY; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v17; // x23
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x1
  int32_t TitleFontSize; // w20
  const MethodInfo *v21; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v23; // x1
  int32_t spacingY; // w26
  const MethodInfo *v25; // x1

  if ( (byte_4BFD5A6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Action_Invoke__, callback);
    sub_1C2E12C(&System_Action_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BFD5A6 = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = this->fields.imageIds;
    v10 = (CommonUI_o *)Instance;
    v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
    if ( v10 )
    {
      CommonUI__OpenTutorialImageDialog_31203448(v10, v9, -1, 0, v11, 0LL, 0LL, 0LL);
      return;
    }
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2E388)(messagePosY, v13);
  }
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v17 = (CommonUI_o *)v14;
  v18 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *Instance; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v34; // x23
  System_String_o *v35; // x24
  CommonConfirmDialog_ClickDelegate_o *v36; // x25
  const MethodInfo *v37; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v39; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v41; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v43; // x1
  float value; // s1

  if ( (byte_4BFD5A7 & 1) == 0 )
  {
    sub_1C2E12C(&CommonConfirmDialog_ClickDelegate_TypeInfo, decideTxt);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Nullable_float__GetValueOrDefault__, v10);
    sub_1C2E12C(&Method_System_Nullable_float__get_HasValue__, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C2E12C(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__, v13);
    sub_1C2E12C(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo, v14);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_4BFD5A7 = 1;
  }
  v16 = sub_1C2E378(DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = decideCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)decideCallback, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v34 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  v36 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v36,
    (Il2CppObject *)v16,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0LL);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v37);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v39);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v41);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v43);
  if ( !v34 )
LABEL_10:
    sub_1C2E388(titleFontSize, v18);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v34,
    title,
    message,
    decideTxt,
    v35,
    v36,
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFD5AF & 1) == 0 )
  {
    sub_1C2E12C(&DialogMessageEntity___c_TypeInfo, v1);
    byte_4BFD5AF = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)DialogMessageEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4BFD5B0 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isDecide);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C2E12C(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__, v6);
    sub_1C2E12C(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo, v7);
    byte_4BFD5B0 = 1;
  }
  v8 = sub_1C2E378(DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C2E388(v9, v10);
  }
  CommonUI__CloseConfirmDialog_31177520((CommonUI_o *)Instance, v18, 0LL);
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
    sub_1C2E388(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}