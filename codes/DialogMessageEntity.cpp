void DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384CE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59384CE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384C9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    byte_59384C9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18947/*"commonReleaseId"*/, 0, 0);
}


int32_t DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_59384CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22752/*"msgFontSize"*/);
    byte_59384CB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22752/*"msgFontSize"*/, defaultValue, 0);
}


System_Nullable_float__o DialogMessageEntity__GetMsgPosY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  float FloatValue; // s0
  System_Nullable_float__o v4; // x0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59384CC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&StringLiteral_22753/*"msgPosY"*/);
    byte_59384CC = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22753/*"msgPosY"*/, 0) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_22753/*"msgPosY"*/, 0.0, 0);
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(v4, FloatValue, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384CD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22754/*"msgSpacingY"*/);
    byte_59384CD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22754/*"msgSpacingY"*/, 0, 0);
}


System_Int32_array_array *DialogMessageEntity__GetTargets(DialogMessageEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  System_String_o **v7; // x23
  System_String_o **v8; // x26
  System_String_o **v9; // x27
  const MethodInfo_3974B98 **v10; // x29
  void **p_monitor; // x25
  System_String_o *v12; // x20
  unsigned int v13; // w24
  unsigned int max_length; // w9
  System_String_array *v15; // x0
  __int64 v16; // x1
  DialogMessageEntity___c_c *v17; // x8
  System_Object_array *v18; // x21
  struct DialogMessageEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__14_0; // x22
  System_String_o **v21; // x25
  DialogMessageEntity_o *v22; // x26
  const MethodInfo_3974B98 **v23; // x19
  System_String_o **v24; // x29
  System_String_o **v25; // x27
  Il2CppObject *v26; // x23
  struct DialogMessageEntity___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x8
  void **v42; // [xsp+8h] [xbp-68h]

  if ( (byte_59384C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_ConvertAll_string__int___);
    sub_21FFC50(&System_Converter_string__int__TypeInfo);
    sub_21FFC50(&int_____TypeInfo);
    sub_21FFC50(&Method_DialogMessageEntity___c__GetTargets_b__14_0__);
    sub_21FFC50(&DialogMessageEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_59384C2 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_21FFD10(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_21FFD10(int_____TypeInfo, LODWORD(targetIds->max_length));
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_21FFECC(v4, v5);
  v7 = (System_String_o **)&StringLiteral_16395/*"["*/;
  v8 = (System_String_o **)&StringLiteral_1/*""*/;
  v9 = (System_String_o **)&StringLiteral_16659/*"]"*/;
  v10 = (const MethodInfo_3974B98 **)&Method_System_Array_ConvertAll_string__int___;
  p_monitor = &v4[1].monitor;
  v12 = v4;
  v13 = 0;
  v42 = &v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Int32_array_array *)v12;
    if ( v13 >= max_length )
      goto LABEL_23;
    v4 = v6->m_Items[v13];
    if ( v4 )
    {
      v4 = System_String__Replace_75490096(v4, *v7, *v8, 0);
      if ( v4 )
      {
        v4 = System_String__Replace_75490096(v4, *v9, *v8, 0);
        if ( v4 )
        {
          v15 = System_String__Split(v4, 0x2Cu, 0, 0);
          v17 = DialogMessageEntity___c_TypeInfo;
          v18 = (System_Object_array *)v15;
          if ( !*(&DialogMessageEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo, v16);
            v17 = DialogMessageEntity___c_TypeInfo;
          }
          static_fields = v17->static_fields;
          _9__14_0 = (System_Converter_object__int__o *)static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            v21 = v8;
            v22 = this;
            v23 = v10;
            v24 = v9;
            v25 = v7;
            if ( !*(&v17->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v17, v16);
              static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            }
            v26 = (Il2CppObject *)static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__14_0, v26, Method_DialogMessageEntity___c__GetTargets_b__14_0__, 0);
            v27 = DialogMessageEntity___c_TypeInfo->static_fields;
            v27->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v27->__9__14_0,
              (int32_t)_9__14_0,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v7 = v25;
            v9 = v24;
            v10 = v23;
            this = v22;
            v8 = v21;
            p_monitor = v42;
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v18,
                                    (System_Converter_TInput__TOutput__o *)_9__14_0,
                                    *v10);
          if ( v12 )
          {
            if ( v13 >= LODWORD(v12[1].klass) )
LABEL_23:
              sub_21FFED4(v4);
            v40 = (int)v13++;
            *((_QWORD *)&v12[1].monitor + v40) = v4;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&p_monitor[v40], (int32_t)v4, v34, v35, v36, v37, v38, v39);
            v6 = this->fields.targetIds;
            if ( v6 )
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
  if ( (byte_59384CA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25348/*"titleFontSize"*/);
    byte_59384CA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25348/*"titleFontSize"*/, 0, 0);
}


System_String_array *DialogMessageEntity__GetTransitionParam(DialogMessageEntity_o *this, const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  __int64 v4; // x1

  if ( (byte_59384C8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25443/*"transitionParam"*/);
    byte_59384C8 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_25443/*"transitionParam"*/,
                  **(System_String_o ***)(qword_594C0B8 + 184),
                  0);
  if ( !StringValue )
    sub_21FFECC(0, v4);
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
  _BOOL4 v8; // w20
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v12; // x1
  __int64 CommonReleaseId; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4

  if ( (byte_59384C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59384C5 = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v7 = this->fields.dialogOpenType - 1;
  LOBYTE(v8) = v7 < 2;
  if ( DialogMessageEntity__GetCommonReleaseId(this, v9) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v12);
    if ( !Master_object )
      sub_21FFECC(CommonReleaseId, v14);
    return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0, 0, v15) && v7 < 2;
  }
  return v8;
}


bool DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_59384C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (DialogMessageEntity_o *)sub_21FFC50(&DataManager_TypeInfo);
    byte_59384C3 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, now);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v9);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v11)) == 0 )
  {
    sub_21FFECC(this, v10);
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
  if ( (byte_59384C4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59384C4 = 1;
  }
  if ( !now )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, start);
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
  CommonUI_o *v8; // x21
  System_Action_o *v9; // x22
  System_Nullable_float__o messagePosY; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v15; // x23
  System_Action_o *v16; // x24
  const MethodInfo *v17; // x1
  int32_t TitleFontSize; // w20
  const MethodInfo *v19; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v21; // x1
  int32_t spacingY; // w26
  const MethodInfo *v23; // x1

  if ( (byte_59384C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Action_Invoke__);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59384C6 = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.imageIds;
    v8 = (CommonUI_o *)Instance;
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0);
    if ( v8 )
    {
      CommonUI__OpenTutorialImageDialog_37315544(v8, v7, -1, 0, v9, 0, 0, 0, 0);
      return;
    }
LABEL_9:
    sub_21FFECC(messagePosY, v11);
  }
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v15 = (CommonUI_o *)v12;
  v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v28; // x23
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25
  const MethodInfo *v31; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v33; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v35; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v37; // x1
  float value; // s1

  if ( (byte_59384C7 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_float__get_HasValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_DialogMessageEntity___c__DisplayClass21_0__OpenConfirmDecideDialog_b__0__);
    sub_21FFC50(&DialogMessageEntity___c__DisplayClass21_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_59384C7 = 1;
  }
  v9 = sub_21FFEBC(DialogMessageEntity___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = decideCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)decideCallback, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v28 = (CommonUI_o *)Instance;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_DialogMessageEntity___c__DisplayClass21_0__OpenConfirmDecideDialog_b__0__,
    0);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v31);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v33);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v35);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v37);
  if ( !v28 )
