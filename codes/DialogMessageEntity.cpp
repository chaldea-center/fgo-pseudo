void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D035 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438D035 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


void __fastcall DialogMessageEntity__Open(
        DialogMessageEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v16; // x19
  CommonUI_o *v17; // x21
  System_Action_o *v18; // x22
  WebViewManager_o *v19; // x0
  System_String_o *message; // x19
  System_String_o *title; // x21
  CommonUI_o *v22; // x22
  System_Action_o *v23; // x23

  if ( (byte_438D034 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__);
    sub_B775C4(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__);
    sub_B775C4(&DialogMessageEntity___c__DisplayClass15_0_TypeInfo);
    byte_438D034 = 1;
  }
  v5 = sub_B77694(DialogMessageEntity___c__DisplayClass15_0_TypeInfo);
  DialogMessageEntity___c__DisplayClass15_0___ctor((DialogMessageEntity___c__DisplayClass15_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = this->fields.imageIds;
    v17 = (CommonUI_o *)Instance;
    v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)v5, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, 0LL);
    if ( v17 )
    {
      CommonUI__OpenTutorialImageDialog_18082288(v17, v16, -1, 0, v18, 0LL, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(v6, v7);
  }
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v22 = (CommonUI_o *)v19;
  v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v5, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, 0LL);
  if ( !v22 )
    goto LABEL_10;
  CommonUI__OpenNotificationDialog(v22, title, message, v23, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


System_Int32_array_array *__fastcall DialogMessageEntity__getTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  System_String_o *v5; // x1
  struct System_String_array *v6; // x8
  System_Int32_array_array *v7; // x20
  __int64 v8; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v11; // x22
  System_String_array *v12; // x0
  DialogMessageEntity___c_c *v13; // x8
  System_String_array *v14; // x22
  struct DialogMessageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x23
  Il2CppObject *v17; // x24
  struct DialogMessageEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_438D032 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_ConvertAll_string__int___);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Converter_string__int___ctor__);
    sub_B775C4(&System_Converter_string__int__TypeInfo);
    sub_B775C4(&int_____TypeInfo);
    sub_B775C4(&Method_DialogMessageEntity___c__getTargets_b__10_0__);
    sub_B775C4(&DialogMessageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438D032 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B775DC(int_____TypeInfo, 1LL);
  v4 = (System_String_o *)sub_B775DC(int_____TypeInfo, targetIds->max_length);
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_26:
    sub_B7769C(v4, v5);
  v7 = (System_Int32_array_array *)v4;
  v8 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_29;
    v4 = v6->m_Items[v8];
    if ( v4 )
    {
      v4 = System_String__Replace_44909172(
             v4,
             (System_String_o *)StringLiteral_15925/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v11 = System_String__Replace_44909172(
                v4,
                (System_String_o *)StringLiteral_16162/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v4 = (System_String_o *)sub_B775DC(char___TypeInfo, 1LL);
        if ( v4 )
        {
          v5 = v4;
          if ( !LODWORD(v4[1].klass) )
            goto LABEL_29;
          LOWORD(v4[1].monitor) = 44;
          if ( v11 )
          {
            v12 = System_String__Split(v11, (System_Char_array *)v4, 0LL);
            v13 = DialogMessageEntity___c_TypeInfo;
            v14 = v12;
            if ( (BYTE3(DialogMessageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
              v13 = DialogMessageEntity___c_TypeInfo;
            }
            static_fields = v13->static_fields;
            _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
            if ( !_9__10_0 )
            {
              if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v13);
                static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
              }
              v17 = (Il2CppObject *)static_fields->__9;
              _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__10_0,
                v17,
                Method_DialogMessageEntity___c__getTargets_b__10_0__,
                (const MethodInfo_21F7A30 *)Method_System_Converter_string__int___ctor__);
              v18 = DialogMessageEntity___c_TypeInfo->static_fields;
              v18->__9__10_0 = (struct System_Converter_string__int__o *)_9__10_0;
              sub_B77560(
                (BattleServantConfConponent_o *)&v18->__9__10_0,
                (System_Int32_array **)_9__10_0,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
            }
            v4 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                      v14,
                                      (System_Converter_TInput__TOutput__o *)_9__10_0,
                                      (const MethodInfo_2003100 *)Method_System_Array_ConvertAll_string__int___);
            if ( v7 )
            {
              v31 = (System_Int32_array **)v4;
              if ( v4 )
              {
                v4 = (System_String_o *)sub_B77684(v4, v7->obj.klass->_1.element_class);
                if ( !v4 )
                {
                  v34 = sub_B776BC(0LL);
                  sub_B77668(v34, 0LL);
                }
              }
              if ( (unsigned int)v8 >= v7->max_length )
              {
LABEL_29:
                v33 = sub_B776C8(v4);
                sub_B77668(v33, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v31;
              sub_B77560(p_monitor, v31, v25, v26, v27, v28, v29, v30);
              v6 = this->fields.targetIds;
              ++v8;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v6 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DialogMessageEntity__isOpenCondition(
        DialogMessageEntity_o *this,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  DialogMessageEntity__getTargets(this, *(const MethodInfo **)&ex1);
  return this->fields.dialogOpenType == 1;
}


bool __fastcall DialogMessageEntity__isOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  if ( (byte_438D033 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438D033 = 1;
  }
  if ( !now )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    now = NetworkManager__getTime(0LL);
  }
  return now >= this->fields.openedAt && now < this->fields.closedAt;
}


void __fastcall DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0

  if ( (byte_43885DC & 1) == 0 )
  {
    sub_B775C4(&DialogMessageEntity___c_TypeInfo);
    byte_43885DC = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DialogMessageEntity___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall DialogMessageEntity___c___ctor(DialogMessageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageEntity___c___getTargets_b__10_0(
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


void __fastcall DialogMessageEntity___c__DisplayClass15_0___ctor(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__0(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B7769C(0LL, method);
  System_Action__Invoke(callback, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__1(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B7769C(0LL, method);
  System_Action__Invoke(callback, 0LL);
}