LABEL_10:
    sub_21FFECC(titleFontSize, v11);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v28,
    title,
    message,
    decideTxt,
    v29,
    v30,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59384CF & 1) == 0 )
  {
    sub_21FFC50(&DialogMessageEntity___c_TypeInfo);
    byte_59384CF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DialogMessageEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void DialogMessageEntity___c__DisplayClass21_0___ctor(
        DialogMessageEntity___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DialogMessageEntity___c__DisplayClass21_0___OpenConfirmDecideDialog_b__0(
        DialogMessageEntity___c__DisplayClass21_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_59384D0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_DialogMessageEntity___c__DisplayClass21_1__OpenConfirmDecideDialog_b__1__);
    sub_21FFC50(&DialogMessageEntity___c__DisplayClass21_1_TypeInfo);
    byte_59384D0 = 1;
  }
  v5 = sub_21FFEBC(DialogMessageEntity___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_DialogMessageEntity___c__DisplayClass21_1__OpenConfirmDecideDialog_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
}


void DialogMessageEntity___c__DisplayClass21_1___ctor(
        DialogMessageEntity___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DialogMessageEntity___c__DisplayClass21_1___OpenConfirmDecideDialog_b__1(
        DialogMessageEntity___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  struct DialogMessageEntity___c__DisplayClass21_0_o *CS___8__locals1; // x8
  System_Action_o **p_callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !this->fields.isDecide )
  {
    if ( CS___8__locals1 )
    {
      p_callback = &CS___8__locals1->fields.callback;
      goto LABEL_6;
    }
LABEL_7:
    sub_21FFECC(this, method);
  }
  if ( !CS___8__locals1 )
    goto LABEL_7;
  p_callback = &CS___8__locals1->fields.decideCallback;
LABEL_6:
  ActionExtensions__Call(*p_callback, 0);
}